#include <Controller.h>
#include "QtBtButtons.h"
#include <QtWidgets/QApplication>
#include <QPushbutton>
#include <QMessagebox>
#include <QBluetoothSocket>


/*#include <QBluetoothDeviceInfo>
#include <QBluetoothUuid>*/

int main(int argc, char *argv[])
{
    
    QApplication app(argc, argv);
    
    QtBtController w;
    
    QPushButton* btnConnect = qobject_cast<QPushButton*>(w.findChild<QObject*>("btnConnect"));
    w.show();

    if (btnConnect) {
        QPushButton::connect(btnConnect, &QPushButton::clicked, [&]() {
            QMessageBox::information(NULL,"Establishing connection","Connecting !" );
            //Controller::connectToDevice();
            });
       
            
    }
    
    return app.exec();
}

 