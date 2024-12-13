#include <fstream>
#include "vectorfunk.h"
#include <iostream>
#include <algorithm>

std::string removeSpecialCharacter(std::string cleanWord)
{
    for (int i = 0; i < cleanWord.size(); i++)
    {

        if (cleanWord[i] == char(39))
        {
            i++;
            if (cleanWord[0] == char(39))
            {

                cleanWord.erase(0, 1);
            }
        }

        if (cleanWord[i] < 'A' || cleanWord[i] > 'Z' && cleanWord[i] < 'a' || cleanWord[i] > 'z')
        {

            cleanWord.erase(i, 1);
            i--;

            std::cout << cleanWord << " " << i << std::endl;
        }
    }
    if (cleanWord[cleanWord.length()-1] == char(39))
    {
        cleanWord.erase(cleanWord.length()-1);

    }

    std::transform(cleanWord.begin(), cleanWord.end(), cleanWord.begin(), ::tolower);

    return cleanWord;
}
