#include <vector>
#include <iostream>
#include "vectorfunk.h"
#include <algorithm>
#include <map>
#include <string>

int main()
{
    std::string fileOne = "hitchhikersguide.txt";
    std::string outputDocument = "outPut.txt";

    std::ifstream bookFile;
    std::ifstream mappingFile;
    std::ofstream outputFile;

    std::string wordOne, wordTwo, cleanedWord;

    std::vector<std::string> wordVector;
    int wordValues;

    outputFile.open(outputDocument);
    bookFile.open(fileOne);

    bookFile >> wordOne;

    std::map<std::string, int> myMap;

    while (!bookFile.eof())
    {

        cleanedWord = removeSpecialCharacter(wordOne);

        if (cleanedWord == "")
        {
            bookFile >> wordOne;
            cleanedWord = removeSpecialCharacter(wordOne);
        }

        myMap.insert(std::pair<std::string, int>(cleanedWord, 0));
        myMap[cleanedWord]++;

        bookFile >> wordOne;
    }


    for (auto key : myMap)
    {
        outputFile << key.first << " " << key.second << std::endl;
    }

    outputFile.close();
    bookFile.close();
    return 0;
}
