#include <vector>
#include <iostream>
#include "vectorfunk.h"
#include <algorithm>
#include <map>

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
    std::map<std::string, int>::const_iterator iterate;

    while (!bookFile.eof())
    {

        cleanedWord = removeSpecialCharacter(wordOne);

        if (cleanedWord == "")
        {
            bookFile >> wordOne;
            cleanedWord = removeSpecialCharacter(wordOne);
        }

        bookFile >> wordOne;
        wordVector.push_back(cleanedWord);
        wordValues++;
    }
    for (auto i : wordVector)
    {

        outputFile << i << std::endl;
    }


    for (int i = 0; i < wordVector.size(); i++)
    {
        myMap[wordVector[i]] = wordValues[i];
    }

    std::cout << iterate->second;

    outputFile.close();
    bookFile.close();
    return 0;
}
