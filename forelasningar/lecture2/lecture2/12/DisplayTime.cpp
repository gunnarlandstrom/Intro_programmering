#include <iostream>


int main()
{
  int seconds = 500;
  int minutes = seconds / 60;
  int remainingSeconds = seconds % 60;
  
  std::cout << seconds << " seconds is " << minutes <<
    " minutes and " << remainingSeconds << " seconds " << std::endl;

  return 0;
}
