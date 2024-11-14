#include <iostream>


int main()
{
  double radius; //Deklaration av en variabel med namnet radius
  
  double area;

 // we could also write: double area, radius; 
 //since both have the same type "double".

  const double PI = 3.14159; //Deklaration och initiering...
  
  // Step 1: Read in radius
  radius = 20;     //tilldelar värdet 20 till radius

  // Step 2: Compute area
  area = radius * radius * PI;

  // Step 3: Display the area
  std::cout << "The area is ";
  std::cout << area << std::endl;

  return 0;
}
