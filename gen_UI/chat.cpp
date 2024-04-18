#include "chat.h"
#include "ui_chat.h"
#include <QDebug>
#include <QHostAddress>
#include <QStandardItemModel>
#include <QFile>
#include<QMessageBox>

chat::chat(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::chat)
{
    ui->setupUi(this);

    this->notificationSelected = "";

    ui->tableView_notif->resizeColumnsToContents();
    ui->tableView_notif->horizontalHeader()->setStretchLastSection(true);

}

chat::~chat()
{
    delete ui;
}

void chat::showEvent(QShowEvent *event)
{
    Q_UNUSED(event);
    prepareTableViewNotification(); // Call the function after the window is displayed
}

void chat::prepareTableViewNotification()
{
    QVector<QString> vectorNotification = getNotificationFromFile();

    QStandardItemModel *model = new QStandardItemModel(vectorNotification.size(), 1, this);
    model->setHorizontalHeaderItem(0, new QStandardItem(QString("Log history")));
    for (int i = 0; i < vectorNotification.size(); i++) {
        QStandardItem *Row = new QStandardItem(vectorNotification[i]);
        model->setItem(i, Row);
    }
    ui->tableView_notif->setModel(model);
}

QVector<QString> chat::getNotificationFromFile()
{
    QString fileName = "C:/Users/emnaa/Desktop/gen_UI/notification.txt";
    QFile file(fileName);
    QVector<QString> notificationVector;
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file);
        while (!in.atEnd()) {
            QString line = in.readLine();
            notificationVector.push_back(line);
        }
        file.close();
    } else {
        qDebug() << "Error opening notification file: " << file.errorString();
    }
    qDebug() << "Notifications read from file: " << notificationVector;
    return notificationVector;
}

void chat::on_tableView_notif_clicked(const QModelIndex &index)
{
    // When a notification is clicked, store it in the notificationSelected variable
    this->notificationSelected = ui->tableView_notif->currentIndex().sibling(ui->tableView_notif->currentIndex().row(), 0).data().toString();
}

void chat::on_pushButton_notif_clicked()
{
    // If a notification is selected, perform an action (e.g., mark as read or delete)
    if (!this->notificationSelected.isEmpty()) {
        qDebug() << "Selected notification: " << this->notificationSelected;
        // Implement your action to be performed on the selected notification here
    } else {
        qDebug() << "Please select a notification";
    }
}

void chat::on_Display_clicked()
{
    QString fileName = "C:/Users/user/OneDrive/Documents/gen_UI/notification.txt";
      QFile file(fileName);
      if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
          qDebug() << "Error opening notification file: " << file.errorString();
          return;
      }

      QStringList lines;
      QTextStream in(&file);
      while (!in.atEnd()) {
          QString line = in.readLine();
          lines.append(line);
      }
      file.close();

      // Clear any existing data in the table view
      ui->tableView_notif->model()->removeRows(0, ui->tableView_notif->model()->rowCount());

      // Populate the table view with the lines from the text file
      QStandardItemModel *model = new QStandardItemModel(lines.size(), 1, this);
      for (int i = 0; i < lines.size(); ++i) {
          QStandardItem *item = new QStandardItem(lines.at(i));
          model->setItem(i, 0, item);
      }
      ui->tableView_notif->setModel(model);
}
