#ifndef GAME_H
#define GAME_H
#include <fstream>
#include <map>

class bullCows
{

public:
    bullCows();
    std::string getSolution();
    std::string generateGuess();
    void setSolution(std::string value);
    bool menu();
    int play();
    std::string genereraGissning();
    std::pair<int,int> howManyBullsAndCows(std::string guess);


private:
    std::string generateNumber();
    std::map<std::string, std::pair<int,int>> storedGuesses;
    std::string solution;
};

#endif