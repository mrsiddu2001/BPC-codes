#include <iostream>

int main() {
    int n;

    std::cout << "Enter the number of odd numbers to generate: ";
    std::cin >> n;

    std::cout << "Odd numbers: ";
    for (int i = 1; i <= n; i++) {
        std::cout << (2 * i - 1) << " ";
    }

    return 0;
}
