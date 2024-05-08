#ifndef CHATEQUIP_H
#define CHATEQUIP_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QVector>

namespace Ui {
    class chatequip;
}

class chatequip : public QMainWindow
{
    Q_OBJECT

public:
    explicit chatequip(QWidget *parent = nullptr);
    ~chatequip();
    QVector<QString> getNotificationFromFile();
    void returnToPreviousView();
    void prepareTableViewNotification();

private slots:
    //void connectToServer();
    //void sendData(const QString &message);
    //void readMessage();
    void on_tableView_notif_clicked(const QModelIndex &index);
    void on_pushButton_notif_clicked();
    void showEvent(QShowEvent *event);

    void on_Display_clicked();

private:
    Ui::chatequip *ui;
    QTcpSocket *m_socket;
    QString notificationSelected;
};

#endif // CHATEQUIP_H
