#include "obstruction.h"
#include "./ui_obstruction.h"

obstruction::obstruction(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::obstruction)
{
    ui->setupUi(this);
}

obstruction::~obstruction()
{
    delete ui;
}

