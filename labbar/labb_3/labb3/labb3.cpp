#include "funktion1.h"
#include "funktion2.h"
#include <fstream>
#include <iostream>

int main()
{
    bool isSorted;

    isSorted = isFileSorted("heltal.txt");
    if (isSorted)
    {
        std::cout << "File is sorted." << std::endl;
    }
    else
    {
        std::cout << "File is not sorted." << std::endl << std::endl;
    }

    sortFiles("heltal.txt", "uddatal.txt", "diverseHeltalOutput.txt");
    
    isSorted = isFileSorted("diverseHeltalOutput.txt");
    if (isSorted)
    {
        std::cout << "File is sorted." << std::endl;
    }
    else
    {
        std::cout << "File is not sorted." << std::endl;
    }

    return 0;
}