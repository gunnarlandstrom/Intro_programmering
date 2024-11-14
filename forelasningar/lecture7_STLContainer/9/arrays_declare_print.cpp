#include <iostream>
#include <array>
#include <algorithm>
#include <iterator>
#include <utility>


void print(const int& i);
int main()
{
    const int N = 10;
    //constexpr const int N = 10; C++17

    //declare en array of size 10. not initialized
    std::array<int, 10> myArray; 

   //declare en array of size <int,6> by initializing
    std::array myArray1{1, 2, 3, 4, 5, 6};  //C++17

    //declare en array of size 10. initialized, the rest will be 0
    std::array<int, N> myArray2{1, 2, 3, 4, 5, 6}; 
    
    std::cout <<" Printing myArray2 with ordinary for and indexing:" << std::endl;
    for(unsigned int i= 0; i < myArray2.size();i++)
        std::cout <<myArray2[i] <<" ";

    std::cout << std::endl ;

    std::cout <<" Printing myArray2 with ordinary for using at():" << std::endl;
    for(int i= 0; i < 10;i++)
        std::cout <<myArray2.at(i) <<" ";

    std::cout << std::endl ;

    std::cout <<" Printing myArray2 with ordinary for using get<i>(myArray2):" << std::endl;
    //for(int i= 0; i < 10;i++) //no for
    //get is used when you know exactly which element
    //you want to get! decided at compile-time
    //at() is decided at run-time
    std::cout <<get<0>(myArray2) <<" ";
    std::cout <<get<1>(myArray2) <<" ";
    std::cout <<get<2>(myArray2) <<" ";
    std::cout <<get<3>(myArray2) <<" ";

    std::cout << std::endl ;
    std::cout << "Size of the array is: "
         << myArray2.size() << std::endl;

    std::cout <<" Printing myArray2 with ranged based for:" << std::endl;    
    for(const auto& element:myArray2)
        std::cout <<element << " ";
    
    std::cout << std::endl ;
    
    std::cout <<" Printing myArray1 with ranged based for:" << std::endl;    
    for(const auto& element:myArray1)
        std::cout <<element << " ";
    
    std::cout << std::endl ;
    /*
    //printing with for_each and a print-function
    std::for_each(myArray2.begin(),myArray2.end(),print);    

    //printing with for_each and lambda expression.
    std::for_each(myArray.begin(),myArray.end(),[](const auto &element){ std::cout <<element<<std::endl;});
    */
    auto i = std::ssize(myArray1); //C++17
    std::cout << "Size of myArray1 is: " << i << std::endl;
    

 return 0;
}

void print (const int& i)
{
    std::cout << "In print: " << i << std::endl;
}