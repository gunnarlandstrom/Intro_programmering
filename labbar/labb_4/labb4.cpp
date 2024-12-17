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

    std::map<std::string, int> myMap;
    std::vector<std::pair<std::string, int>> myVector;
    std::vector<std::pair<std::string, int>> maxVector;

    outputFile.open(outputDocument);
    bookFile.open(fileOne);

    bookFile >> wordOne;

    int n = 5;

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

    sort(myVector.rbegin(), myVector.rend(),
         [](const std::pair<std::string, int> &a,
            const std::pair<std::string, int> &b)
         {
             return a.second < b.second;
         });

    for (auto itr : myVector)
    {

        std::cout << itr.first << ": " << itr.second << std::endl;
        n--;
        if (n == 0)
        {
            break;
        }
    }

    for (auto key : myVector)
    {
        outputFile << key.first << " " << key.second << std::endl;
    }

    outputFile.close();
    bookFile.close();
    return 0;
}
