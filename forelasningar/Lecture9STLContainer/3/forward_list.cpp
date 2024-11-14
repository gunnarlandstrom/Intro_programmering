//simple forward_list in c++
//forward_list is implemented as a simple_linked list in C++


#include <iostream>
#include <forward_list>  

using namespace std;

int main()
{
  // Declaring forward list 
  std::forward_list<int> list1{1, 2, 3}; 

  // Declaring another forward list 
  std::forward_list<int> list2{4, 5, 6}; 

  // Assigning values using assign() 
  list1.assign({1, 2, 3}); 

  // Adding new value using emplace_front() 
  list1.emplace_front(40);

  // Assigning repeating values using assign() 
  // 5 elements with value 10 
  list2.assign(5, 10);    

  // Adding new value using iterator 
  list2.insert_after(list2.begin(),20);

  for(auto& element: list1)
    cout <<element <<" ";
  cout << endl;

 
 cout << "List2 before pop:" <<endl;
  for(auto& element: list2)
  cout <<element <<" ";
cout << endl;

 list2.pop_front();

 cout << "List2 after pop:" <<endl;
  for(auto& element: list2)
  cout <<element <<" ";
cout << endl;

}