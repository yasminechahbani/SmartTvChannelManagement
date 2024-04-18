#ifndef DARK_MODE_H
#define DARK_MODE_H

#include "emission.h"
#include "ui_mainwindow_dark_mode.h"
#include "ui_mainwindow.h"

#include <QMainWindow>
#include <QObject>
#include <QStringList>
#include <QSqlQueryModel>
#include <QVBoxLayout>
#include <QFile>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindowDarkMode; }
QT_END_NAMESPACE






class MainWindowDarkMode : public QMainWindow
{
    Q_OBJECT

public:
    MainWindowDarkMode(QWidget *parent = nullptr);
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
    void on_excel_clicked() ;
    QStringList readEmissionForExcel(const QSqlQueryModel* model, int row) ;
    void on_generateQRButton_clicked();
    void on_dark_mode_clicked(); // Slot for dark mode button clicked
    void on_Sort_clicked();

private:
    Ui::MainWindowDarkMode *ui;

    EMISSION Emission;

};





#endif // DARK_MODE_H

