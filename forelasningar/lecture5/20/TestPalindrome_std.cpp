#include <string>
#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
  
	string word{" "}, reverse_of_word{" "};
	while (true) 			//stop this loop by typing "no" from the keyboard	
	{
		cout << "Enter a string. \"no\" stops the loop-->program): ";
		getline(cin, word);
		if(word =="no")
		 {
			 cout <<" Have a nice time!." <<endl;
			 return 0;
		 }

		reverse_of_word = word;
		reverse(word.begin(), word.end());  //reverse() function can be find in "algorithm"
											  //see #include statements

		if (word == reverse_of_word)
			cout << "Ok, its Plaindrom." << endl;
		else
			cout << "No, its not palindrom." << endl;
		
	}
	return 0;

}





