#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	vector<string> text;     // holds the input

	string s;
	ifstream infile("data.txt");
	if(!infile.is_open())
	{
		cout <<"The file is not open for reading. Going out." <<endl;
		return 0;
	}

 /*
 	// Alt. 1:
	getline(infile,s);
	text.push_back(s);   // storing each line as an element in text

	while (!infile.eof())  // read from file unless its eof
	{
		getline(infile,s);
		text.push_back(s);   // storing each line as an element in text
	}
 */
 //Alt. 2:

	while (getline(infile, s))  // read the input file until eof reached
		text.push_back(s);   // storing each line as an element in text
	
	infile.close();  //we don't need the file anymore

	cout << "text.size: " << text.size() << endl;

	// print each line in text up to the first blank line

	for (const auto element : text)
	{
		cout << element << endl;
	}


	// equivalent loop using arrow to dereference it and call empty
	/*
	for (auto it = text.begin(); it != text.end() && !it->empty(); ++it)
	
		cout << *it << endl;
		*/

	return 0;
}
