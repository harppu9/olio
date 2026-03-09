#include <iostream>
#include "game.h"

using namespace std;

int main()
{
    Game peli(10);
    peli.play();
    peli.printGameResult();

    return 0;
}
