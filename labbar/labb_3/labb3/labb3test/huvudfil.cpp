#include "test.h"
#include <fstream>
#include <iostream>

std::ifstream fileOneMerge("Heltal.txt");
std::ifstream fileTwoMerge("Uddatal.txt");
std::ofstream sortOutput("diverseHeltalOutput.txt");


int main()
{

    sortFiles(fileOneMerge & fileTwoMerge);

    return 0;
}