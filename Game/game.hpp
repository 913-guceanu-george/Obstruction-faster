#include "../Board/board.hpp"

class Game
{
private:
    Board board;
    int size;
    int player;

public:
    Game(int size);
    Game() { this->size = -1, this->player = -1, this->board = Board(); }

    // Checks if the position is valid
    void setPiece(std::pair<int, int> pos);

    // Checks if there is a winner
    int checkWinner();
};