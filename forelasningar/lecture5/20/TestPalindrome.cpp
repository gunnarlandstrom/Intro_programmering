#include <iostream>
#include <string>
using namespace std;
//This program checks a string for palindrome
//It runs only once. You can make it run until a
//specific string is typed. See the other version

int main()
{
  // Prompt the user to enter a string
  cout << "Enter a string: ";
  string s{" "};
  getline(cin, s);

  // The index of the first character in the string
  int string_start{0};

  // The index of the last character in the string
  //auto string_end {s.length() - 1};
  int string_end = s.length() - 1;
  bool isPalindrome {true};
  while (string_start < string_end and isPalindrome != false) 
  {
    //Compare the characters in positions
    //s[string_start] and s[string_end] which are
    //s[0] and s[s.length()-1]
    //first and last character 
    if (s[string_start] != s[string_end])    
      isPalindrome = false; // Not a palindrome
    
    string_start++;
    string_end--;
  }

  if (isPalindrome)
    cout << s << " is a palindrome" << endl;
  else
    cout << s << " is not a palindrome" << endl;

  return 0;
}
