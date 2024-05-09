#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QTableView>
#include <QNetworkReply>
#include "arduino.h"
namespace Ui {
    class LoginMainWindow;
}

class LoginMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit LoginMainWindow(QWidget *parent = nullptr);
    ~LoginMainWindow();

private slots:
    void on_loginButton_clicked();
    bool compareIDCard();

private:
    Ui::LoginMainWindow *ui;
    QString username;
    QString password;
int test=0;
    bool validateCredentials(const QString &id, const QString &password);
    void openMainInterface();
    bool readFromSerial();
    void writeData(const char *data);

    //arduino
     QString searchEmployeeById(QString id);
      QByteArray data;
      Arduino A;
      QSerialPort *arduino;
      static const quint16 arduino_uno_vendor_id = 9025;
      static const quint16 arduino_uno_product_id = 67;
      QString arduino_port_name;
      bool arduino_is_available;

       QTableView *tableView_2;

};

#endif // MAINWINDOW_H
