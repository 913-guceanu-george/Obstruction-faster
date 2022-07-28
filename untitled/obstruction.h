#ifndef OBSTRUCTION_H
#define OBSTRUCTION_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class obstruction; }
QT_END_NAMESPACE

class obstruction : public QMainWindow
{
    Q_OBJECT

public:
    obstruction(QWidget *parent = nullptr);
    ~obstruction();

private:
    Ui::obstruction *ui;
};
#endif // OBSTRUCTION_H
