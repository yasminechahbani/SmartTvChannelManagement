#ifndef STATWINDOW_H
#define STATWINDOW_H
#include "equipement.h"

#include <QWidget>
#include <QObject>

QT_BEGIN_NAMESPACE
namespace Ui { class StatWindow; }
QT_END_NAMESPACE

class StatWindow : public QWidget
{
    Q_OBJECT

public:
    explicit StatWindow(QWidget *parent = nullptr);
    ~StatWindow();

public slots:
    //void on_stats_button_clicked();

private:
    Ui::StatWindow *ui;
    StatWindow *statWindow;
};

#endif // STATWINDOW_H
