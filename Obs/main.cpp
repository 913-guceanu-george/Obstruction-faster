#include "obstruction.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Obstruction w;
    w.show();
    return a.exec();
}
