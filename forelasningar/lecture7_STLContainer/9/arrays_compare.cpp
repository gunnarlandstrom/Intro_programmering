#include <iostream>
#include <array>
#include <cstdlib>
#include <ctime>

int main()
{
    std::srand(time(0));
    std::array<int, 10> myArray;
    std::array<int, 10> myArray2{1, 2, 3, 4, 5, 6};

    //generate ONE value for all positions
    myArray.fill(std::rand()%10); 

    for(const auto& element:myArray)
    {
        std::cout << element <<" ";
    }
    std::cout << std::endl;

    std::cout << std::boolalpha << std::endl;
    std::cout << "(myArray2 == myArray):" 
              << (myArray2 == myArray) << std::endl;
    std::cout << "(myArray2 >= myArray):" 
              << (myArray2 >= myArray) << std::endl;
    std::cout << "(myArray2 != myArray):"
              << (myArray2 != myArray) << std::endl;
    std::cout << "(myArray2 < myArray): " 
              << (myArray2 < myArray) << std::endl;
    std::cout << "(myArray2 <= myArray):" 
              << (myArray2 <= myArray) << std::endl;

 return 0;
}
