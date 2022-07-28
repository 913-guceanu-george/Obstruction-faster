/********************************************************************************
** Form generated from reading UI file 'obstruction.ui'
**
** Created by: Qt User Interface Compiler version 5.15.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OBSTRUCTION_H
#define UI_OBSTRUCTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_obstruction
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *obstruction)
    {
        if (obstruction->objectName().isEmpty())
            obstruction->setObjectName(QString::fromUtf8("obstruction"));
        obstruction->resize(800, 600);
        centralwidget = new QWidget(obstruction);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        obstruction->setCentralWidget(centralwidget);
        menubar = new QMenuBar(obstruction);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        obstruction->setMenuBar(menubar);
        statusbar = new QStatusBar(obstruction);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        obstruction->setStatusBar(statusbar);

        retranslateUi(obstruction);

        QMetaObject::connectSlotsByName(obstruction);
    } // setupUi

    void retranslateUi(QMainWindow *obstruction)
    {
        obstruction->setWindowTitle(QCoreApplication::translate("obstruction", "obstruction", nullptr));
    } // retranslateUi

};

namespace Ui {
    class obstruction: public Ui_obstruction {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OBSTRUCTION_H
