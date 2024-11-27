/*
    Gunnar Landström
    29/11-2024
    DT028G Datateknik GR (A), Introduktion till programmering
    Labb_2
*/

#include <fstream>
int main() {
    std::ifstream namesInput("names.txt");
    std::ofstream namesOutput("namesOutput.txt");
    std::string firstName;
    std::string lastName;
    std::string placeOfResidence;
    std::string socialSecurityNumber;
    std::string whatGender;
    std::string socialSecurityGender;

    // 
    while( !namesInput.eof() ) {


        namesInput >> firstName >> lastName >> socialSecurityNumber;
        socialSecurityGender = socialSecurityNumber.substr(0, 9);

        // Kollar om det är man eller kvinna
        if ( std::stoi(socialSecurityGender) % 2 == 0 ) {
            whatGender = "[F]";
        }
        else {
            whatGender = "[M]";
        }
        
        if ( namesInput.eof() ) {
            break;
        }

        std::getline(namesInput, placeOfResidence);
        std::getline(namesInput, placeOfResidence);

        namesOutput << lastName << " " << firstName << " " << whatGender << "\n" << placeOfResidence << "\n" << "\n";

    }

    namesInput.close();
    namesOutput.close();

return 0;
}