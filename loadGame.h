#include <string>

class loadGame
{
public:
    loadGame();

    ~loadGame();
    void readFile();

private:
    std::string read;
    std::string fileName;

};