#ifndef GAME_H
#define GAME_H
#include <fstream>
#include <map>

class bullCows
{

public:
    bullCows();
    std::string getSolution();
    int play();
    bool menu();
    std::string generateRandomGuess();
    std::string generateNumber();
    void setSolution(std::string value);
    bool validGuess(std::string guess);
    bool doesNumbersRepeat(std::string guess);
    std::string generateGuess();
    std::pair<int, int> howManyBullsAndCows(std::string guess);
    // map of string key so number can start with 0
    std::map<std::string, std::pair<int, int>> storedGuesses;
    std::string solution;
};

#endif