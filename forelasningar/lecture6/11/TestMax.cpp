#include <iostream>

//The row below is the function-prototype
int max(int num1, int num2);


int main()
{
  int i {5};
  int j {2};
  int k = max(i, j);  //Here we call the function
  std::cout << "The maximum between " << i <<
    " and " << j << " is " << k << std::endl;


  return 0;
}

/**
 * @brief Return the max between two numbers
 * 
 * @param num1 
 * @param num2 
 * @return int 
 */

int max(int num1, int num2) 
{
  int result{0};

  if (num1 > num2)
    result = num1;
  else
    result = num2;

  return result;
}