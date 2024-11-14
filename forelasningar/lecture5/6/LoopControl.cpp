#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
  char continueLoop {'Y'};
  while (continueLoop == 'Y') 
  {
    // Execute body once
    // Prompt the user for confirmation
    std::cout << "Enter Y to continue and N to quit: ";
    std::cin >> continueLoop;
    //Y and y are actually the same
    //How can I make the program to work
    // for both?
  }


  return 0;
}
