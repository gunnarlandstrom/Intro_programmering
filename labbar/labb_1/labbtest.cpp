#include <iostream>
#include <string>
#include <fstream>
int main()
{

int amountOfInputs = 1;
int askAgain = 1;
double userInputMin = 9e99;

// Loop för beräkningar av användarens inmatningar på tangentbordet
while (askAgain == 1) {
    
    double userInput;
    std::cout << "Detta är ett program som beräknar medelvärdet, samt visar min och maxvärde av dina inmatade tal" << std::endl;
    std::cout << "Skriv in ett tal som du vill veta maxvärde, minvärde och medelvärdet av: ";
    std::cin >> userInput;

    double userInputSum = userInputSum + userInput;

    double userTimes = userInput * 2;
    double userMedian = userInputSum / amountOfInputs;

    // Median
    
    std::cout << "Medelvärdet av " << userInputSum << " Delat med " << amountOfInputs <<  " är: " << userInputSum / amountOfInputs++ << std::endl;

    // Maxvärde
    double userInputMax;
    if (userInput > userInputMax) {
        userInputMax = userInput;
    }
    std::cout << "Maxvärdet är " << userInputMax << std::endl;

    // Minvärde
    if (userInput < userInputMin) {
        userInputMin = userInput;
    }
    std::cout << "Minvärdet är " << userInputMin << std::endl;



    //Fråga om användaren vill addera ett till tal
    //std::string questionRepeat = "Hej";
    //if (askAgain == 1) {
    //    std::cout << "Vill du addera ett tal till? [Y/N] ";
    //    std::cin >> questionRepeat;
    //}
    //if (questionRepeat == "Y") {
    //    askAgain = 1;
    //}
    //else {
    //    askAgain = 0;
    //    }
    }
    

return 0;
}