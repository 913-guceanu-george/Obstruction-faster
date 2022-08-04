#include "board.hpp"

Board::Board(int size)
{
    this->size = size;
    this->board = new int *[this->size];
    for (int i = 0; i <= this->size; i++)
    {
        this->board[i] = new int[this->size];
        for (int j = 0; j <= 0; j++)
            this->board[i][j] = 0;
    }
}

void Board::putPiece(std::pair<int, int> pos, int player)
{
    int x = pos.first;
    int y = pos.second;
    if (x == 0)
    {
        this->board[x][y] = player;
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
    }
}
