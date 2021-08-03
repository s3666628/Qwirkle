#include "board.h"
#include "Tile.h"
#include <iostream>
#include <ostream>
// creates grid and initialises with nullpointers.

Board::Board(int size, std::ostream *outputStream)
{
    this->outputStream = outputStream;
    for (int i = 0; i < size; i++)
    {
        std::vector<Tile *> row;
        for (int j = 0; j < size; j++)
        {
            row.push_back(nullptr);
        }
        board.push_back(row);
    }
}

// expanding the board
void Board::reSize()
{
    int bsize = getSize();
    if (bsize < 26)
    {
        for (int i = 0; i < getSize(); i++)
        {
            board[i].push_back(nullptr);
        }
        std::vector<Tile *> row;
        for (int j = 0; j <= getSize(); j++)
        {
            row.push_back(nullptr);
        }
        board.push_back(row);
    }
}

// printing the grid to the display
void Board::display()
{
    int n = (int)board.size();
    *outputStream << "   ";

    for (int k = 0; k < n; k++)
        if (k < 10)
        {
            *outputStream << k << "  ";
        }
        else
            *outputStream << k << " ";
    *outputStream << "\n  ";
    for (int t = 0; t < n; t++)
        *outputStream << "---";
    *outputStream << std::endl;

    // loops to print the vector of vectors
    for (int i = 0; i < n; i++)
    {
        *outputStream << (char)('A' + i) << " |";
        for (int j = 0; j < n; j++)
        {
            if (board[i][j] != nullptr)
            {

                if (this->outputStream != &std::cout)
                {

                    *outputStream << this->getTile(i, j)->getTileColour() << this->getTile(i, j)->getTileShape();
                }
                else
                {
                    this->getTile(i, j)->printTile();
                }
                *outputStream << "|";
            }
            else
                *outputStream << "  |";
        }
        *outputStream << std::endl;
    }
}

std::string Board::toString()
{

    std::string output = "";
    int n = (int)board.size();

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (board[i][j] != nullptr)
            {
                std::string colour(1, this->getTile(i, j)->getTileColour());
                output.append(colour);
                output.append(std::to_string(this->getTile(i, j)->getTileShape()));
                output.append("|");
            }
            else
            {
                output.append("  |");
            }
        }
        output.append("\n");
    }
    return output;
}
int Board::getSize()
{
    return (int)board.size();
}

Tile *Board::getTile(int row, int col)
{
    Tile *tile = nullptr;
    if (row < getSize() && col < getSize())
    {
        tile = board[row][col];
    }
    return tile;
}
void Board::setTile(int row, int col, Tile *tile)
{
    if (row < getSize() && col < getSize())
    {
        board[row][col] = tile;
    }
}