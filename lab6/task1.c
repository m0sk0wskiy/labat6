#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int yeas;
    printf("Введите год: ");
    scanf("%d", &yeas);

    if ((yeas % 4 == 0 && yeas % 100 != 0) || (yeas % 400 == 0)) {
        printf("год %d високосный\n", yeas);
    } else {
        printf("год %d не високосный\n", yeas);
    }
    return 0;
}
