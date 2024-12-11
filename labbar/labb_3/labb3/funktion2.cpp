#include "funktion2.h"

std::ifstream fileOneMerge("Heltal.txt");
std::ifstream fileTwoMerge("Uddatal.txt");
std::ofstream sortOutput("diverseHeltalOutput.txt");
int sortNumberOne;
int sortNumberTwo;


void sortFiles()
{

    fileOneMerge >> sortNumberOne;
    fileTwoMerge >> sortNumberTwo;

    while (!fileOneMerge.eof() && !fileTwoMerge.eof())
    {

        if (sortNumberOne < sortNumberTwo)
        {

            sortOutput << sortNumberOne;
            fileOneMerge >> sortNumberTwo;
        }
        else
        {

            sortOutput << sortNumberTwo;
            fileTwoMerge >> sortNumberTwo;
        }
    }

    while (!fileOneMerge.eof())
    {

        sortOutput << sortNumberOne << " ";
        fileOneMerge >> sortNumberOne;
    }

    while (!fileTwoMerge.eof())
    {

        sortOutput << sortNumberTwo << " ";
        fileTwoMerge >> sortNumberTwo;
    }

    fileOneMerge.close();
    fileTwoMerge.close();
    sortOutput.close();
    exit(0);

}