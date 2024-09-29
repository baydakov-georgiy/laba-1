int index_last_negative(int *arr, int arr_size) {
    int last_negative = -1;
    for (int i = 0; i < arr_size; i++) {
        if (arr[i] < 0) {
            last_negative = i;  
        }
    }
    return last_negative;
}
