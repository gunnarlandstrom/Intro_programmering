#include <iostream>
using namespace std;

// Avoid function overloading 
// where the parameters are too
//close, 
float maxNumber(float num1, double num2);
double maxNumber(double num1, float num2);

int main()
{
  cout << maxNumber(1, 2.0) << endl;
  return 0;
}


int maxNumber(float num1, double num2)
{
  cout << "int maxNumber(int num1, double num2) is called" <<endl;
  if (num1 > num2)
    return num1;
  else
    return num2;
}
double maxNumber(double num1, float num2)
{
  cout << "double maxNumber(double num1, int num2) is called" <<endl;

  if (num1 > num2)
    return num1;
  else
    return num2;
}