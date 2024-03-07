#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QHoverEvent>
#include "invites.h"
#include <QTableView>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void changeCursor();
    void openForm();
    void opensupp();
    void openUpdate();
    void on_tableView_clicked(const QModelIndex &index);
    void on_toolButton_clicked();
    //void on_pushButton_update_clicked();

    void on_pushButton_up_clicked();
    void refreshTable();
void on_tableView_activated(const QModelIndex &);
    void on_Generate_PDF_clicked();

private:
    Ui::MainWindow *ui;
    invites inv;
    QTableView *tableView;
};

#endif // MAINWINDOW_H
