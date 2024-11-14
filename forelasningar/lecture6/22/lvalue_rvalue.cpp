/**
 * @file lvalue_rvalue.cpp
 * @author Nayeb Maleki (Nayeb.Maleki@miun.se)
 * @brief 
 * @version 0.1
 * @date 2023-11-18
 * @referece https://www.bogotobogo.com/cplusplus/C11/5_C11_Move_Semantics_Rvalue_Reference.php
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>

void f(int& i);  //i kan INTE referera en literal, måste vara lvalue
void f(int&& i);  //i kan referera en literal, kan vara rvalue
int getValue ();

int main()
{
    int i = 77;
    f(i);    // lvalue ref called, like int& j=i; this is OK but not int& j=99
    f(99);   // rvalue ref called, like int &&j=99; this is ok

    f(std::move(i));  // rvalue ref called

    int i2 = getValue(); //ok
    int& i3 = getValue(); // NOT ok
    int&& i4 = getValue(); // ok
    const int& i5 = getValue(); //OK
    const int&& val = getValue(); // OK

    return 0;
}

void f(int& i) { std::cout << "lvalue ref: " << i << "\n"; }
void f(int&& i) { std::cout << "rvalue ref: " << i << "\n"; }

int getValue ()
{
    int ii = 10;
    return ii;
}
// accept any argument whether it be an lvalue or an rvalue. 
void printReference (const int& value)
{
        cout << value;
}
 
 // taking only an rvalue reference
 /*
 Rvalue reference:
 int &&a;: new (C++11) declaration rvalue reference.
non-const lvalue reference binds to an object.
rvalue reference binds to a temporary object 
which typically will not be used again.
*/
void printReference (int&& value)
{
        cout << value;
}

