#include "funktion2.h"
#include <iostream>

void sortFiles(std::string fileNameOne, std::string fileNameTwo, std::string outputFileName)
{

    std::ifstream fileOne;
    std::ifstream fileTwo;
    std::ofstream outputFile;

    fileOne.open(fileNameOne);
    fileTwo.open(fileNameTwo);
    outputFile.open(outputFileName);

    int currentValueFileOne;
    int currentValueFileTwo;

    fileOne >> currentValueFileOne;
    fileTwo >> currentValueFileTwo;

    while (!fileOne.eof() && !fileTwo.eof())
    {

        if (currentValueFileOne < currentValueFileTwo)
        {
            outputFile << currentValueFileOne << ' ';
            fileOne >> currentValueFileOne;
        }
        else
        {
            outputFile << currentValueFileTwo << ' ';
            fileTwo >> currentValueFileTwo;
        }
    }
    while (!fileOne.eof())
    {
        outputFile << currentValueFileOne << ' ';
        fileOne >> currentValueFileOne;
    }
    while (!fileTwo.eof())
    {
        outputFile << currentValueFileTwo << ' ';
        fileTwo >> currentValueFileTwo;
    }
    fileOne.close();
    fileTwo.close();
    outputFile.close();
}