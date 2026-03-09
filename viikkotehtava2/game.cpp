#include "game.h"
#include <iostream>
#include <ctime>

using namespace std;




Game::Game(int max)
{
    maxNumber = max;
    numOfGuesses = 0;
    srand(time(NULL));
    randomNumber = rand() % maxNumber + 1;


    cout << "GAME CONSTRUCTOR: object initialized with "
         << maxNumber << " as a maxumum value" << endl;

}

Game::~Game(){
    cout << "GAME DESTRUCTOR: object cleared from stack memory " << endl;
}

void Game::play()
{
    do {
    cout << "Give your guess between 1-" << maxNumber << endl;
        cin >> playerGuess;
    numOfGuesses++;

        if (playerGuess < randomNumber)
        cout << "Your Guess is too small" << endl;
        else if (playerGuess > randomNumber)
            cout << "Your guess is too big" << endl;
        else
            cout << "Your guess is right = " << playerGuess << endl;

    } while (playerGuess != randomNumber);

}


void Game::printGameResult()
{
    cout << "You guessed the right answer = "
         << randomNumber << " with " << numOfGuesses
         << " guesses " << endl;
}
