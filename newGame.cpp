#include "newGame.h"
#include "player.h"
#include <iostream>
#include <string>
#include <vector>
#include <fstream>

newGame::newGame() 
{

}

newGame::~newGame()
{

}

void newGame::addPlayers()
{

      // These are only initialised for testing purposes
  // They should come from the Player files
  std::string player1 = "";
  std::string player2 = "";
  std::vector<std::string> gameList;
  gameList.emplace_back(std::move("Starting a New Game"));
  gameList.emplace_back(
      std::move("Enter a name for player 1 (uppercase characters only)"));
  gameList.emplace_back(
      std::move("Enter a name for player 2 (uppercase characters only)"));
  gameList.emplace_back(std::move("Let's Play!"));

  // Print Strings stored in Vector
  std::cout << " " << std::endl;
  std::cout << gameList[1] << std::endl;
  std::cin >> player1;
  // this will convert the user input to uppercase
  // I'm not sure about casting it as an int though.
  for (int i = 0; i < (int)player1.size(); ++i) {
    player1[i] = toupper(player1[i]);
  }
  std::cout << " " << std::endl;
  std::cout << gameList[2] << std::endl;
  std::cin >> player2;
  // this will convert the user input to uppercase
  // I'm not sure about casting it as an int though.
  for (int i = 0; i < (int)player2.size(); ++i) {
    player2[i] = toupper(player2[i]);
  }
  std::cout << gameList[3] << std::endl;
  std::cout << " " << std::endl;

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

void newGame::gamePlay()
{
    std::cout << currentPlayer << ", it's your turn" << std::endl;
    std::cout << "Score for " << playerNames[0] << ":" <<  std::endl; //input score here
    std::cout << "Score for " << playerNames[1] << ":" << std::endl; //input score here
    //fetch board here
    //display current player hand here
}

void newGame::runGame()
{
    addPlayers();
    startGameMsg();
    gamePlay();
}

