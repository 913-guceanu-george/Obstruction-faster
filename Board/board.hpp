#include <utility>
#include <exception>
#include <string>
#include "../Exceptions/exceptions.hpp"

class Board
{
    /*Game needs a board to be played on innit?*/
private:
    int **board; // Our board doesn't have a size yet, hence the pointer.
    int size;    // The size that will be given by the user.

public:
    Board(int size);
    void putPiece(std::pair<int, int> pos, int player);
    std::string toString();
    ~Board();
};