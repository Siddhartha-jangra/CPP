#include <iostream>
#include <cmath> // Include this header for pow()

int main() {
    double base = 5.0;
    double exponent = 2.0;

    // Calculate 5 raised to the power of 2
    double result = std::pow(base, exponent);

    std::cout << base << " raised to the power of " << exponent << " is " << result << std::endl;
    // Output: 5 raised to the power of 2 is 25

    // You can also use it directly
    std::cout << "3^4 is " << std::pow(3, 4) << std::endl;
    // Output: 3^4 is 81

    return 0;
}