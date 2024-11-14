#include <iostream>
using namespace std;

int main()
{
  int sum {0};
  int number {0};
  while(number < 20 and sum < 100)
    {
	    number ++;
	    sum += number;
    }

  cout << "The number is " << number << endl;
  cout << "The sum is " << sum << endl;

  return 0;

}