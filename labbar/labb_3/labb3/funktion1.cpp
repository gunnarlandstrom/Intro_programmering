#include "funktion1.h"
#include <fstream>
#include <iostream>

bool isFileSorted(std::string fileName)
{
    std::ifstream file;
    file.open(fileName);

    if (file.is_open())
    {
        std::string currentValue;
        std::getline(file, currentValue, ' ');
        int previousValue = 0;
        while (!file.eof())
        {
            previousValue = std::stoi(currentValue);

            if (std::stoi(currentValue) < previousValue)
            {
                file.close();
                return false;
            }

            std::getline(file, currentValue, ' ');
        }
        file.close();
    }
    else
    {
        std::cout << "Could not read file." << std::endl;
        std::cout << "Filename input: " << fileName << std::endl;
        file.close();
        return false;
    }

    return true;
}