#include <iostream>
using namespace std;

const double PI = 3.14159;

double calculateArea(double radius) {
    return PI * radius * radius;
}

int main() {
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    
    double area = calculateArea(radius);
    
    cout << "The area of the circle is: " << area << endl;
    
    return 0;
}
