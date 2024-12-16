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

        if (cleanedWord == "")
        {
            bookFile >> wordOne;
            cleanedWord = removeSpecialCharacter(wordOne);
        }


        wordVector.push_back(cleanedWord);

        bookFile >> wordOne;
    }

    std::map<std::string, int> myMap;
    std::map<std::string, int>::iterator it = myMap.begin();

    while (it != myMap.end())
    {
        std::cout << "Key: " << it->first
             << ", Value: " << it->second << std::endl;
        ++it;
    }

    for (int i = 0; i < wordVector.size(); i++)
    {
        outputFile << wordVector[i] << " " << i << std::endl;
    }

    bookFile.close();
    outputFile.close();
    return 0;
}
