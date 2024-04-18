#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "equipement.h"
#include <QMainWindow>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QUrlQuery>
#include <QSslSocket>
#include <QCoreApplication>
#include <QByteArray>




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

    void on_ajouter_clicked();

    void on_delete_button_clicked();

    void on_updatebutton_clicked();
    void on_equip_tab_activated(const QModelIndex&);


    void on_list_all_button_clicked();

    void on_clear_fields_add_clicked();

    void on_clear_all_in_table_clicked();

    void on_Generate_PDF_clicked();

    void on_search_button_clicked();
    bool validateFormData();

    void on_stats_button_clicked();

    void on_qr_button_clicked();


    void on_use_return_clicked();

    void on_sms_clicked();
    void sendSMS(const QString& recipient, const QString& message);
     void onSMSRequestFinished(QNetworkReply* reply);
     //lel twilio mail
     //void sendEmail(const QString& recipient, const QString& subject, const QString& body);
     //void sendEmail(const QString& apiKey, const QString& recipient, const QString& subject, const QString& body) ;
          //void sendEmail(const QString& , const QString& , const QString& , const QString& );

           //void onEmailRequestFinished(QNetworkReply *reply);
//lel smtp
          void sendEmail(const QString& recipient, const QString& subject, const QString& body);
          //bool promptUserForConfirmation();

     // Use equipment
     void on_useEquipment_clicked();

     // Return equipment
     void on_returnEquipment_clicked();






     void on_notif_clicked();

private:
    Ui::MainWindow *ui;
    EQUIPEMENT Equipmp;
    QSqlDatabase db;
};
#endif // MAINWINDOW_H
