#include <fstream>
#include "vectorfunk.h"

std::string removeSpecialCharacter(std::string cleanWord)
{
    for (int i = 0; i < cleanWord.size(); i++)
    {

        if (cleanWord[i] < 'A' || cleanWord[i] > 'Z' && cleanWord[i] < 'a' || cleanWord[i] > 'z')
        {
            cleanWord.erase(i, 1);
            i--;
        }
    }
    return cleanWord;
}