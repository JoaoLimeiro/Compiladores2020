#!/bin/bash
#title              :test.sh
#description        :Este script serve para comparar os casos de teste do repositório com o obtido
#author             :Alex Faria (afaria)
#usage              :test.sh
#notes              :Instalar colordiff para ter cores no diff.
#bash_version       :4.3.11(1)-release
#==============================================================================

usage() {
  echo -n "Usage:
  $0 -b ../gocompiler -m 1
  $0 -b gocompiler -m 2
  $0 -b gocompiler -f ./Comp2019
  $0 -b gocompiler -f ./Comp2019 -m 3

Script de teste do repositorio de casos de teste

 Options:
  -b, --bin           Localizacao do gocompiler.
  -f, --folder        Path para a pasta do repositorio de casos de teste.
                        utiliza a pasta do script por default
  -m, --meta          Numero da meta a testar, testa todas por omissao.
  -h, --help          Display this help and exit.
"
}

# mostra menu de ajuda se nao forem passados argumentos nenhuns
if [ $# -eq 0 ]; then
    usage
    exit 1
fi

# path para a pasta do repositório com casos de teste
# por defeito e a pasta onde o script se encontra
folder="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"
# path para o executavel 'gocompiler'
bin="../gocompiler"
# meta a testar, testa todas por omissao
meta=""

# parse dos argumentos
# https://devhints.io/bash

while [[ "$1" =~ ^- && ! "$1" == "--" ]]; do
	case $1 in
		-m | --meta )
		shift; meta="$1"
		;;
		-f | --folder )
		shift; folder="$1"
		;;
		-b | --bin )
		shift; bin="$1"
		;;
		-h | --help )
		shift;
		usage
		exit 0
	esac;
	shift;
done

if [[ "$1" == '--' ]]; then
	shift;
fi

bin="$(readlink -f "$bin")"

# command to compare two files ignoring trailing white space
compare="diff -qaZ --strip-trailing-cr"
# opcoes a passar ao comando de diff
options="-yaZ -W $(tput cols) --strip-trailing-cr"
# comando que verifica se o colordiff existe
checkcolordiff="command -v colordiff"
# nome do ficheiro output temporario
output="/tmp/gocompiler.$$"

# check if colordiff exists, if not use normal diff instead
if $checkcolordiff &>/dev/null; then
	diff="colordiff $options"
else
	diff="diff $options"
fi

# contadores de testes efetuados
count=0
failed=0

# verifica se o executavel gocompiler existe
if [ ! -f "$bin" ]; then
	printf "Error. '%s' does not exist.\n" "$bin"
	exit 1
fi

if [ ! -x "$bin" ]; then
	printf "Error. '%s' is not executable.\n" "$bin"
	exit 1
fi

function finish {
	printf "\n%s tests, %s failures\n\n" "$count" "$failed"

	if ! $checkcolordiff &>/dev/null; then
		echo "Optional dependencies"
		echo "  colordiff - a tool to colorize diff output"
	fi

	# apagar ficheiro temporario
	[ -e "$output" ] && rm $output
}

trap finish EXIT

# imprimir a localizacao do gocompiler
printf "▸ using %s\n" "$bin"

# itera sobre todos os ficheiros e pastas de Comp2019/
for d in "$folder"/*; do

	# ignorar ficheiros dentro da pasta 'Comp2019'
	if [[ ! -d "$d" ]]; then
		continue;
	fi

	# verifica que meta a testar
	if [[ -n "$meta" ]] && [[ "${d:(-1)}" != "$meta" ]]; then
		continue;
	fi

	# imprimir em que meta esta atualmente
	printf "▸ %s\n" "$(basename "$d")"

	# escolhe qual flag utilizar na execucao do gocompiler
	if [[ "$d" =~ .(meta1) ]]; then
		opts="-l";		# -l para meta 1
	elif [[ "$d" =~ .(meta2) ]]; then
		opts="-t";		# -t para meta 2
	elif [[ "$d" =~ .(meta3) ]]; then
		opts="-s";		# -s para meta 3
	elif [[ "$d" =~ .(meta4) ]]; then
		opts="";		# ? para meta 4
	fi

	# itera sobre todos os ficheiros das subpastas de Comp2019/ ( meta1, meta2, meta3, meta4 )
	for i in "$d"/*; do

		# ignorar se nao for um ficheiro com a seguinte extensao: .deigo, .dgo, .go
		if [[ ! "$i" =~ .*\.(deigo|dgo|go) ]]; then
			continue;
		fi

		# nome do ficheiro a comparar output
		validate="${i%.*}.out"

		# ignorar se o ficheiro de output do caso de teste nao existir
		if [[ ! -e "$validate" ]]; then
			printf " Ø %s is missing, skipping\n" "$(basename "$validate")"
			continue
		fi

		# incrementar o contador de testes corridos
		count=$((count + 1))

		# correr o compilador guardando no ficheiro temporario

		# se pasta da meta 3 e se o caso de teste conter 'erro' no nome
		if [[ "${d:(-1)}" == "3" ]] && [[ "$i" == *"erro"* ]]; then
			"$bin" < "$i" | sort > "$output";
		else
			"$bin" "$opts" < "$i" > "$output";
		fi


		# compara se o output e igual ao esperado do caso de teste
		if $compare "$output" "$validate" &>/dev/null; then
			printf "  ✓ %s\n" "$(basename "$i")"
		else
			failed=$((failed + 1))
			printf "  ✗ %s\n" "$(basename "$i")"
			read -rn 1 -p "  → diff? [y/n] " input_data

			# prompt que pede se deseja ver o diff quando o output nao e o esperado
			if [ "$input_data" == "y" ]; then
				printf "\n...............\n"
				$diff "$output" "$validate"
				printf "...............\n"
			else
				echo ""
			fi
		fi
	done
done

exit 0
