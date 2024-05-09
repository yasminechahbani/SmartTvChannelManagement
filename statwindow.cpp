#include "statwindow.h"
#include "ui_statwindow.h"
#include "ui_mainwindow.h"
#include "equipement.h"

#include <QMessageBox>
#include <QSqlError>
#include<QDebug>
#include <QPdfWriter>
#include<QPainter>
#include<QDate>
#include<QDesktopServices>
#include<QUrl>
#include <QtCharts>

StatWindow::StatWindow(QWidget *parent)
    : QWidget(parent),
      ui(new Ui::StatWindow) // Allocate memory for the Ui::StatWindow object
{
    ui->setupUi(this); // Setup the UI for StatWindow using the setupUi() function for StatWindow
}

StatWindow::~StatWindow()
{
delete ui;

}

/*void StatWindow::on_stats_button_clicked()
{
    EQUIPEMENT equ;
         QSqlQuery query = equ.getStatByType();

         QtCharts::QPieSeries *series = new QtCharts::QPieSeries();
         while (query.next()) {
             QString type = query.value(0).toString();
             int count = query.value(1).toInt();
             QtCharts::QPieSlice *slice = new QtCharts::QPieSlice(type, count);
             series->append(slice);
         }

         QtCharts::QChart *chart = new QtCharts::QChart();
         chart->addSeries(series);
         chart->setTitle("Statistiques");
         chart->setAnimationOptions(QtCharts::QChart::SeriesAnimations);

         QtCharts::QChartView *chartView = new QtCharts::QChartView(chart);
         chartView->setRenderHint(QPainter::Antialiasing);
         chartView->setParent(ui->tableView);
         chartView->resize(ui->tableView->size());
         chartView->show();
}
*/
