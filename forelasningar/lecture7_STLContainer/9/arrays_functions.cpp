#include <iostream>
#include <array>
#include <algorithm>
#include <iterator>
#include <utility>
#include <string>

void print(const std::array<char,12>&, std::string what);
void print(const std::array<int,10>&, std::string what);

int main()
{ 
    std::array<int, 10> myArray;
    std::array<int, 10> myArray2{1, 2, 3, 4, 5, 6};
    std::array<char,12> charArray;
    std::string name {"Nayeb Maleki"};
    
    print(myArray2,"myArray2");
    
    std::cout <<"myArray2.front(): "<< myArray2.front() <<std::endl;
    std::cout <<"myArray2.back():  "<< myArray2.back() <<std::endl;

    //filling myArray
    myArray.fill(2);
    print(myArray,"myArray with fill");
    
    //swapping myArray and myArray2
    myArray.swap(myArray2) ;
    print(myArray,"myArray with swap");
     
    //copy from myArray2 to myArray
    std::copy(myArray2.begin(),myArray2.end(),myArray.begin());
    
    print(myArray,"myArray with copy");
  
    //copy to charArray
    std::copy(name.begin(),name.end(),charArray.begin());
    
    //transform to uppercase
    std::transform(charArray.begin(),charArray.end(),charArray.begin(),::toupper);
    
    print(charArray,"charArray with copy, transform");


   //Print out charArray reversed
   std::reverse(charArray.begin(),charArray.end());
   print(charArray,"charArray with reverse");


 return 0;
}

void print(const std::array<char,12>& anArray,std::string what)
{
  std::cout <<"Printing " << what << " and ranged based for:" << std::endl;  
   for(const auto& element:anArray)
       std::cout <<element;

   std::cout << std::endl;

}

void print(const std::array<int,10>& anArray,std::string what)
{
  std::cout <<"Printing " << what << " and ranged based for:" << std::endl;  
   for(const auto& element:anArray)
       std::cout <<element <<" ";

   std::cout << std::endl;

}