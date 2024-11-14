#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  string row;
  
  // Open a file Alternative 1:
  ifstream input("scores.txt");
  ofstream output("outputfile.txt");

  if (!input.is_open())
  {
    cout << "File does not exist/couldn't open. Exits program." << endl;
    return 0; //exit(0);
  }

  // Read data
  
  while (!input.eof()) // Continue if not end of file
  {
    getline(input,row);
	  output << row <<endl;
  }

  input.close();
  output.close();
  cout << "Done" << endl;
  return 0;
}
