#include <stdio.h>

double power(double base, int exponent) {
    double result = 1.0;
    int i;

    if (exponent >= 0) {
        for (i = 0; i < exponent; i++) {
            result *= base;
        }
    } else {
        for (i = 0; i > exponent; i--) {
            result /= base;
        }
    }

    return result;
}

int main() {
    double base;
    int exponent;

    printf("Enter the base number: ");
    scanf("%lf", &base);

    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    double result = power(base, exponent);

    printf("%.2lf raised to the power of %d is %.2lf\n", base, exponent, result);

    return 0;
}
