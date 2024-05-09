#include "emissionmainwindow.h"
#include "Employeemainwindow.h"
#include "mainwindow.h"
#include "mainwindow.cpp"
#include <QMessageBox>
#include <QApplication>
//#include <QFrame>
#include <QPushButton>
#include <QHoverEvent>
//#include <QVBoxLayout>
//added
//#include<QFile>
#include<QDebug>
#include <QtSerialPort>
#include <QSerialPortInfo>

#include "connexion.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //EmissionMainWindow w;
    LoginMainWindow w;
    Connection c;
   bool test=c.createconnect();
   if (test)
   {w.show();
       QMessageBox::information(nullptr,QObject::tr("database is open"),
                             QObject::tr("connection successful.\n"
                                         "Clicl cancel to exit ."), QMessageBox::Cancel);
   }
   else
       QMessageBox::critical(nullptr,QObject::tr("database is not open"),
                             QObject::tr("connection failed.\n"
                                         "Clicl cancel to exit ."), QMessageBox::Cancel);



return a.exec();


}
