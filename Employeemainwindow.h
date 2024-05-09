#ifndef EMPLOYEEMAINWINDOW_H
#define EMPLOYEEMAINWINDOW_H

#include "employee.h"
#include <QMainWindow>
#include <QObject>
#include <QTableView>
#include <QNetworkReply>
#include "arduino.h"

QT_BEGIN_NAMESPACE
namespace Ui { class EmployeeMainWindow; }
QT_END_NAMESPACE

class EmployeeMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    EmployeeMainWindow(QWidget *parent = nullptr);
    ~EmployeeMainWindow();

private slots:
    void on_ajouter_clicked();
    void on_delete_button_clicked();
    void on_list_all_button_clicked();
    void on_clear_all_button_clicked();

    void on_Generate_PDF_clicked();
    void on_stat_clicked();
    void on_Sponsors_clicked();
    //void on_employees_clicked();
    void on_guests_clicked();
    void on_equipement_clicked();



    void on_shows_clicked();

     void readFromSerial();

private:
    Ui::EmployeeMainWindow*ui;
    EMPLOYEE Employee;

    QByteArray data;
    Arduino A;
    QSerialPort *arduino;
    static const quint16 arduino_uno_vendor_id = 9025;
    static const quint16 arduino_uno_product_id = 67;
    QString arduino_port_name;
    bool arduino_is_available;

     QTableView *tableView_2;
};

#endif // EMPLOYEEMAINWINDOW_H
