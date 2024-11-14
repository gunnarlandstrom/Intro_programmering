#include <iostream>
#include <string>


int main()
{
	std::string firstname {" "}, lastname={" "};
	int age;

	std::cout << "Type your name: ";
	getline(std::cin, firstname);
	std::cout << "Type your lucky number: ";
	std::cin >> age;  
	std::cin.ignore();  
	std::cout << "Type your lastname: ";
	std::getline(std::cin, lastname);
	
	std::cout << firstname << std::endl;
	std::cout << lastname << std::endl;
	std::cout << age << std::endl;

	return 0;
}
