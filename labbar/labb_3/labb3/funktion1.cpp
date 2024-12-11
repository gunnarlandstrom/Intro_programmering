#include "funktion1.h"

std::ifstream fileOneSort("Heltal.txt");
std::ifstream fileTwoSort("Uddatal.txt");
int numberOne;
int numberTwo;
bool isSorted;

bool isFileSorted()
{

    fileOneSort >> numberOne;

    while (!fileOneSort.eof())
    {

        fileOneSort >> numberTwo;

        if (numberOne > numberTwo)
        {

            isSorted = false;
            return isSorted;
        }

        numberOne = numberTwo;

        isSorted = true;
    }
    return false;
}