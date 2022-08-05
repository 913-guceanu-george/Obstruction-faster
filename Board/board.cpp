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

int Board::getPiece(std::pair<int, int> pos)
{
    return this->board[pos.first][pos.second];
}

void Board::putPiece(std::pair<int, int> pos, int player)
{
    int x = pos.first;
    int y = pos.second;
    this->board[x][y] = player;

    // Checking if a piece is put on the first row
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
        // Rest of the line
        this->board[x][y - 1] = -1;
        this->board[x][y + 1] = -1;
        this->board[x + 1][y - 1] = -1;
        this->board[x + 1][y] = -1;
        this->board[x + 1][y + 1] = -1;
    }

    // Checking if a piece is put on the last row
    if (x == this->size - 1)
    {
        // Corner cases
        if (y == 0)
        {
            this->board[x - 1][y] = -1;
            this->board[x - 1][y + 1] = -1;
            this->board[x][y + 1] = -1;
            return;
        }

        if (y == this->size - 1)
        {
            this->board[x][y - 1] = -1;
            this->board[x - 1][y - 1] = -1;
            this->board[x - 1][y] = -1;
            return;
        }

        // Rest of the line
        this->board[x][y - 1] = -1;
        this->board[x - 1][y - 1] = -1;
        this->board[x - 1][y] = -1;
        this->board[x - 1][y + 1] = -1;
        this->board[x][y + 1] = -1;
        return;
    }

    // All corners, top and bottom row are covered, only special case left is most left and right column.

    // Left column
    if (y == 0)
    {
        this->board[x - 1][y] = -1;
        this->board[x - 1][y + 1] = -1;
        this->board[x][y + 1] = -1;
        this->board[x + 1][y + 1] = -1;
        this->board[x + 1][y] = -1;
        return;
    }

    // Right column
    if (y == this->size - 1)
    {
        this->board[x - 1][y] = -1;
        this->board[x - 1][y - 1] = -1;
        this->board[x][y - 1] = -1;
        this->board[x + 1][y - 1] = -1;
        this->board[x + 1][y] = -1;
        return;
    }

    // General case
    this->board[x - 1][y - 1] = -1;
    this->board[x - 1][y] = -1;
    this->board[x - 1][y + 1] = -1;
    this->board[x][y - 1] = -1;
    this->board[x][y + 1] = -1;
    this->board[x + 1][y - 1] = -1;
    this->board[x + 1][y] = -1;
    this->board[x + 1][y + 1] = -1;
    return;
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