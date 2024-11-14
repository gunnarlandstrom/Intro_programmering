#include <iostream>
#include <cmath>   // for mathematical functions
#include <ctime>    // for time functions
#include <string>   //for string manipulation


int main()
{
    int a, b, c ;
    
    time_t current_time = time(0); 

    std::cout << "Enter coefficients a, b and c: ";
    std::cin >> a >> b >> c; 

    //starting to calculate 
   
    int discriminant = pow(b,2) - 4*a*c;
    // The answers are only for discriminant > 0
    
    std::cout <<"discriminant:" <<discriminant <<std::endl;
    std::cout <<"sqrt(discriminant)"<<sqrt(discriminant) <<std::endl;
    int x1 = (-b + sqrt(discriminant)) / (2*a);
    int x2 = (-b - sqrt(discriminant)) / (2*a);

    std::cout << "Roots are:" << std::endl;

    std::cout << "x1 = " << x1 << std::endl;
    std::cout << "x2 = " << x2 << std::endl;

    
   string now = ctime(&current_time);
   std::cout <<"Current time is: "<< now << std::endl; //ctime() returns current time

    return 0;
}