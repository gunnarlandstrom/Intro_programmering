#include "functions.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>
#include <ctime>

std::vector<std::pair<int, int>> bullcowVector;
int bullsAndCows(std::string fileOne, std::string fileTwo)
{
    std::ifstream inputFile;
    std::ofstream outputFile;

    inputFile.open(fileOne);
    outputFile.open(fileTwo);

    int randomNumberOne, randomNumberTwo, randomNumberThree, randomNumberFour;

    for (int i = 0; i < 10; i++)
    {

        randomNumberOne = srand(time) % 10;

        //outputFile << randomNumberOne;
        std::cout << randomNumberOne;


    }
    inputFile >> randomNumberOne >> randomNumberTwo >> randomNumberThree >> randomNumberFour;


    inputFile.close();
    outputFile.close();
    return 0;
}