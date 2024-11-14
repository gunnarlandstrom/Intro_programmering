#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	vector<string> text;     // holds the input

	string s;
	fstream inOutFile("data.txt",ios::in|ios::out|ios::app);
	if(!inOutFile.is_open())
	{
		cout <<"The file is not open for reading. Going out." <<endl;
		return 0;
	}


	getline(inOutFile,s);
	while (!inOutFile.eof())  // read from file unless its eof
	{
		text.push_back(s);   // storing each line as an element in text
		getline(inOutFile,s);
	}

 	/*
	while (getline(infile, s))  // read the entire input file
		text.push_back(s);   // storing each line as an element in text
	*/
	

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

	//Now I want to put extra text in the file without removing anything.
	//I inOutFileneed to sure that its the end of the file
	//But since we reached eof before when reading 
	//we need to clear that first 
	inOutFile.clear();  // clear eof and other bits set
	inOutFile.seekp(ios::end); //go to the end
	inOutFile << "\nThis is extra text";

	inOutFile.close();  //we don't need the file anymore
	return 0;
}
