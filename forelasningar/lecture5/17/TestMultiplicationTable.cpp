#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout << "       Multiplication Table" << endl;
	cout << "--------------------------------" << endl;

	// Display the number title
	cout << "  | ";
	for (int j = 1; j <= 9; j++)
		cout << setw(3) << j;

	cout << endl;
cout <<"--------------------------------" << endl;
	// Print table body
	for (int i = 1; i <= 9; i++) {
		cout << i << " | ";
		for (int j = 1; j <= 9; j++) {
			// Display the product and align properly
			cout << setw(3) << i * j;
		}
		cout << endl;
	}

	return 0;
}