#include <iostream>

int main() {
    int number = 5;
    
    std::cout << "Multiplication Table for " << number << ":" << std::endl;
    
    for (int i = 1; i <= 10; ++i) {
        std::cout << number << " * " << i << " = " << number * i << std::endl;
    }
    
    return 0;
}
