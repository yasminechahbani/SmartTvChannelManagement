#ifndef EMPLOYEEMAINWINDOW_H
#define EMPLOYEEMAINWINDOW_H

#include "employee.h"
#include <QMainWindow>
#include <QObject>

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

private:
    Ui::EmployeeMainWindow*ui;
    EMPLOYEE Employee;
};

#endif // EMPLOYEEMAINWINDOW_H
