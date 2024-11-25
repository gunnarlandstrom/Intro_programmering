#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream namesInput("names.txt");
    std::ofstream namesOutput("namesOutput.txt");
    std::string firstName;
    std::string lastName;
    std::string placeOfResidence;
    std::string socialSecurityNumber;
    
    while( !namesInput.eof() ) {


        namesInput >> firstName >> lastName >> socialSecurityNumber;
        
        if ( namesInput.eof()) {
            break;
        }

        std::getline(namesInput, placeOfResidence);
        std::getline(namesInput, placeOfResidence);

        namesOutput << lastName << " " << firstName << " \n" <<  socialSecurityNumber << "\n" << placeOfResidence << "\n";

    }

    namesInput.close();
    namesOutput.close();

    std::cout << lastName << " ";
    std::cout << firstName << " \n";
    std::cout << socialSecurityNumber << " \n";
    std::cout << placeOfResidence << " \n";

return 0;
}