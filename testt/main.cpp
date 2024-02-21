#include "mainwindow.h"
#include <QMessageBox>
#include <QApplication>
#include <QFrame>
#include <QPushButton>
#include <QVBoxLayout>
//added
#include<QFile>
#include<QDebug>
#include "connexion.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
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


    /*QFile file(":/font/Kabel Book BT_0.ttf");
    if (file.exists())
    {
        qDebug() << "Font file exists.";
        QFont serif("Kabel Book BT", 16, QFont::Bold); // Use the font family name instead of the file path
        w.setFont(serif);
    }
    else
    {
        qDebug() << "Font file not found.";
    }
    w.show();
    return a.exec();*/




return a.exec();


}
