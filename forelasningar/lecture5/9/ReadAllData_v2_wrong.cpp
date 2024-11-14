#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  string firstName{" "},lastName{" "};
  char mi{' '};
  int score{0};
  
  ifstream input;
  input.open("scores.txt"); // Open a file

  //The two rows above can be changed to:
  // ifstream input("scores.txt");
  
  if (!input.is_open())
  {
    cout << "File does not exist" << endl;
    cout << "Exit program" << endl;
    return 0;  //exit(0);
  }

   //This version is wrong because
   //before it eof() checked, last cout
   //executed twice!
   // means last two is printed out twice!
  while (!input.eof()) // Continue if not end of file
  {
    // Read one row of data
    input >> firstName >> mi >> lastName >> score;
    
    cout << firstName << " " << mi << " " 
         << lastName << " " << score << endl;
  }
  // Close the file
  input.close();
  cout << "Done reading" << endl;
  return 0;
}
