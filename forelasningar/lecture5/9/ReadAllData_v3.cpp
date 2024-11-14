#include <iostream>
#include <fstream>
#include <sstream>  //for istringstream
using namespace std;

int main()
{
  string firstName{" "},lastName{" "}, row{" "};
  char mi{' '};
  int score{0};
  
  ifstream input;  //Declare an object of type ifstream
  input.open("scores.txt"); // Open a file

  //The two rows above can be changed to:
  // ifstream input("scores.txt");
  
  if (!input.is_open())
  {
    cout << "File does not exist" << endl;
    cout << "Exit program" << endl;
    return 0;
  }

  // Read data
  while (!input.eof()) // Continue if not end of file
  {
    getline(input,row);
    //Here we just read and print out
    //until there is nothing to read
    //cout << row <<endl;
    //Now let's parse the row into its components
    //We can read from the string.
    istringstream iss(row);
    iss >> firstName >> mi >> lastName >> score;
    
    cout << firstName << " " << mi << " " 
         << lastName << " " << score << endl;
  }

  input.close();

  cout << "Done Reading!" << endl;
  return 0;
}
