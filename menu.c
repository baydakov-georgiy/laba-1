#include <stdio.h>
#include "index_first_negative.h"
#include "index_last_negative.h"
#include "multi_between_negative.h"
#include "multi_before_and_after_negative.h"

void execute_instruction_code(int instruction_code, int* numbers, int numbers_size) {
    switch (instruction_code) {
        case 0:
            printf("%d\n", index_first_negative(numbers, numbers_size));
            break;
        case 1:
            printf("%d\n", index_last_negative(numbers, numbers_size));
            break;
        case 2:
            printf("%d\n", multi_between_negative(numbers, numbers_size));
            break;
        case 3:
            printf("%d\n", multi_before_and_after_negative(numbers, numbers_size));
            break;
        default:
            printf("Данные не корректны\n");
            break;
    }
}

int main() {
    int numbers[20];
    int numbers_size = 0;
    int code;
    char separator = ' ';

    scanf("%d%c", &code, &separator);
    while (separator != '\n') {
        scanf("%d%c", &numbers[numbers_size], &separator);
        numbers_size += 1;
    }

    execute_instruction_code(code, numbers, numbers_size);

    return 0;
}
