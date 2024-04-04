#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "emission.h"
#include <QMainWindow>
#include <QObject>
#

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow;
; }
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
    void on_clear_all_in_table_clicked();
    void on_update_clicked();
    void on_Generate_PDF_clicked();
    void on_stat_clicked();
    void on_printEmissions_clicked();
    void on_excel_clicked() ;
    QStringList readEmissionForExcel(const QSqlQueryModel* model, int row) ;
   // void generateQRCode(const QString &pdfFilePath);
    void on_generateQRButton_clicked();





private:
    Ui::MainWindow *ui;
    EMISSION Emission;

};
#endif // MAINWINDOW_H
