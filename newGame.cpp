#include "newGame.h"
#include <iostream>
#include <string>
#include <vector>
#include <fstream>

newGame::newGame() 
{
    runGame();
}

newGame::~newGame()
{

}

void newGame::addPlayers()
{
    //adding new players
    std::string player1 = "";
    std::string player2 = "";

    std::cout << "Starting a New Game" << std::endl << std::endl;

    std::cout << "Enter player 1 name: " << std::endl;
    std::cout << ">" ;
    std::getline(std::cin, player1);

    std::cout << "Enter player 2 name: " << std::endl;
    std::cout << ">" ;
    std::getline(std::cin, player2);

    playerNames[0] = player1;
    playerNames[1] = player2;

    currentPlayer = playerNames[0];
    play = 0;
}

std::string newGame::getCurrentPlayer()
{
    return currentPlayer;

}

void newGame::switchPlayer()
{
    if (play == 0)
    {
        std::cout << "if";
        play = 1;
    }
    else 
    {
        std::cout << "else";
        play = 0;
    }
    currentPlayer = playerNames[play];
}

void newGame::startGameMsg()
{
     std::cout << "Lets Play!" << std::endl << std::endl;
}

void newGame::gameStats()
{
    std::cout << currentPlayer << ", it's your turn" << std::endl;
    std::cout << "Score for " << playerNames[0] << ":" << std::endl; //input score here
    std::cout << "Score for " << playerNames[1] << ":" << std::endl; //input score here
    //fetch board here
    //display current player hand here
}

void newGame::runGame()
{
    addPlayers();
    startGameMsg();
    gameStats();
}

