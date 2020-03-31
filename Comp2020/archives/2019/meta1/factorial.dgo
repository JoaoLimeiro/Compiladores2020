package main;

func factorial(n int) int {
    if n == 0 {
        return 1;
    };
    return n * factorial(n-1);
};

func main() {
    var argument int;
    argument,_ = strconv.Atoi(os.Args[1]);
    fmt.Println(factorial(argument));
};
