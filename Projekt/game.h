#ifndef GAME_H
#define GAME_H
#include <fstream>
#include <map>

class bullCows
{

public:
    bullCows();
    std::string getSolution();
    std::string generateRandomGuess();
    void setSolution(std::string value);
    bool menu();
    bool validGuess(std::string guess);
    int play();
    bool doesNumbersRepeat(std::string guess);
    std::string generateGuess();
    std::pair<int,int> howManyBullsAndCows(std::string guess);

private:
    std::string generateNumber();
    std::map<std::string, std::pair<int,int>> storedGuesses;
    std::string solution;
};

#endif