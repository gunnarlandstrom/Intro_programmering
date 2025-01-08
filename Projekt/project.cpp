// #include "functions.h"
#include "game.h"
#include <iostream>

int main()
{
    bullCows game;
    bool wantsToPlay = game.menu();

    if (wantsToPlay)
    {
        game.play();
    }


    return 0;
}
