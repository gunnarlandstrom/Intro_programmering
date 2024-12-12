#include <vector>
#include <iostream>
#include "vectorfunk.h"

int main()
{
    std::string fileOne = "hitchhikersguide.txt";
    std::ifstream bookFile;
    std::string wordOne;
    std::vector<std::string> wordVector;
    std::string cleanedWord;
    bookFile.open(fileOne);
    bookFile >> wordOne;

    while (!bookFile.eof())
    {

        cleanedWord = removeSpecialCharacter(wordOne);

        wordVector.push_back(cleanedWord);
        bookFile >> wordOne;
    }
    for (int i = 0; i < wordVector.size(); i++)
    {
        std::cout << wordVector[i] << " " << i << std::endl;
    }

    bookFile.close();
    return 0;
}
