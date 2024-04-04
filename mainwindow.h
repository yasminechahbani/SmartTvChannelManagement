#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "sponsor.h"
#include <QMainWindow>
#include <QObject>

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
    void on_list_all_button_clicked();
    void on_clear_fields_add_clicked();
    void on_clear_all_in_table_clicked();
    void on_update_clicked();
    void on_Generate_PDF_clicked() ;
    void on_stat_clicked() ;

private:
    Ui::MainWindow *ui;
    Sponsor sponsor; // Instantiate the Sponsor class
};

#endif // MAINWINDOW_H
