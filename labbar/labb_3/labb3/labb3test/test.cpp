#include "test.h"
#include <iostream>



int sortFiles()
{
int sortNumberOne;
int sortNumberTwo;

    fileOneMerge >> sortNumberOne;
    fileTwoMerge >> sortNumberTwo;

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

    fileOneMerge.close();
    fileTwoMerge.close();
    sortOutput.close();
    exit(0);

}