#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
   srand(time(0));
  // Generate a random number to be guessed
  int number {rand() % 101};
  int guess {-1};

  cout << "Guess a magic number between 0 and 100.";

 
  while (guess != number)
  {
    // Prompt the user to guess the number
    cout <<endl<<"Enter your guess: ";
    cin >> guess;

    if (guess == number)
      cout << "Yes, the number is " << number << endl;
    else if (guess > number)
      cout << "Your guess is too high" << endl;
    else
      cout << "Your guess is too low" << endl;
  } // End of loop


  
  char continueLoop {'Y'};
  while (continueLoop == 'Y') 
  {
    // Execute body once
    // Prompt the user for confirmation
    std::cout << "Enter Y to continue and N to quit: ";
    std::cin >> continueLoop;
  }


  return 0;
}
