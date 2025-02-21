#pragma once

#include <QtWidgets/QMainWindow>
#include "QtBtButtons.h"
#include <QPushbutton>

class QtBtController : public QMainWindow
{
    Q_OBJECT

public:
    QtBtButtons(QWidget *parent = nullptr);
    ~QtBtButtons();

private:
    Ui::QtBtButtonsClass ui;
};
