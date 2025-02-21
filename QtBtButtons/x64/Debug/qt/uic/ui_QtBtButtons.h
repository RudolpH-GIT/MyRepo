/********************************************************************************
** Form generated from reading UI file 'QtBtButtons.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTBTBUTTONS_H
#define UI_QTBTBUTTONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtBtControllerClass
{
public:
    QWidget *centralWidget;
    QPushButton *btnConnect;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtBtButtonsClass)
    {
        if (QtBtButtonsClass->objectName().isEmpty())
            QtBtButtonsClass->setObjectName("QtBtButtonsClass");
        QtBtButtonsClass->resize(600, 400);
        centralWidget = new QWidget(QtBtButtonsClass);
        centralWidget->setObjectName("centralWidget");
        btnConnect = new QPushButton(centralWidget);
        btnConnect->setObjectName("btnConnect");
        btnConnect->setGeometry(QRect(80, 20, 75, 24));
        QtBtButtonsClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QtBtButtonsClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 600, 22));
        QtBtButtonsClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtBtButtonsClass);
        mainToolBar->setObjectName("mainToolBar");
        QtBtButtonsClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QtBtButtonsClass);
        statusBar->setObjectName("statusBar");
        QtBtButtonsClass->setStatusBar(statusBar);

        retranslateUi(QtBtButtonsClass);

        QMetaObject::connectSlotsByName(QtBtButtonsClass);
    } // setupUi

    void retranslateUi(QMainWindow *QtBtButtonsClass)
    {
        QtBtButtonsClass->setWindowTitle(QCoreApplication::translate("QtBtControllerClass", "QtBtController", nullptr));
        btnConnect->setText(QCoreApplication::translate("QtBtControllerClass", "Connect", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtBtControllerClass: public Ui_QtBtControllerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTBTBUTTONS_H
