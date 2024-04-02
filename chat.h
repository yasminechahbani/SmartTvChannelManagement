#ifndef CHAT_H
#define CHAT_H

#include <QDialog>

#include <QTcpSocket>
QT_BEGIN_NAMESPACE
namespace Ui { class chat; }
QT_END_NAMESPACE

class chat : public QDialog
{
    Q_OBJECT

public:
    //chat(QWidget *parent = nullptr);
     explicit chat(QWidget *parent = nullptr);
    ~chat();
    QVector<QString> getNotificationFromFile();
 void returnToPreviousView();
private slots:
    void connectToServer();
    void sendData(const QString &message);
    void readMessage();

    void prepareTableViewNotification();
    void on_tableView_notif_clicked(const QModelIndex &index);

    void on_pushButton_notif_clicked();

void showEvent(QShowEvent *event);
private:
    Ui::chat *ui;
    QTcpSocket *m_socket;
    QString notificationSelected; // Variable pour stocker la notification sélectionnée
};
#endif // CHAT_H
