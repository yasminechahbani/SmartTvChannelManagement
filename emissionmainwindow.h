
#ifndef EMISSIONMAINWINDOW_H
#define EMISSIONMAINWINDOW_H

#include "emission.h"
#include "ui_emissionmainwindowdarkmode.h"
#include "ui_emissionmainwindow.h"

#include <QMainWindow>
#include <QObject>
#include <QStringList>
#include <QSqlQueryModel>
#include <QVBoxLayout>
#include <QFile>

#include <QtSerialPort>
#include <QSerialPortInfo>

QT_BEGIN_NAMESPACE
namespace Ui { class EmissionMainWindow; }
QT_END_NAMESPACE



class EmissionMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    EmissionMainWindow(QWidget *parent = nullptr);
    ~EmissionMainWindow();

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
    void on_Sponsors_clicked();
    void on_employees_clicked();
    void on_guests_clicked();
    void on_equipement_clicked();
void on_showLogButton_clicked();
void on_finger_clicked();

    void readData();
    void writeData(const char *data);

private:
    Ui::EmissionMainWindow *ui;
QSerialPort *arduino;
static const quint16 arduino_uno_vendor_id = 9025;
static const quint16 arduino_uno_product_id = 67;
QString arduino_port_name;
bool arduino_is_available;

    EMISSION Emission;

};





#endif // EMISSIONMAINWINDOW_H

