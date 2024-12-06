#include "funktion2.h"

#include <fstream>
#include <iostream>

std::ifstream sortFileOne("heltal.txt");
std::ifstream sortFileTwo("uddatal.txt");
std::ofstream sortOutput("diverseHeltalOutput.txt");

int sortNumberOne;
int sortNumberTwo;

int sortFiles()
{

    sortFileOne >> sortNumberOne;
    sortFileTwo >> sortNumberTwo;

    while (!sortFileOne.eof() && !sortFileTwo.eof())
    {

        if (sortNumberOne < sortNumberTwo)
        {

            sortOutput << sortNumberOne;
            sortFileOne >> sortNumberTwo;
        }
        else
        {

            sortOutput << sortNumberTwo;
            sortFileTwo >> sortNumberTwo;
        }
    }

    while (!sortFileOne.eof())
    {

        sortOutput << sortNumberOne << " ";
        sortFileOne >> sortNumberOne;
    }

    while (!sortFileTwo.eof())
    {

        sortOutput << sortNumberTwo << " ";
        sortFileTwo >> sortNumberTwo;
    }

    sortFileOne.close();
    sortFileTwo.close();
    sortOutput.close();

    return 0;
}