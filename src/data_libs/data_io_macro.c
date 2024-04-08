#include "data_io_macro.h"

void input(void *data, int n) {
    // Пример чтения данных, можно заменить на вашу реализацию
    for (int i = 0; i < n; i++) {
        if (sizeof(int) == sizeof(char)) {
            int value;
            scanf("%d", &value);
            *((int*)data + i) = value;
        } else if (sizeof(int) == sizeof(double)) {
            double value;
            scanf("%lf", &value);
            *((double*)data + i) = value;
        } else {
            // Другие типы данных
        }
    }
}

void output(void *data, int n) {
    // Пример вывода данных, можно заменить на вашу реализацию
    for (int i = 0; i < n; i++) {
        if (sizeof(int) == sizeof(char)) {
            printf("%d ", *((int*)data + i));
        } else if (sizeof(int) == sizeof(double)) {
            printf("%lf ", *((double*)data + i));
        } else {
            // Другие типы данных
        }
    }
    printf("\n");
}