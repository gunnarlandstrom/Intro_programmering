#include <iostream>
#include <iomanip>





int main()
{

  
  // Enter purchase amount
  double purchaseAmount;
  std::cout << "Enter purchase amount: ";
  std::cin >> purchaseAmount;

  double tax = purchaseAmount * 0.06;
  const double PI = 3.14159;
  std::cout << "Sales tax is " << tax << std::endl;
  std::cout << "Sales tax is " << (static_cast<int>(tax * 100)) / 100 <<std::endl; //the result is without decimal points
  std::cout << "Sales tax is " << (static_cast<int>(tax * 100)) / 100.0 <<std::endl;  //the result with decimal points
  // The difference without fixed and with fixed is:

  std::cout<< std::setprecision(2)<< PI <<std::endl;
  std::cout<< std::fixed << std::setprecision(2)<< PI <<std::endl;
  
  /* 
  * std::fixed means that the output will have a fixed number of digits
  * std::setprecision(n) means that the output will have n digits after the decimal point.
  * 
  * */

   

  return 0;
}
