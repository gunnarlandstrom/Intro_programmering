#include "funktion1.h"
#include "funktion2.h"
#include "funktion3.h"

#include <fstream>
#include <iostream>

    std::ifstream fileOne("heltal.txt");
    std::ifstream fileTwo("uddatal.txt");
    std::ofstream heltalOutput("diverseHeltalOutput.txt");
    int fileOneNumber;
    int fileTwoNumber;
    
int main(){


    fileOne >> fileOneNumber;
    fileTwo >> fileTwoNumber;


    
    while ( !fileOne.eof() && !fileTwo.eof() ) {

        if ( fileOneNumber < fileTwoNumber) {

            heltalOutput << fileOneNumber;
            fileOne >> fileOneNumber;
        } 
        else {

            heltalOutput << fileTwoNumber;
            fileTwo >> fileTwoNumber;
        }
    }

    while ( !fileOne.eof() ) {

        heltalOutput << fileOneNumber << " ";
        fileOne >> fileOneNumber;
    }

    while ( !fileTwo.eof() ) {

        heltalOutput << fileTwoNumber << " ";
        fileTwo >> fileTwoNumber;
    }    

    fileOne.close();
    fileTwo.close();
    heltalOutput.close();

    return 0;
}