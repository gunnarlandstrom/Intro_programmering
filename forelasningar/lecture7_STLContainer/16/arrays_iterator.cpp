#include <iostream>
#include <array>
#include <algorithm>
#include <iterator>
#include <utility>
void print(const int& i);
int main()
{ 
    //std::array<int, 10> myArray;
    std::array<int, 10> myArray2{1, 2, 3, 4, 5, 6}; 
    
    
    std::cout <<"Printing myArray2 with ranged based for:" << std::endl;    
    for(const auto& element:myArray2)
        std::cout <<element << " ";

    std::cout << std::endl;
    //using iterator
    std::cout <<"Printing myArray2 using iternator: " << std::endl;    
    
    std::array<int, 10>::iterator iter;
    for(iter = myArray2.begin(); iter < myArray2.end(); iter++)
      std::cout<<*iter<<" ";

    std::cout << std::endl;
    // Declaring the vector iterator
    iter = myArray2.begin();
 
    // Printing each element using advance
    //void advance (InputIterator& it, Distance n);
    while (iter < myArray2.end()) {
        std::cout << *iter << " ";
        std::advance(iter, 1); 
    }
    std::cout << std::endl;

    auto pa = std::prev(iter,2); 
    std::cout << *pa << std::endl;

    //using next 
   auto pb = std::next(iter,1);
   std::cout<< *pb << std::endl;
   
 return 0;
}

