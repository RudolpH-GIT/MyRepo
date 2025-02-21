/********************************************************************************
** Form generated from reading UI file 'QtBtController.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTBTCONTROLLER_H
#define UI_QTBTCONTROLLER_H

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

    void setupUi(QMainWindow *QtBtControllerClass)
    {
        if (QtBtControllerClass->objectName().isEmpty())
            QtBtControllerClass->setObjectName("QtBtControllerClass");
        QtBtControllerClass->resize(600, 400);
        centralWidget = new QWidget(QtBtControllerClass);
        centralWidget->setObjectName("centralWidget");
        btnConnect = new QPushButton(centralWidget);
        btnConnect->setObjectName("btnConnect");
        btnConnect->setGeometry(QRect(80, 20, 75, 24));
        QtBtControllerClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QtBtControllerClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 600, 22));
        QtBtControllerClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtBtControllerClass);
        mainToolBar->setObjectName("mainToolBar");
        QtBtControllerClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QtBtControllerClass);
        statusBar->setObjectName("statusBar");
        QtBtControllerClass->setStatusBar(statusBar);

        retranslateUi(QtBtControllerClass);

        QMetaObject::connectSlotsByName(QtBtControllerClass);
    } // setupUi

    void retranslateUi(QMainWindow *QtBtControllerClass)
    {
        QtBtControllerClass->setWindowTitle(QCoreApplication::translate("QtBtControllerClass", "QtBtController", nullptr));
        btnConnect->setText(QCoreApplication::translate("QtBtControllerClass", "Connect", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtBtControllerClass: public Ui_QtBtControllerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTBTCONTROLLER_H
