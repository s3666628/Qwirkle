

class newGame
{
public:
    newGame();
    void addPlayers();
    std::string playersTurn(std::string currentPlayer);
    std::string switchPlayer();

    ~newGame();

private:
    std::string currentPlayer;
};
