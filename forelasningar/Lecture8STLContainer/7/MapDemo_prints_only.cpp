#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
	map<int, string> myMap; //create a map called myMap


	for(const auto& mapElement:myMap)
		cout << mapElement.first <<":" <<mapElement.second <<endl;


	cout << "Initial contents in myMap:\n";
	map<int, string>::iterator p;
	for (p = myMap.begin(); p != myMap.end(); p++)
		cout << p->first << " " << p->second << endl;

	
	cout << "The size of the map is: " << myMap.size() << endl;

	
	cout << "Enter a key to search for the name: ";
	int key;
	cin >> key;

	p = myMap.find(key);  //p is already declared above


	if (p == myMap.end()) //if not found
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

