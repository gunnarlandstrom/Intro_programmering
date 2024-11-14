/**
 * @file TemplateFunction.cpp
 * @author Nayeb Maleki (Nayeb.Maleki@miun.se)
 * @brief This example is NOT part of the course
 *        just an example to show another way of Polymorphism in C++
 * @version 0.1
 * @date 2023-11-16
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
using namespace std;

 template <typename T2, typename T3> 
T2 maxNumber(T2 num1, T3 num2);

int main()
{
  cout << maxNumber('h', 'B') << endl;
  //here I turn T1 to double which also
  //is the return type, if I do not
  //it will return 5 instead of 5.5
  cout << maxNumber<double>(4,5.5) << endl;

  cout << maxNumber(5.7, 4.8) << endl;
  cout << maxNumber(4, 5) << endl;  
  return 0;
}

 template <typename T2, typename T3> 
T2 maxNumber(T2 num1, T3 num2)
{
  if (num1 > num2)
    return num1;
  
  return num2;
}
