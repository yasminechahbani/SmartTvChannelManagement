#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "equipement.h"
#include <QMainWindow>

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


private:
    Ui::MainWindow *ui;
    EQUIPEMENT Equipmp;
    //added this now
    QSqlDatabase db;
};
#endif // MAINWINDOW_H
