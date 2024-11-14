#include <iostream>

int main()
{
  // Prompt the user to enter three numbers
  double number1, number2, number3;
  std::cout << "Enter three numbers: ";
  std::cin >> number1 >> number2 >> number3;

  // Compute average
  double average = (number1 + number2 + number3) / 3;

  // Display result
  std::cout << "The average of " << number1 << " " << number2
      << " " << number3 << " is " << average << std::endl;

  return 0;
}
