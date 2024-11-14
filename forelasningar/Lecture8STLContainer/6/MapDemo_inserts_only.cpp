/**
 * @file MapDemo_inserts_only.cpp
 * @author Nayeb Maleki (Nayeb.Maleki@miun.se)
 * @brief Shows how to insert values into a map
 * @version 0.1
 * @date 2023-11-29
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>
#include <map>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	map<int, string> myMap; //create a map called myMap
	
	
	//TODO:: isert values into a map in different ways
	
	//Alt. 1:

	 //Assignment using array index notation, 
	 //the keys are unique but the values doesnt need
     //to be unique

	myMap[100] = "John Smith";
	myMap[101] = "Peter King";
	myMap[102] = "Jane Smith";
	myMap[103] = "Jeff Reed";
	myMap[104] = "Jeff Reed";
	
	//Alt. 2:

    //2) insert values into myMap using make_pair():

	myMap.insert(make_pair(104, "Jeff Reed"));

	
    //Alt. 3:

	// 3) insert values into myMap using STL pair

	myMap.insert(std::pair<int, string>(1923, "David D."));


    //Alt. 4:
	// 4) insert values into myMap using value_type
	
	myMap.insert(map<int, string>::value_type(1023,"Jarl J."));


	return 0;
}

