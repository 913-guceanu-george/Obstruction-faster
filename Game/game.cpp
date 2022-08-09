#include "game.hpp"

Game::Game(int size)
{
    this->board = Board(size);
    this->player = 1;
}

void Game::setPiece(std::pair<int, int> pos)
{
    if (pos.first < 0 || pos.first > this->size)
        throw PositionException();
    if (pos.second < 0 || pos.second > this->size)
        throw PositionException();

    this->board.putPiece(pos, this->player);

    if (this->player == 1)
    {
        this->player == 2;
        return;
    }
    this->player = 1;
}

int Game::checkWinner()
{
    for (int i = 0; i < this->size; i++)
    {
        for (int j = 0; j < this->size; j++)
        {
            std::pair<int, int> k;
            k.first = i;
            k.second = j;
            if (this->board.getPiece(k) == -1)
                return -1; // No winner
        }
    }
    return this->player; // Returns the id (1 or 2) of the player that lost.
}