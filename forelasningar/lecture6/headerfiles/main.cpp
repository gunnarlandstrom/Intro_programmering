#include "functions.h"


int main()
{
    // Invoke the max function with int parameters
    cout << "The maximum between 3 and 4 is " << max(3, 4) << endl;
    // Invoke the max function with the double parameters
    cout << "The maximum between 3.0 and 5.4 is "<< max(3.0, 5.4) << endl;
    // Invoke the max function with three double parameters
    cout << "The maximum between 3.0, 5.4, and 10.14 is "<< max(3.0, 5.4, 10.14) << endl;

    return 0;
}