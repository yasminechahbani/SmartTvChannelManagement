#ifndef CHAT_H
#define CHAT_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QVector>

namespace Ui {
    class chat;
}

class chat : public QMainWindow
{
    Q_OBJECT

public:
    explicit chat(QWidget *parent = nullptr);
    ~chat();
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
    Ui::chat *ui;
    QTcpSocket *m_socket;
    QString notificationSelected;
};

#endif // CHAT_H
