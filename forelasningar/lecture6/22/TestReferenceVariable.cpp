#include <iostream>
using namespace std;

int sum (const int& tal);

int main()
{
  int count = 1;
  int& r = count;
  cout << "count is " << count << endl;
  cout << "r is " << r << endl;

  r++;
  cout << "count is " << count << endl;
  cout << "r is " << r << endl;

  count = 10;
  cout << "count is " << count << endl;
  cout << "r is " << r << endl;
  cout << sum(count) <<endl;

    cout << count << endl;

  return 0;
}

int sum(const int& tal)
{

  int tal1 = tal;
  tal1 =tal +1 ;
  return 0;
}