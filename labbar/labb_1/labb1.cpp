#include <iostream>
int main()
{

    int amountOfInputs = 0;
    double userInputSum = 0;
    double userInputMin = 9e99;
    double userInputMax = -9e99;
    double userMedian = 0;
    double userInput;

    // Loop för beräkningar av användarens inmatningar på tangentbordet
    while (std::cin >> userInput) {
    
        userInputSum += userInput;
        amountOfInputs++;

        // Maxvärde
        if (userInput > userInputMax) {
        userInputMax = userInput;
        }

        // Minvärde
        if (userInput < userInputMin) {
        userInputMin = userInput;
        }

    }

    if (amountOfInputs > 0) {
    // medelvärde
    std::cout << "Medelvärdet är: " << userInputSum / amountOfInputs << std::endl;
    //maxvärde
    std::cout << "Maxvärdet är " << userInputMax << std::endl;
    //minvärde
    std::cout << "Minvärdet är " << userInputMin << std::endl;    
    }
return 0;
}