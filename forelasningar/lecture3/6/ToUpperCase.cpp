
#include <iostream>


int main()
{

  char lowercaseLetter {' '},uppercaseLetter{' '};
  std::cout << "Enter a lowercase letter: ";
  std::cin >> lowercaseLetter;

  std::cout << "The corresponding uppercase letter is " 
  << static_cast<char>(std::toupper(lowercaseLetter)) <<std::endl;
  
  //std::tolower(uppercaseLetter);  //this would convert to lowercase
   
   //How would we convert a character integer to corresponding integer?
   

  return 0;
}

//you can test this too!
/*
  cout << static_cast <int>(lowercaseLetter) <<endl;
  cout << static_cast<int> ('A') <<endl;
  cout << static_cast<int> ('a') <<endl;
  
  uppercaseLetter = static_cast<char>('A' + (lowercaseLetter - 'a'));
  cout << "The corresponding uppercase letter is " 
    << uppercaseLetter << endl;
  */