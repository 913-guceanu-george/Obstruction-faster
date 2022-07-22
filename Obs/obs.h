#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_obs.h"

class Obs : public QMainWindow
{
    Q_OBJECT

public:
    Obs(QWidget *parent = nullptr);
    ~Obs();

private:
    Ui::ObsClass ui;
};
