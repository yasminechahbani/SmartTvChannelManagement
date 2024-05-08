#ifndef INVITESMAINWINDOW_H
#define INVITESMAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QHoverEvent>
#include "invites.h"
#include <QTableView>
#include <QNetworkReply>
#include "arduino.h"
//#include "stat.h"


QT_BEGIN_NAMESPACE
namespace Ui { class invitesMainWindow; }
QT_END_NAMESPACE

class invitesMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit invitesMainWindow(QWidget *parent = nullptr);
    ~invitesMainWindow();
private slots:
    bool validateFormData();
    void on_pushButton_9_clicked();
    void on_pushButton_10_clicked();
    void changeCursor();
    void openForm();
    void opensupp();
    void openUpdate();
    //void on_tableView_clicked(const QModelIndex &index);
    void on_toolButton_clicked();
    //void on_pushButton_update_clicked();

    void on_pushButton_up_clicked();
    void refreshTable();
void on_tableView_activated(const QModelIndex &);
    void on_Generate_PDF_clicked();
    //void handleDateSelection(const QDate &selectedDate);





    void on_toolButton_2_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_list_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_3_clicked();
    void sendSMS(const QString& recipient, const QString& message);
         void onSMSRequestFinished(QNetworkReply* reply);

         void on_pushButton_5_clicked();
         //void readData();
         void readFromSerial();

private:
    Ui::invitesMainWindow *ui;
    invites inv;
    QTableView *tableView;
    QByteArray data;
    Arduino A;
    QSerialPort *arduino;
    static const quint16 arduino_uno_vendor_id = 9025;
    static const quint16 arduino_uno_product_id = 67;
    QString arduino_port_name;
    bool arduino_is_available;
    QTableView *tableView_2;

};

#endif // INVITESMAINWINDOW_H
