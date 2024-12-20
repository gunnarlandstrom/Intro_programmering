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
    // Filnamn, in och utfiler.
    std::string fileOne = "hitchhikersguide.txt";
    std::string outputDocument = "outPut.txt";
    std::ifstream bookFile;
    std::ofstream outputFile;

    std::string wordOne, cleanedWord;

    std::map<std::string, int> myMap;
    std::vector<std::pair<std::string, int>> myVector;

    outputFile.open(outputDocument);
    bookFile.open(fileOne);

    bookFile >> wordOne;

    // välj antal utmatningar av de mest förekommande orden från infilen.
    int n = 30;

    while (!bookFile.eof())
    {
        // Rensar inläsning av ord från speciella karaktärer, men behåller ord med apostrof.
        cleanedWord = removeSpecialCharacter(wordOne);

        // Inläsning av rensade ord till en map.
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

    // Kopierar myMap till vectorn myVector
    std::copy(myMap.begin(), myMap.end(), back_inserter(myVector));

    // Sorterar vectorn från mest förekommande element till lägst
    sort(myVector.begin(), myVector.end(),
         [](const std::pair<std::string, int> &a,
            const std::pair<std::string, int> &b)
         {
             return a.second > b.second;
         });

    // Skriver ut användarens val av antal ord
    for (auto itr : myVector)
    {
        std::cout << itr.first << ": " << itr.second << std::endl;
        n--;
        if (n == 0)
        {
            break;
        }
    }

    // Skriver ut den sorterade vectorn till en utfil.
    for (auto key : myVector)
    {
        outputFile << key.first << " " << key.second << std::endl;
    }

    outputFile.close();
    bookFile.close();
    return 0;
}
