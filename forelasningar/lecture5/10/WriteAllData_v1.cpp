#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  string firstName{" "},lastName{" "};
  char mi{' '};
  int score{0};
  
  // Open a file Alternative 1:
  ifstream input("scores.txt");
  ofstream output("outputfile.txt");

  if (!input.is_open())
  {
    cout << "File does not exist/couldn't open. Exits program." << endl;
    return 0; //exit(0);
  }

  // Read data
  input >> firstName >> mi >> lastName >> score;
  while (!input.eof()) // Continue if not end of file
  {
    output << firstName << " " << mi << " " << lastName << " " << score << endl; 
	  input >> firstName >> mi >> lastName >> score;  
  }

  input.close();
  output.close();
  cout << "Done" << endl;
  return 0;
}
