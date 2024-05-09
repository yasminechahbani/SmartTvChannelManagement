#ifndef USEEQUIPMENTWINDOW_H
#define USEEQUIPMENTWINDOW_H

#include <QMainWindow>
#include "equipement.h"
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QUrl>
#include <QUrlQuery>
#include <QByteArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonParseError>
#include <QMessageBox> // Add this line for QMessageBox
#include <iostream> // For basic output (optional)
#include <string>
#include <sstream>
#include <fstream>
#include <QHttpPart>

namespace Ui {
class useequipmentwindow;
}

class useequipmentwindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit useequipmentwindow(QWidget *parent = nullptr);
    ~useequipmentwindow();
    void sendWhatsAppMessage(const QString& recipient, const QString& message);
    void on_use_return_clicked();
    void sendEmail(const QString& recipient, const QString& subject, const QString& body);



//private:
    Ui::useequipmentwindow *ui;
private slots:
    void on_list_clicked();
    void on_tableView_activated(const QModelIndex &index);
    void onWhatsAppRequestFinished(QNetworkReply* reply);


private:
    EQUIPEMENT Equipmp;

};

#endif // USEEQUIPMENTWINDOW_H
