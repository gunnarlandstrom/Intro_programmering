#include <vector>
#include <iostream>
#include "vectorfunk.h"
#include <string>
#include <algorithm>

int main()
{
    std::string fileOne = "test.txt";
    std::string outputDocument = "outPut.txt";

    std::ifstream bookFile;
    std::ofstream outputFile;

    std::string wordOne;
    std::string wordTwo;
    std::vector<std::string> wordVector;
    std::string cleanedWord;

    outputFile.open(outputDocument);
    bookFile.open(fileOne);
    bookFile >> wordOne;

    while (!bookFile.eof())
    {

        cleanedWord = removeSpecialCharacter(wordOne);

        std::cout << cleanedWord << std::endl;

        wordVector.push_back(cleanedWord);


        bookFile >> wordOne;
    }
    for (int i = 0; i < wordVector.size(); i++)
    {
        outputFile << wordVector[i] << " " << i << std::endl;
        //std::cout << wordVector[i] << " " << i << std::endl << std::endl;
    }

    bookFile.close();
    outputFile.close();
    return 0;
}
