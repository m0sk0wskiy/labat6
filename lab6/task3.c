#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    double x, y;
    printf("Enter X and Y: ");
    scanf("%lf %lf", &x, &y);
    if (x < y) {
        printf("%.2f < %.2f\n", x, y);
    }
    else if (x > y) {
        printf("%.2f > %.2f\n", x, y);
    }
    else {
        printf("%.2f = %.2f\n", x, y);
    }

    return 0;
}
