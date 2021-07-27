#include "newGame.h"
#include <iostream>
#include <string>
#include <vector>

newGame::newGame() 
{
    addPlayers();
    //switching between players

}

newGame::~newGame()
{

}

void newGame::addPlayers()
{
    //adding new players
    std::string player1 = "";
    std::string player2 = "";

    std::string playerNames[2];

    std::cout << "Starting a New Game" << std::endl << std::endl;

    std::cout << "Enter player 1 name: " << std::endl;
    std::cout << ">" << std::endl;
    std::getline(std::cin, player1);

    std::cout << "Enter player 2 name: " << std::endl;
    std::cout << ">" << std::endl;
    std::getline(std::cin, player2);

    playerNames[0] = player1;
    playerNames[1] = player2;

    std::cout << playerNames[0] << std::endl;
    std::cout << playerNames[1] << std::endl;
}

std::string newGame::playersTurn(std::string currentPlayer)
{
    currentPlayer = "";

}

std::string newGame::switchPlayer()
{
    {

    }
}

