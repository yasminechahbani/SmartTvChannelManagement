#ifndef SUPP_H
#define SUPP_H
#include "invites.h"
#include <QtCharts>
#include <QtCharts/QChartView>
#include <QtCharts/QPieSlice>
#include <QtCharts/QPieSeries>
#include <QtCharts/QChartView>
#include <QMainWindow>

#include <QWidget>

namespace Ui {
class supp;
}

class supp : public QMainWindow
{
    Q_OBJECT

public:
    explicit supp(QWidget *parent = nullptr);
    ~supp();

private slots:
    void on_pushButton_clicked();

    //void on_pushButton_supp_clicked();

private:
    Ui::supp *ui;
    invites inv;
     //QtCharts::QChartView *chartView;
};

#endif // SUPP_H
