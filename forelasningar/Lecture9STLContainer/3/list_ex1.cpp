//simple list in c++
//list is implemented as a Double linked list in C++


#include <iostream>
#include <vector>
#include <list>  

using namespace std;

int main()
{

  // Declaring list 
  std::list<int> list1{1, 2, 3}; 

  // Declaring another list 
  std::list<int> list2{4, 5, 6}; 

  // Assigning values using assign() 
  list1.assign({15, 20, 30}); 

  // Adding new value using emplace_front() 
  list1.emplace_front(40);

  // Assigning repeating values using assign() 
  // 5 elements with value 10 
  list2.assign(5, 10); 
  
  // Adding new value using emplace_back() 
  list2.emplace_back(20);

  for(auto& element: list1)
    cout <<element <<" ";
  cout << endl;

  //for list <> we can use pop_back(), 
  //or pop_front() to remove elements
  
  for(auto& element: list2)
  cout <<element <<" ";
cout << endl;

}