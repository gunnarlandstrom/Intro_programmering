#include "game.h"
#include <iostream>
#include <fstream>
#include <random>
#include <string>
#include <sstream>
#include <iomanip>
#include <map>
#include <algorithm>

bullCows::bullCows()
{
}

std::string bullCows::generateNumber()
{
    srand(time(0));
    int randomNumber = rand() % 10;

    return std::to_string(randomNumber);
}

std::string bullCows::genereraGissning()
{
    std::string highestGuess;
    if (storedGuesses.size() == 0)
    {
        std::string firstGuess = "1023";
        return firstGuess;
    }
    else
    {
        for (const auto &itr : storedGuesses)
        {
            highestGuess += std::stoi(itr.first);
            std::cout << highestGuess << std::endl;
        }
    }
}

bool bullCows::giltigGissning() {
    



}

std::string bullCows::generateGuess()
{
    std::string guess = bullCows::generateNumber();
    while (guess.length() != 4)
    {

        std::string temp = bullCows::generateNumber();

        if (guess.find(temp) != std::string::npos)
        { // found
        }
        else
        { // not found
            std::cout << "\r" << "*Beep-Boop-Beep* My first guess is: " << guess;
            guess += temp;
        }
    }
    std::cout << "\r" << "*Beep-Boop-Beep* My first guess is: " << guess << std::endl;
    return guess;
}

std::string bullCows::getSolution()
{

    return this->solution;
}

void bullCows::setSolution(std::string value)
{
    this->solution = value;
}

int bullCows::play()
{
    std::string userInput;
    std::cout << "Write a number with 4 digits, no digit alike: ";
    std::cin >> userInput;
    std::string userInputTemp = userInput;
    int x = 0;

    // Kontrollerar felinmatning av nummer
    while (x != 4)
    {
        x = 0;
        for (int i = 0; i < userInput.size(); i++)
        {
            if (userInput[i] < 48 || userInput[i] > 57 || userInput.size() != 4)
            {
                std::cout << "*BEEP* Too many! or few! or not number... Try again! *BOOP*... 4 different numbers! :";
                std::cin >> userInput;
                userInputTemp = userInput;
                i--;
            }
            for (int j = 0; j < userInput.size(); j++)
            {

                if (userInput[i] == userInputTemp[j])
                {
                    x++;
                }
            }
        }
        if (x != 4)
        {
            std::cout << "*BEEP* Maybe same?! maybe error! again! *BOOP*: ... 4 different numbers!: ";
            std::cin >> userInput;
            userInputTemp = userInput;
        }
    }

    bullCows::setSolution(userInput);

    std::string computerGuess = bullCows::genereraGissning();

    storedGuesses[computerGuess] = {howManyBullsAndCows(computerGuess)};

    std::pair<int, int> numberOfBullsAndCows = bullCows::howManyBullsAndCows(computerGuess);
    std::cout << "Number of Bulls: " << storedGuesses[computerGuess].first << std::endl;
    std::cout << "Number of Cows: " << storedGuesses[computerGuess].second << std::endl;

    computerGuess = bullCows::genereraGissning();

    std::cout << computerGuess << std::endl;
    return 0;
}

std::pair<int, int> bullCows::howManyBullsAndCows(std::string guess)
{
    int thisManyBulls = 0;
    int thisManyCows = 0;
    for (int i = 0; i < guess.length(); i++)
    {

        if (solution[i] == guess[i])
        { // found
            thisManyBulls++;
        }
        else if (solution.find(guess[i]) != std::string::npos)
        {
            thisManyCows++;
        }
    }
    return std::make_pair(thisManyBulls, thisManyCows);
}

bool bullCows::menu()
{
    std::string question;

    std::cout << "Bulls and Cows is a game where the user thinks of a number, and the computer will guess what that number is!" << std::endl
              << std::endl;
    std::cout << "Do you want to play Bulls and Cows? [Y]/[N]: ";

    while (true)
    {
        std::cin >> question;

        if (question == "Y")
        {
            return true;
        }
        else if (question == "N")
        {
            return false;
        }
        else
        {
            std::cout << "Something went wrong, please try again, enter Y for Yes, and N for No: [Y/N]" << std::endl;
        }
    }
}