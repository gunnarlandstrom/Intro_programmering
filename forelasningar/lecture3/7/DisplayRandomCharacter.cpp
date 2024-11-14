#include <iostream>
#include <cstdlib>


int main()
{
	char startChar{' '}, endChar{' '};

	std::cout << "Enter a starting character: ";
	std::cin >> startChar;  // Example 'A'=65

	std::cout << "Enter an ending character: ";
	std::cin >> endChar;  // Example 'F'=70

	// Get a random character
	char randomChar = static_cast<char>(startChar + rand() % 
		(endChar - startChar +1));

  std::cout << "The random character between " << startChar << " and " 
		<< endChar << " is " << randomChar << std::endl;

	
  return 0;
}