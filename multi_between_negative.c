#include "index_first_negative.h"
#include "index_last_negative.h"

int multi_between_negative(int *arr, int arr_size) {
    int multi = 1;
    int start = index_first_negative(arr, arr_size);
    int finish = index_last_negative(arr, arr_size);
    for (int i = start; i < finish; i++) {
        multi *= arr[i];
    }
    return multi;
}
