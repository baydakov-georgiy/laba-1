#include "index_first_negative.h"
#include "index_last_negative.h"

int multi_before_and_after_negative(int *arr, int arr_size) {
    int multi = 1;
    int start = index_first_negative(arr, arr_size);
    int finish = index_last_negative(arr, arr_size);
    for (int i = 0; i < start; i++) {
        multi *= arr[i];
    }
    for (int i = finish; i < arr_size; i++) {
        multi *= arr[i];
    }
    return multi;
}
