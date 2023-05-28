#include <stdio.h>

void generateOddNumbers(int n) {
    if (n <= 0)
        return;

    generateOddNumbers(n - 1);

    if (n % 2 != 0)
        printf("%d ", n);
}

int main() {
    int limit;

    printf("Enter the limit: ");
    scanf("%d", &limit);

    printf("Odd numbers up to %d: ", limit);
    generateOddNumbers(limit);
    printf("\n");

    return 0;
}
