#include <iostream>
#include <cctype>


int main()
{
  std::cout << "Enter a character: ";
  char ch{' '};
  std::cin >> ch;

  std::cout << "You entered " << ch << std::endl;
  std::cout <<"islower(ch) gives:" << std::islower(ch) << std::endl;

  std::cout << "Its equivalent uppercase letter is " <<
  static_cast<char>(std::toupper(ch)) << std::endl;

  std::cout <<"isupper(ch) gives:" << isupper(ch) << std::endl;

  std::cout << "Its equivalent lowercase letter is " <<
  static_cast<char>(std::tolower(ch)) << std::endl;


  std::cout <<"isdigit(ch) gives:" << std::isdigit(ch) << std::endl;
  
/*
  if (islower(ch)) 
  {
    cout << "It is a lowercase letter " << endl;
    cout << "Its equivalent uppercase letter is " <<
      static_cast<char>(toupper(ch)) << endl;
  }
  else if (isupper(ch)) 
  {
    cout << "It is an uppercase letter " << endl;
    cout << "Its equivalent lowercase letter is " <<
      static_cast<char>(tolower(ch)) << endl;
  }
  else if (isdigit(ch)) 
  {
    cout << "It is a digit character " << endl;
  }

  */

  return 0;
}
