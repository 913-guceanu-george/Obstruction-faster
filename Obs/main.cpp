#include <iostream>
#include <QApplication>
#include <QMainWindow>

int main(int argc, char **argv)
{
    QApplication app(argc, argv);
    QMainWindow w;
    w.resize(500, 500);
    w.show();
    return app.exec();
}