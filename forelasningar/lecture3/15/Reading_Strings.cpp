#include <iostream>
#include <string>


int main()
{
    std::string city{" "};

	std::cout << city.size() << std::endl;
	std::cout << city.capacity() << std::endl;
	std::cout << "Enter a city:";
	std::cin >> city;
    std::cout << "You entered " << city << std::endl;
	//std::cin.ignore();  //clear buffer, better
	//std::cin.sync();   //clear buffer, but its not working all the time
	std::cout << "Enter a city name:";
	getline(std::cin,city,'\n'); 
    //getline(std::cin,city);
	std::cout << "You entered " << city << std::endl;


	return 0;
} 
