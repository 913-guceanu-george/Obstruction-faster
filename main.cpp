#include <iostream>
#include "Board/board.hpp"
// #include <QApplication>
// #include <QMainWindow>

int main(int argc, char **argv)
{
    Board b = Board(7);
    std::pair<int, int> pos;
    pos.first = 1;
    pos.second = 1;
    b.putPiece(pos, 1);
    // pos.first = 5;
    // pos.second = 5;
    // b.putPiece(pos, 2);
    std::cout << b.toString();
    return 0;
}