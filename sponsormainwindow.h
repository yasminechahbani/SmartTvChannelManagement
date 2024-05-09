#ifndef SPONSORMAINWINDOW_H
#define SPONSORMAINWINDOW_H

#include "sponsor.h"
#include <QMainWindow>
#include <QObject>
#include <QTime>
#include "invitesmainwindow.h"

#include <QStackedWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class SponsorMainWindow; }
QT_END_NAMESPACE

class SponsorMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    SponsorMainWindow(QWidget *parent = nullptr);
    ~SponsorMainWindow();

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


    void on_Sponsor_tabHeader_clicked(int index) ;

    //void sendEmail(const QString& recipient, const QString& subject, const QString& body);
     //QStringList readSponsorExcel(const QSqlQueryModel* model, int row);
     void on_excel_clicked() ;
     void on_sort_clicked();
     void on_search_clicked();

    void on_use_return_clicked();


    void on_fr_clicked();
    //void on_Sponsors_clicked();
    void on_employees_clicked();
    void on_guests_clicked();
    void on_equipement_clicked();
    void on_shows_clicked();








private:
    QTime startTime;
    QTime endTime;
    Ui::SponsorMainWindow *ui;
    Sponsor sponsor; // Instantiate the Sponsor class
    QStackedWidget *stackedWidget;
    invitesMainWindow *invitesWindow;

};




#endif // SPONSORMAINWINDOW_H
