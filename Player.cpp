#include "Player.h";

using namespace std; // I need to read up if we are allowed to use this for this assignment or not?

Player::Player(std::string name)
{
    this->name = name;
}

Player::~Player()
{
}

Player::Player(std::string name, LinkedList *hand)
{
    this->name = name;
    this->hand = hand;
}

void Player::setPlayerHand(LinkedList *hand)
{
    this->hand = hand;
}

void Player::setPlayerScore(int score)
{
    this->score = score;
}

void Player::addPlayerScore(int score)
{
    this->score += score;
}

LinkedList *Player::getPlayerHand()
{
    return hand;
}

int *Player::getPlayerScore()
{
    int *scorePtr = &score;
    return scorePtr;
}

string *Player::getPlayerName()
{
    string *namePtr = &name;
    return namePtr;
}
