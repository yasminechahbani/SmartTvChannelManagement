#ifndef MAINWINDOW_DARKMODE_H
#define MAINWINDOW_DARKMODE_H

#include <QMainWindow>
#include "emission.h"
#include <QMainWindow>
#include <QObject>

QT_BEGIN_NAMESPACE

namespace Ui {
class MainWindowDarkMode;
}
QT_END_NAMESPACE

class MainWindowDarkMode : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindowDarkMode(QWidget *parent = nullptr);
    ~MainWindowDarkMode();

private slots:
    void on_ajouter_clicked();
    void on_delete_button_clicked();
    void on_list_all_button_clicked();
    void on_clear_all_in_table_clicked();
    void on_update_clicked();
    void on_Generate_PDF_clicked();
    void on_stat_clicked();
    void on_printEmissions_clicked();
    void on_sortComboBox_clicked() ;
    void on_dark_mode_clicked();


private:
    Ui::MainWindowDarkMode *ui;
    EMISSION Emission;

};

#endif // MAINWINDOW_DARKMODE_H
