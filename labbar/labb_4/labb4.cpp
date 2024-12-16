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

    std::ifstream bookFile, mappingFile;
    std::ofstream outputFile;

    std::string wordOne, cleanedWord;

    std::vector<std::pair<std::string, int>> wordVector;

    outputFile.open(outputDocument);
    bookFile.open(fileOne);

    bookFile >> wordOne;

    std::map<std::string, int> myMap;

    while (!bookFile.eof())
    {

        cleanedWord = removeSpecialCharacter(wordOne);

        for (int i = 0; i < cleanedWord.length(); ++i)
        {
            if (myMap.find(cleanedWord) == myMap.end())
            {
                myMap[cleanedWord] = 0;
            }

            myMap[cleanedWord]++;

            std::cout << cleanedWord << " " << myMap[cleanedWord] << std::endl;

            cleanedWord = cleanedWord[i];
        }

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
