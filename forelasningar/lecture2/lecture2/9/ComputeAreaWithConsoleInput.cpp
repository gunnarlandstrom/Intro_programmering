#include <iostream>

int main()
{
  
  double radius=0;
  int heltal=0;
  const double PI = 3.14159; //Deklaration och initiering...

  // Step 1: Read in radius
  std::cout << "Enter a radius: ";
  std::cin >> radius 
  std::cout <<"Mata in ett heltal:";
  std::cin >>heltal ;

  // Step 2: Compute area
  double area = radius * radius * PI;

  // Step 3: Display the area
  std::cout << "The area is: " << area << std::endl;
  
  std::cout << "The value in the variable heltal is: " << heltal << std::endl;

  return 0;
}