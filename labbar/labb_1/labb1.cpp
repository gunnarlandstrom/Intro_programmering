#include <iostream>
int main()
{
    int amountOfInputs = 0;
    int userInputSum = 0;
    int userInputMax;
    int userInputMin;
    int userInput;

    // Loop för beräkningar av användarens inmatningar på tangentbordet som ger medelvärde, max och min-tal
    while (std::cin >> userInput) {
    
        userInputSum += userInput;
       
       if (amountOfInputs == 0) {
        userInputMax = userInput;
        userInputMin = userInput;
       }
       
        amountOfInputs++;

        // maxvärde
        if (userInput > userInputMax) {
        userInputMax = userInput;
        }

        // minvärde
        if (userInput < userInputMin) {
        userInputMin = userInput;
        }

    }

    if (amountOfInputs > 0) {
    // medelvärde
    std::cout << "Medelvärdet är: " << static_cast<double>(userInputSum) / amountOfInputs << std::endl;
    // maxvärde
    std::cout << "Maxvärdet är " << userInputMax << std::endl;
    // minvärde
    std::cout << "Minvärdet är " << userInputMin << std::endl;    
    }
return 0;
}