#include <iostream>

bool isDivisibleByTwo(int number) {
    if (number % 2 == 0) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    if (isDivisibleByTwo(number)) {
        std::cout << number << " is divisible by 2." << std::endl;
    }
    else {
        std::cout << number << " is not divisible by 2." << std::endl;
    }

    return 0;
}
