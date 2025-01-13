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
    std::string currentGuess;

    do
    {
        if (storedGuesses.size() == 0)
        {
            std::string firstGuess = "1023";
            storedGuesses[firstGuess] = howManyBullsAndCows(firstGuess);
            return firstGuess;
        }
        else
        {
            highestGuess = storedGuesses.end()->first;
            currentGuess = std::stoi(highestGuess) + 1;

        }

    } while (!giltigGissning(currentGuess));
}

bool bullCows::giltigGissning(std::string gissning)
{
    bool isRepeated = doesNumbersRepeat(gissning);
    if (isRepeated)
    {
        return false;
    }
    if (storedGuesses.find(gissning) == storedGuesses.end())
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool bullCows::doesNumbersRepeat(std::string gissning)
{
    int x = 0;
    std::string gissningTemp = gissning;
    while (x != 4)
    {
        x = 0;
        for (int i = 0; i < gissning.size(); i++)
        {
            if (gissning[i] < 48 || gissning[i] > 57 || gissning.size() != 4)
            {
                gissningTemp = gissning;
                i--;
            }
            for (int j = 0; j < gissning.size(); j++)
            {

                if (gissning[i] == gissningTemp[j])
                {
                    x++;
                }
            }
        }
        if (x != 4)
        {
            return false;
        }
    }
    return true;
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
    std::string gissning;
    std::cout << "Write a number with 4 digits, no digit alike: ";
    std::cin >> gissning;
    std::string gissningTemp = gissning;
    int x = 0;

    // Kontrollerar felinmatning av nummer
    while (x != 4)
    {
        x = 0;
        for (int i = 0; i < gissning.size(); i++)
        {
            if (gissning[i] < 48 || gissning[i] > 57 || gissning.size() != 4)
            {
                std::cout << "*BEEP* Too many! or few! or not number... Try again! *BOOP*... 4 different numbers! :";
                std::cin >> gissning;
                gissningTemp = gissning;
                i--;
            }
            for (int j = 0; j < gissning.size(); j++)
            {

                if (gissning[i] == gissningTemp[j])
                {
                    x++;
                }
            }
        }
        if (x != 4)
        {
            std::cout << "*BEEP* Maybe same?! maybe error! again! *BOOP*: ... 4 different numbers!: ";
            std::cin >> gissning;
            gissningTemp = gissning;
        }
    }

    bullCows::setSolution(gissning);

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