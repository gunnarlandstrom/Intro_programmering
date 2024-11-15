#include <iostream>
#include <cmath>
#include <iomanip>


int main() {

    float a, b, c, x1, x2, discriminant, realPart, imaginaryPart;
    std::cout << "Enter coefficients a, b and c: ";
    std::cin >> a >> b >> c;
    discriminant = pow(b,2) - 4*a*c;
    
    if (discriminant > 0) {
        x1 = (-b + sqrt(discriminant)) / (2*a);
        x2 = (-b - sqrt(discriminant)) / (2*a);
        std::cout << "Roots are real and different." << std::endl;
        std::cout << "x1 = " << x1 << std::endl;
        std::cout << "x2 = " << x2 << std::endl;
    }
    
    else if (discriminant == 0) {
        std::cout << "Roots are real and same." << std::endl;
        x1 = -b/(2*a);
        std::cout << "x1 = x2 =" << x1 << std::endl;
    }

    else {
        realPart = -b/(2*a);
        imaginaryPart =sqrt(-discriminant)/(2*a);
        std::cout << "Roots are complex and different."  << std::endl;
        std::cout <<scientific;
        std:: cout << "x1 = " << realPart << "+" << imaginaryPart << "i" << std::endl;
        std::cout << "x2 = " << realPart << "-" << imaginaryPart << "i" << std::endl;
    }

    return 0;
}