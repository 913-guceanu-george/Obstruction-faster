#include "board.hpp"

Board::Board(int size)
{
    this->size = size;
    this->board = new int *[this->size];
    for (int i = 0; i < this->size; i++)
    {
        this->board[i] = new int[this->size];
        for (int j = 0; j < this->size; j++)
            this->board[i][j] = 0;
    }
}

void Board::putPiece(std::pair<int, int> pos, int player)
{
    int x = pos.first;
    int y = pos.second;
    if (this->board[x][y] == -1)
        throw PositionException();
    // Checking if a piece is put on the first row
    this->board[x][y] = player;
    if (x == 0)
    {
        // Corner cases
        if (y == 0)
        {
            this->board[x][y + 1] = -1;
            this->board[x + 1][y + 1] = -1;
            this->board[x + 1][y] = -1;
            return;
        }

        if (y == this->size - 1)
        {
            this->board[x + 1][y] = -1;
            this->board[x + 1][y - 1] = -1;
            this->board[x][y - 1] = -1;
            return;
        }
        this->board[x][y - 1] = -1;
        this->board[x][y + 1] = -1;
        this->board[x + 1][y - 1] = -1;
        this->board[x + 1][y] = -1;
        this->board[x + 1][y + 1] = -1;
    }
}

std::string Board::toString()
{
    std::string bd = "";
    for (int i = 0; i < this->size; i++)
    {
        for (int j = 0; j < this->size; j++)
        {
            if (this->board[i][j] == -1)
            {
                bd += "x ";
            }

            else if (this->board[i][j] == 1)
            {
                bd += "O ";
            }

            else if (this->board[i][j] == 2)
            {
                bd += "Y ";
            }

            else if (this->board[i][j] == 0)
            {
                bd += "- ";
            }
        }
        bd += "\n";
    }
    return bd;
}

Board::~Board()
{
    for (int i = 0; i < this->size; i++)
        delete this->board[i];
    delete this->board;
}