#include "funktion2.h"
#include <iostream>
#include <fstream>
#include <string>

void sortFiles(std::string fileNameOne, std::string fileNameTwo, std::string outputFileName)
{

    std::ifstream fileOne;
    std::ifstream fileTwo;
    std::ofstream outputFile;

    fileOne.open(fileNameOne);
    fileTwo.open(fileNameTwo);
    outputFile.open(outputFileName);

    std::string currentValueFileOne;
    std::string currentValueFileTwo;

    std::getline(fileOne, currentValueFileOne, ' ');
    std::getline(fileTwo, currentValueFileTwo, ' ');

    while (!fileOne.eof() && !fileTwo.eof())
    {

        if (currentValueFileOne < currentValueFileTwo)
        {
            outputFile << currentValueFileOne << ' ';
            std::getline(fileOne, currentValueFileOne, ' ');
        }
        else
        {
            outputFile << currentValueFileTwo << ' ';
            std::getline(fileTwo, currentValueFileTwo, ' ');
        }
    }
    while (!fileOne.eof())
    {
        outputFile << currentValueFileOne << ' ';
        std::getline(fileOne, currentValueFileOne, ' ');
    }
    while (!fileTwo.eof())
    {
        outputFile << currentValueFileTwo << ' ';
        std::getline(fileOne, currentValueFileTwo, ' ');
    }
    fileOne.close();
    fileTwo.close();
    outputFile.close();

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