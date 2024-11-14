/*
 This program reads character values
*/
#include <iostream>
#include <iomanip>

int main()
{
    char c{' '}, next{' '} ;
    std::cout << "Type a character: ";
    std::cin  >> c ;
    std::cout << "You typed: " << c << std::endl;

    std::cout << "Next character is: " << ++c << std::endl;

    //casting character to its integer ascii value
    std::cout << "The ascii value of " <<c << " is: "<< static_cast<int>(c) << std::endl;

    int i = '2' + '3'; // '2' has ascii code 50 and '3' has 51
    
    std::cout << "i is " << i << std::endl; // i is integer value of 101
    int j = 2 + 'a'; // 'a' ascii value 97
    std::cout << "j is " << j  << std::endl;
    std::cout << j << " is the ASCII code for character " <<
    static_cast<char>(j) << std::endl;

    return 0;
}