#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
	map<int, string> myMap; //create a map called myMap
    
	//TODO:: iserting values into a map
	
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




	cout << "The size of the map is: " << myMap.size() << endl;

	for(const auto& mapElement:myMap)
		cout << mapElement.first <<":" <<mapElement.second <<endl;


	cout << "Initial contents in myMap:\n";
	map<int, string>::iterator p;
	for (p = myMap.begin(); p != myMap.end(); p++)
		cout << p->first << " " << p->second << endl;
	
	
	cout << "The size of the map is: " << myMap.size() << endl;

	cout << "Initial contents in myMap:\n";
	
	for (p = myMap.begin(); p != myMap.end(); p++)
		cout << p->first << " " << p->second << endl;

	
	cout << "Enter a key to search for the name: ";
	int key;
	cin >> key;

	p = myMap.find(key); 


	if (p == myMap.end())
		cout << "  Key " << key << " not found in myMap" << endl;
	else
	{
		cout << "  " << p->first << ":" << p->second << endl;
		cout << "Now I am going to erase that value."<<endl;
		myMap.erase(key);
	}

	for (p = myMap.begin(); p != myMap.end(); p++)
		cout << p->first << " " << p->second << endl;

	return 0;
}
