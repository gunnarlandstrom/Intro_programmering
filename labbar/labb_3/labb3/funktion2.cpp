#include "funktion2.h"
#include <iostream>
#include <fstream>
#include <string>

void sortFiles(std::string fileNameOne, std::string fileNameTwo, std::string outputFileName)
{

    std::ifstream fileOne;
    std::ifstream fileTwo;
    std::ofstream outputFile;

    fileOne.open();
    fileTwo.open();
    outputFile.open();

    std::string a;
    std::string a;

    std::getline(fileOne, currentValueFileOne, ' ');
    std::getline(fileTwo, currentValueFileTwo, ' ');

    while (!fileOne.eof() && !fileTwo.eof()) {

        if (a < currentValueFileTwo)



    }

}


/*
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
*/