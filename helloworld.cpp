#include <iostream>

int main() {
    int number;

    std::cout << "Enter a number: ";
    std::cin >> number;

    if (number % 2 == 0 && number % 3 == 0) {
        std::cout << "HelloWorld" << std::endl;
    } else if (number % 2 == 0) {
        std::cout << "Hello" << std::endl;
    } else if (number % 3 == 0) {
        std::cout << "World" << std::endl;
    }

    return 0;
}
