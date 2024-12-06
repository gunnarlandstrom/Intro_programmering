#include "funktion1.h"

#include <fstream>
#include <iostream>

std::ifstream checkFileOne("osorterade_tal_1.txt");
std::ifstream checkFileTwo("osorterade_tal_2.txt");

int CheckNumberOne;
int CheckNumberTwo;

bool isFileSorted()
{

    checkFileOne >> CheckNumberOne;

    while (!checkFileOne.eof())
    {

        checkFileTwo >> CheckNumberTwo;

        if (CheckNumberOne > CheckNumberTwo)
        {

            return false;
        }

        CheckNumberOne = CheckNumberTwo;

        return true;
    }

    checkFileOne.close();
    checkFileTwo.close();

    return false;
}