#include "funktion1.h"
#include <iostream>

bool isFileSorted(std::string fileName)
{
    std::ifstream file;
    file.open(fileName);

    if (file.is_open())
    {
        int currentValue;
        int previousValue;

        file >> currentValue;
        while (!file.eof())
        {
            file >> previousValue;

            if (currentValue > previousValue)
            {
                file.close();
                return false;
            }

            currentValue = previousValue;
        }
        file.close();
    }
    else
    {
        std::cout << "Could not read file." << std::endl;
        std::cout << "Filename input: " << fileName << std::endl;
        std::cout << "Closing program." << std::endl << std::endl;
        file.close();
        exit(0);
    }

    return true;
}