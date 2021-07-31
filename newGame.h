#include <iostream>
#include <string>
#include <vector>
#include <fstream>

class newGame
{
public:
    newGame();
    void addPlayers();
    std::string getCurrentPlayer();
    void switchPlayer();
    void startGameMsg();
    void runGame();
    void gamePlay();
    void gamePlayAlgo();

    ~newGame();

private:
    std::string currentPlayer;
    std::string playerNames[2];
    int play;
    std::string p1;
};
