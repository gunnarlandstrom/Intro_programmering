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

    std::vector<std::pair<std::string, int>> myVector;
    std::vector<std::pair<std::string, int>> maxVector;

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

            // std::cout << cleanedWord << " " << myMap[cleanedWord] << std::endl;

            cleanedWord = cleanedWord[i];
        }

        bookFile >> wordOne;
    }

    std::copy(myMap.begin(), myMap.end(), back_inserter(myVector));

    for (auto &pair : myVector)
    {
        std::cout << pair.first << ", " << pair.second << std::endl;
    }
    auto pair = *std::max_element(std::begin(myVector), std::end(myVector));

    for (auto key : myMap)
    {
        outputFile << key.first << " " << key.second << std::endl;
    }

    outputFile.close();
    bookFile.close();
    return 0;
}
