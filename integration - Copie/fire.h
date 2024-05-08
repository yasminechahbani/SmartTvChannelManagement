#ifndef FIRE_H
#define FIRE_H

#include <QWidget>

namespace Ui {
class fire;
}

class fire : public QWidget
{
    Q_OBJECT

public:
    explicit fire(QWidget *parent = nullptr);
    ~fire();
    QVector<QString> getNotificationFromFile();
    QVector<QString> getNotificationFromFile_fire();
private slots:
    void prepareTableViewNotification();
    void on_tableView_notif_clicked(const QModelIndex &index);

    void on_pushButton_notif_clicked();
    void showEvent(QShowEvent *event);

private:
    Ui::fire *ui;
    QString notificationSelected;
};

#endif // FIRE_H




