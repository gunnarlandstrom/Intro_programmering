#include <string>
#include <fstream>
#include <iostream>

/*
    Gunnar Landström
    20/12-2024
    DT028G Datateknik GR (A), Introduktion till programmering
    Labb_2
*/

int main() {

    // Variablar
    std::ifstream namesInput("names.txt");
    std::ofstream namesOutput("namesOutput.txt");
    std::string firstName;
    std::string lastName;
    std::string placeOfResidence;
    std::string socialSecurityNumber;
    std::string whatGender;

    //Inputs
    std::getline(namesInput, firstName, ' ');
    std::getline(namesInput, lastName);
    std::getline(namesInput, socialSecurityNumber);
    std::getline(namesInput, placeOfResidence);

    // loop för att hämta data i "names.txt"
    while( !namesInput.eof() ) {

        // Kollar om det är en man eller en kvinna
        if ( socialSecurityNumber[8] % 2 == 0 ) {
            whatGender = "[F]";
        }
        else {
            whatGender = "[M]";
        }


        //Utmatning till utfil
        namesOutput << lastName << " " << firstName << " " << whatGender << "\n" << placeOfResidence << "\n" << "\n";
    
        std::getline(namesInput, firstName, ' ');
        std::getline(namesInput, lastName);
        std::getline(namesInput, socialSecurityNumber);
        std::getline(namesInput, placeOfResidence);

    }

    namesInput.close();
    namesOutput.close();

return 0;
}