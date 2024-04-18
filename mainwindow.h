#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "sponsor.h"
#include <QMainWindow>
#include <QObject>
#include <QTime>


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
    void on_sendButton_clicked() ;
    void on_Sponsor_tabHeader_clicked(int index) ;
    void onStartTimeChanged(const QTime &time);
    void onEndTimeChanged(const QTime &time);
    //void sendEmail(const QString& recipient, const QString& subject, const QString& body);
     void onSendSMSButtonClicked();
     //QStringList readSponsorExcel(const QSqlQueryModel* model, int row);
     void on_excel_clicked() ;
     void on_sort_clicked();
     void on_search_clicked();

    void on_use_return_clicked();



private:
    QTime startTime;
    QTime endTime;
    Ui::MainWindow *ui;
    Sponsor sponsor; // Instantiate the Sponsor class
};



#endif // MAINWINDOW_H
