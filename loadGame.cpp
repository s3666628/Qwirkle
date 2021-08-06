#include <iostream>
#include <fstream>
#include <string>

#include "loadGame.h"

loadGame::loadGame()
{
}
loadGame::~loadGame()
{
}
void loadGame::readFile()
{
    std::string read = "";
    std::string fileName = "";
    int i;

    // std::cout << "Enter name of file you want to load:" << std::endl;
    // std::cout << ">";
    // std::cin >> fileName;
    //check if file name has a .txt at the back, if none add it

    std::ifstream myfile ("Tests/newGame.save");

    if (myfile.is_open())
    {
        for (i = 0; i < 9; i++)
        {
            getline (myfile,read);
            if (i == 0)
            {
                std::cout << read << '\n';
                //add player 1 name to player 1
            }
            else if (i==1)
            {
                std::cout << read << '\n';
                //add player 1 score to player 1 score
            }
            else if (i==2)
            {
                std::cout << read << '\n';
                //add player 1 hand to player 1 hand
            }
            else if (i==3)
            {
                std::cout << read << '\n';
                //add player 2 name to player 2
            }
            else if (i==4)
            {
                std::cout << read << '\n';
                //add player 2 score to player 2 score
            }
            else if (i==5)
            {
                std::cout << read << '\n';
                //add player 2 hand to player 2
            }
            else if (i==6)
            {
                std::cout << read << '\n';
                //add current board state to board
            }
            else if (i==7)
            {
                std::cout << read << '\n';
                //add tile bag content to tile bag
            }
            else if (i==8)
            {
                std::cout << read << '\n';
                //add current player to current player
            }
        }
        myfile.close();
    }

    else std::cout << "Unable to open file"; 
}
