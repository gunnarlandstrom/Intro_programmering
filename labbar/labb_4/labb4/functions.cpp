#include "functions.h"
#include <iostream>
#include <algorithm>


// Tar bort alla speciella tecken från en mening utom ord med apostrof
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
        }
    }
    if (cleanWord[cleanWord.length() - 1] == char(39))
    {
        cleanWord.erase(cleanWord.length() - 1);
    }

    // Konverterar varje ord till enbart gemener
    std::transform(cleanWord.begin(), cleanWord.end(), cleanWord.begin(), ::tolower);

    return cleanWord;
}
