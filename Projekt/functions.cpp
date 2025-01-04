#include "functions.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>
#include <ctime>

int randomNumberGenerator()
{

    srand(time(0));

    int randomNumber;

    for (int i = 0; i < 10; i++)
    {
        randomNumber = rand() % 10000;
        if (randomNumber < 1000)
        {
            i--;
        }
        if (randomNumber == 0000)
        {
            break;
        }
    }

    return randomNumber;
}