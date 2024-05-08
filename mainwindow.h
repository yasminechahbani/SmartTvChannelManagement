#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "sponsor.h"
#include <QMainWindow>
#include <QObject>
#include <QTime>
#include <QtSerialPort>
#include <QSerialPortInfo>



QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void readData() ;
    void on_tableHeader_clicked(int index) ;
    void on_ajouter_clicked();
    void on_delete_button_clicked();
    void on_list_all_button_clicked();
    void on_clear_fields_add_clicked();
    void on_clear_all_in_table_clicked();
    void on_update_clicked();
    void on_Generate_PDF_clicked() ;
    void on_stat_clicked() ;
    void on_checkContracts_clicked();
    //void on_sendButton_clicked() ;
    void on_Sponsor_tabHeader_clicked(int index) ;

    //void sendEmail(const QString& recipient, const QString& subject, const QString& body);
     //QStringList readSponsorExcel(const QSqlQueryModel* model, int row);
     void on_excel_clicked() ;
     void on_sort_clicked();
     void on_search_clicked();

    void on_use_return_clicked();
    //void sendSMS(const QString& recipient, const QString& message) ;
    //void onSMSRequestFinished(QNetworkReply* reply) ;
    //void on_sms_clicked();
    void on_fr_clicked();






private:
    QTime startTime;
    QTime endTime;
    Ui::MainWindow *ui;
    Sponsor sponsor;
    QSerialPort *arduino;
   static const quint16 arduino_uno_vendor_id = 9025;
   static const quint16 arduino_uno_product_id = 67;
    QString arduino_port_name;
    bool arduino_is_available;// Instantiate the Sponsor class
};



#endif // MAINWINDOW_H
