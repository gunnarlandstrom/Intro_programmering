#include "game.h"
/*
    Gunnar Landström
    19/12-2024
    DT028G Datateknik GR (A), Introduktion till programmering
    Projekt Bulls and Cows
*/

int main()
{
    //creates game
    bullCows game;

    bool wantsToPlay = game.menu();

    if (wantsToPlay)
    {
        game.play();
    }


    return 0;
}
