#include "emissionmainwindow.h"
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
    EmissionMainWindow w;
    Connection c;
   bool test=c.createconnect();
   if (test)
   {w.show();
       QMessageBox::information(nullptr,QObject::tr("database is open"),
                             QObject::tr("connection successful.\n"
                                         "Clicl cancel to exit ."), QMessageBox::Cancel);
   }
   else{
       QMessageBox::critical(nullptr,QObject::tr("database is not open"),
                             QObject::tr("connection failed.\n"
                                         "Clicl cancel to exit ."), QMessageBox::Cancel);


}
   // Specify the path to your Python interpreter
       QString pythonInterpreter = "C:/Users/USER/Desktop/official_projectCPP_folder/Hand-Tracker-main/.venv/Scripts/python.exe";

       // Specify the path to your Python script
       QString pythonScriptPath = "C:/Users/USER/Desktop/official_projectCPP_folder/Hand-Tracker-main/Track/another-method/FingerCounter.py";


       // Create a QProcess object to start the Python script
       QProcess pythonProcess;

       // Start the Python script using the specified interpreter
       pythonProcess.start(pythonInterpreter, QStringList() << pythonScriptPath);

       // Check if the Python script was started successfully
       if (!pythonProcess.waitForStarted()) {
           qDebug() << "Failed to start Python script!";
           return -1;
       }

       // Wait for the Python script to finish
       if (!pythonProcess.waitForFinished()) {
           qDebug() << "Failed to finish Python script!";
           return -1;
       }

       // Retrieve and print the output of the Python script
       QByteArray output = pythonProcess.readAllStandardOutput();
       qDebug() << "Python Script Output:" << output;
return a.exec();


}
