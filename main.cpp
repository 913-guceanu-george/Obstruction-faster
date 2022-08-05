#include <iostream>
#include "Board/board.hpp"
// #include <QApplication>
// #include <QMainWindow>

int main(int argc, char **argv)
{
    Board b = Board(7);
    std::pair<int, int> pos;
    pos.first = 0;
    pos.second = 2;
    b.putPiece(pos, 1);
    std::cout << b.toString();
    return 0;
}