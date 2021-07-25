// s3831786 Gordon Richard - RMIT

#include "LinkedList.h"
#include "Player.h"
#include "PlayerTest.h"

#include <iostream>

#define EXIT_SUCCESS 0

void playerTest()
{

    std::cout << "Begin test of get methods" << std::endl;
    Player *testPlayer = new Player("Banana");
    std::cout << "The players name: " << testPlayer->getPlayerName() << std::endl;

    std::cout << "Current score: " << testPlayer->getPlayerScore() << std::endl;

    std::cout << "The player's hand: " << testPlayer->getPlayerHand() << std::endl;

    std::cout << "Begin test of set methods" << std::endl;
    testPlayer->setPlayerScore(999);
    std::cout << "Current score after setting (expect 999): " << testPlayer->getPlayerScore() << std::endl;
    testPlayer->addPlayerScore(2);
    std::cout << ("New score after adding 2 points (expect 1001): ") << testPlayer->getPlayerScore() << std::endl;

    delete testPlayer;
}