#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  // Initialize sum
  double sum{0.0};

  // Add 0.01, 0.02, ..., 0.99, 1.0 to sum
  for (double i = 0.01; i <= 1.0; i = i + 0.01)
    sum += i;
  

  // Display result
  //cout << "The sum is: " << fixed<< setprecision(2)<<sum << endl;
 
  cout << "The sum is: " <<sum << endl;
 
  return 0;
}
