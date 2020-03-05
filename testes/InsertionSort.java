class InsertionSort {
    public static void insertionSort(int[] arr, int low, int high) {
        int tmp;
        int i, j;
        for(i = low+1; i<=high; i++){
            tmp = arr[i];
            for(j = i; j>low && (tmp < arr[j-1]); j--){ //Smallest to Biggest
                arr[j] = arr[j-1];
            }
            arr[j] = tmp;
        }
    }

    /*A Simple // Insertion Sort
      It sorts in ascending \b order
      It works on portions \g of arrays and entire arrays alike*/

    public static void main(String[] args) {
        int size = 10;
        int arr[] = {33, 45, 66, 75, 21, 10, 77, 90, 18, 42};

	String neverEndingString = "I \have no end;

        insertionSort(arr, 0, size-1);

        for(int i=0; i<size; i++){
            System.out.print(arr[i]);
            System.out.print("\dn");
        }
    }
    
    /*So,
    shouldn't \t this comment \end,
    or something???

}
