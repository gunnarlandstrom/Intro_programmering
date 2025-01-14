#include "game.h"
#include <iostream>
#include <fstream>
#include <random>
#include <string>
#include <map>

// Creates constructor
bullCows::bullCows()
{
}

// Generates random number between [0,9]
std::string bullCows::generateNumber()
{
    srand(time(0));
    int randomNumber = rand() % 10;

    return std::to_string(randomNumber);
}

// Generates guess
std::string bullCows::generateGuess()
{
    std::string highestGuess;
    std::string currentGuess;
    std::string previousGuess;
    do
    {
        // first guess, map empty.
        if (storedGuesses.size() == 0)
        {
            std::string firstGuess = "1023";
            storedGuesses[firstGuess] = howManyBullsAndCows(firstGuess);
            return firstGuess;
        }
        else
        {
            bool isValid;
            int temp;
            if (previousGuess != "")
            {

                currentGuess = std::to_string(std::stoi(previousGuess) + 1);
                isValid = bullCows::validGuess(currentGuess);
                if (!isValid)
                {
                    previousGuess = currentGuess;
                    continue;
                }
                else
                {
                    storedGuesses[currentGuess] = howManyBullsAndCows(currentGuess);
                    return currentGuess;
                }
            }
            else
            {
                highestGuess = storedGuesses.rbegin()->first;
                temp = std::stoi(highestGuess);
                temp++;
                currentGuess = std::to_string(temp);
                previousGuess = currentGuess;
            }
        }

    } while (!validGuess(currentGuess));
    return currentGuess;
}

// Check if guess is valid according to the rules
bool bullCows::validGuess(std::string guess)
{
    bool isRepeated = doesNumbersRepeat(guess);
    if (isRepeated)
    {
        // Repeated, not allowed.
        return false;
    }
    if (storedGuesses.find(guess) == storedGuesses.end())
    { // Not found.
        return true;
    }
    else
    { // Found.
        return false;
    }
}

// Checks if number repeats or value falls outside required scope.
bool bullCows::doesNumbersRepeat(std::string guess)
{
    int x = 0;
    for (int i = 0; i < 4; i++)
    {
        if (guess[i] < 48 || guess[i] > 57 || guess.size() != 4)
        {
            return true;
        }

        for (int j = 0; j < 10; j++)
        {

            if (guess[j] == guess[i])
            {
                x++;
            }
        }
    }

    if (x == 4)
    {
        return false;
    }
    else
    {
        return true;
    }
}

// Generates random guess.
std::string bullCows::generateRandomGuess()
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
            guess += temp;
        }
    }
    return guess;
}

// Returns solution.
std::string bullCows::getSolution()
{

    return this->solution;
}

// Sets solution.
void bullCows::setSolution(std::string value)
{
    this->solution = value;
}

// Play the game.
int bullCows::play()
{

    std::string humanSolution;
    std::cout << "Write a number with 4 digits, no digit alike: ";
    std::cin >> humanSolution;
    bool isValidatedGuess = bullCows::validGuess(humanSolution);

    if (isValidatedGuess)
    {
        bullCows::setSolution(humanSolution);
    }
    else
    {
        while (!isValidatedGuess)
        {
            std::cout << "*BEEEP* Not number! Maybe too many or few! or Ye' Cheatin! *BOop-beep* 4 digits! all different! :";
            std::cin >> humanSolution;
            isValidatedGuess = bullCows::validGuess(humanSolution);

            if (isValidatedGuess)
            {
                bullCows::setSolution(humanSolution);
            }
        }
    }
    std::string computerGuess;
    std::cout << "*Beepop! Ahh, you have chosen a number for me *Boop*" << std::endl;
    while (computerGuess != solution)
    {
        std::string humanAnswer;
        computerGuess = bullCows::generateGuess();
        std::cout << "*Beep-Boop-Beep* My guess is: " << computerGuess << std::endl;
        std::cout << "*Beep* Did I do well? How many Bulls and Cows!?" << std::endl;
        std::cout << "Do you want to automize Bulls/Cows or Answer yourself([S] for solution [Y] to automize, [N] manual): [Y/N/S] " << std::endl;
        do
        {
            std::cin >> humanAnswer;

            if (humanAnswer == "Y")
            {
                storedGuesses[computerGuess] = {howManyBullsAndCows(computerGuess)};
                std::cout << "Number of Bulls: " << storedGuesses[computerGuess].first << std::endl;
                std::cout << "Number of Cows: " << storedGuesses[computerGuess].second << std::endl
                          << std::endl;
                break;
            }
            else if (humanAnswer == "N")
            {
                std::string humanAnswerBulls, humanAnswerCows;
                std::cout << "How many Bulls?: ";
                std::cin >> humanAnswerBulls;
                std::cout << "How many Cows?: ";
                std::cin >> humanAnswerCows;
                storedGuesses[computerGuess] = {std::stoi(humanAnswerBulls), std::stoi(humanAnswerCows)};
                std::cout << std::endl;
                if (humanAnswerBulls == "4")
                {
                    std::cout << "*BEEPOOOP* I GUESSED RIGHT!!!*Beep-beep* Victoreep!" << std::endl;
                    return 1;
                }
                break;
            }
            else if (humanAnswer == "S")
            {
                std::cout << "Solution is: " << solution << std::endl;
                std::cout << "Do you want to automize Bulls/Cows or Answer yourself(Type [S] for solution): [Y/N/S] " << std::endl;
            }
            else
            {
                std::cout << "*BEEP* Wrong inputs friend, try again: [Y/N/S]: ";
            }
        } while (humanAnswer != "Y" || humanAnswer != "N");
    }
    std::cout << "*BEEPOOOP* I GUESSED RIGHT!!!*Beep-beep* Victoreep!" << std::endl;
    return 1;
}

std::pair<int, int> bullCows::howManyBullsAndCows(std::string guess)
{
    int thisManyBulls = 0;
    int thisManyCows = 0;
    for (int i = 0; i < guess.length(); i++)
    {

        if (solution[i] == guess[i])
        { // found a Bull
            thisManyBulls++;
        }
        else if (solution.find(guess[i]) != std::string::npos)
        { // found a Cow
            thisManyCows++;
        }
    }
    return std::make_pair(thisManyBulls, thisManyCows);
}

// Checks if user want to play or not.
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