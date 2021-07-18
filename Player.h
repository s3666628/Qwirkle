#include "LinkedList.h"

#include <string>

class Player
{

public:
    std::string name;
    int score;
    LinkedList *hand;

    Player(std::string name);

    Player(std::string name, LinkedList *hand);

    ~Player();

    std::string *getPlayerName();

    void setPlayerScore(int score);

    void addPlayerScore(int score);

    void setPlayerHand(LinkedList *hand);

    LinkedList *getPlayerHand();

    int *getPlayerScore();
};