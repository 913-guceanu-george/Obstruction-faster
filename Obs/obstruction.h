#pragma once

#include <QMainWindow>
#include "ui_obstruction.h"

class Obstruction : public QMainWindow
{
    Q_OBJECT

public:
    Obstruction(QWidget *parent = nullptr);
    ~Obstruction();

private:
    Ui::ObsClass ui;
};
