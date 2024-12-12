#include "funktion1.h"
#include "funktion2.h"
#include <iostream>

int main()
{
    bool isSortedFileOne;
    bool isSortedFileTwo;
    bool outputIsSorted;
    
    std::string fileNameOne = "A";
    std::string fileNameTwo = "B";
    std::string outputFile = "output.txt";

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

    if (isSortedFileOne && isSortedFileTwo == true)
    {
        sortFiles(fileNameOne, fileNameTwo, "output.txt");

        outputIsSorted = isFileSorted("output.txt");
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