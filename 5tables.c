#include <stdio.h>

int main() {
    int num = 5;
    int i;

    printf("Multiplication Table of 5:\n");

    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
