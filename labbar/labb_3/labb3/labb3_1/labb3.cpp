#include "funktion1.h"
#include "funktion2.h"
#include <iostream>

/*
    Gunnar Landström
    20/12-2024
    DT028G Datateknik GR (A), Introduktion till programmering
    Labb_3
*/

int main()
{
    bool isSortedFileOne;
    bool isSortedFileTwo;
    bool outputIsSorted;
    
    // In och utfiler
    std::string fileNameOne = "A";
    std::string fileNameTwo = "B";
    std::string outputFile = "output.txt";


    // Kollar om en fil är sorterad
    isSortedFileOne = isFileSorted(fileNameOne);
    if (isSortedFileOne)
    {
        std::cout << "File one is sorted." << std::endl;
        isSortedFileTwo = isFileSorted(fileNameTwo);

        if (isSortedFileTwo)
        {
            std::cout << "File two is Sorted." << std::endl;
        }
    }
    else
    {
        std::cout << "File one or two is not sorted." << std::endl;
        std::cout << "Closing program." << std::endl;
    }

    // Om två filer är sorterade, så mergas dom, och sen dubbelkollas utfilen om den är sorterad.
    if (isSortedFileOne && isSortedFileTwo == true)
    {
        sortFiles(fileNameOne, fileNameTwo, outputFile);

        outputIsSorted = isFileSorted(outputFile);
        if (outputIsSorted)
        {
            std::cout << "Merged outputfile successfully." << std::endl;
        }
        else
        {
            std::cout << "outputfile is magically not sorted." << std::endl;
        }
    }
    return 0;
}