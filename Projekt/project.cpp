#include "functions.h"
#include <iostream>
#include <fstream>

int main()
{

    std::string question;
    while (question != "N")
    {

        int playerNumber;

        std::cout << "Bulls and Cows är ett spel där användaren ska gissa sig till ett tal på fyra siffror!" << std::endl
                  << std::endl;
        std::cout << "Vill du spela Bulls and Cows? [Y]/[N]: ";
        std::cin >> question;

        while (question != "Y" && question != "N")
        {
            std::cout << "Jag tror du råkade skriva något fel, svara antingen Y för att spela eller N för att avsluta: ";
            std::cin >> question;
        }

        if (question == "Y")
        {

            std::cout << std::endl << "Spela själv?   [1]" << std::endl
                      << "Slumpa nummer? [2]" << std::endl;
            std::cout << "Svar: ";
            std::cin >> question;
        }
        if (question == "1")
        {
            std::cout << "Mata in ett tal på fyra siffror: ";
            std::cin >> playerNumber;
        }
        if (question == "2")
        {
            int playerNumber = randomNumberGenerator();

            std::cout << "Ditt slumpmässiga nummer är : " << playerNumber << std::endl;
        }
    }
    std::cout << std::endl
              << "Spel avslutat, välkommen åter!" << std::endl;

    return 0;
}