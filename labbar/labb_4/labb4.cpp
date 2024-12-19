#include <iostream>
#include "functions.h"
#include <vector>
#include <algorithm>
#include <map>

/*
    Gunnar Landström
    19/12-2024
    DT028G Datateknik GR (A), Introduktion till programmering
    Labb_4
*/

int main()
{
    std::string fileOne = "hitchhikersguide.txt";
    std::string outputDocument = "outPut.txt";
    std::string wordOne, wordTwo, cleanedWord;

    std::ifstream bookFile, mappingFile;
    std::ofstream outputFile;

    std::map<std::string, int> myMap;
    std::vector<std::pair<std::string, int>> myVector;

    outputFile.open(outputDocument);
    bookFile.open(fileOne);

    bookFile >> wordOne;

    // välj antal utmatningar
    int n = 30;

    while (!bookFile.eof())
    {
        cleanedWord = removeSpecialCharacter(wordOne);

        if (cleanedWord != "")
        {
            if (myMap.find(cleanedWord) == myMap.end())
            {
                myMap[cleanedWord] = 1;
            }
            else
            {
                myMap[cleanedWord]++;
            }
        }
        bookFile >> wordOne;
    }

    std::copy(myMap.begin(), myMap.end(), back_inserter(myVector));

    sort(myVector.begin(), myVector.end(),
         [](const std::pair<std::string, int> &a,
            const std::pair<std::string, int> &b)
         {
             return a.second > b.second;
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
