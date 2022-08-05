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
    // Getter so we can verify the position validity later.
    int getPiece(std::pair<int, int> pos);

    // Function to set a piece accordingly, so that it visually marks for the
    // other player which positions are blocked.
    void putPiece(std::pair<int, int> pos, int player);

    // Adapting the board as a string, for a more pleasant visual look.
    std::string toString();
    ~Board();
};