#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h> 
int main() {
    double x;
    printf("Enter x: ");
    scanf("%lf", &x);
    printf("F(%.2f) = %f\n", x,
        (x <= 3.0) ? (pow(x, 2) - 3 * x + 9) : (1.0 / (pow(x, 3) + 6)));
    return 0;
}
