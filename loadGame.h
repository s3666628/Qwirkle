#include <string>

class loadGame
{
public:
    loadGame();

    ~loadGame();
    void readFile();
    char arrBag[0];

private:
    std::string read;
    std::string fileName;

};