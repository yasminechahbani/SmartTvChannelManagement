// chat.cpp
//#include "chat.h"
//#include "ui_chat.h"

/*chat::chat(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::chat)
{
    ui->setupUi(this);

    // Initialiser ChatClient
    m_chatClient = new chat(this);

    // Connecter le signal messageReceived de ChatClient au slot handleNewMessage de chat
    connect(m_chatClient, &ChatClient::messageReceived, this, &chat::handleNewMessage);
}

chat::~chat()
{
    delete ui;
}

void chat::handleNewMessage(const QString &sender, const QString &message)
{
    // Traitement du nouveau message reçu
    // Par exemple, affichage dans l'interface utilisateur
    ui->textEdit->append(sender + ": " + message);
}
*/
#include "fire.h"
#include "ui_fire.h"
#include <QStackedWidget>

#include <QDebug>
#include <QHostAddress>
#include <QStandardItemModel>
#include <QFile>
#include <QDateTime>

fire::fire(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::fire)
{
    ui->setupUi(this);

    this->notificationSelected = "";

    ui->tableView_notif->resizeColumnsToContents();
    ui->tableView_notif->horizontalHeader()->setStretchLastSection(true);
}

fire::~fire()
{
    delete ui;
}

void fire::showEvent(QShowEvent *event)
{
    Q_UNUSED(event);
    prepareTableViewNotification(); // Appel de la fonction après l'affichage de la fenêtre
}

void fire::prepareTableViewNotification()
{
    QVector<QString> vectorNotification = getNotificationFromFile();

    QStandardItemModel *model = new QStandardItemModel(vectorNotification.size(), 1, this);
    model->setHorizontalHeaderItem(0, new QStandardItem(QString("Urgent")));
    for (int i = 0; i < vectorNotification.size(); i++) {
        QStandardItem *Row = new QStandardItem(vectorNotification[i]);
        model->setItem(i, Row);
    }
    ui->tableView_notif->setModel(model);
}
//Segno
/*QVector<QString> chat::getNotificationFromFile()
{
    //QString fileName = "notification.txt";
     QString fileName = "C:/Users/USER/Desktop/official_projectCPP_folder/integration finale/integration - Copie/notification.txt";
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
        qDebug() << "Erreur lors de l'ouverture du fichier de notifications : " << file.errorString();
    }
    qDebug() << "Notifications lues depuis le fichier : " << notificationVector;
    return notificationVector;
}
//ISCLAWZED

*/
QVector<QString> fire::getNotificationFromFile()
{
     QString fileName = "C:/Users/MSI/Desktop/integration - Copie/aziz.txt";
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
        qDebug() << "Erreur lors de l'ouverture du fichier de notifications : " << file.errorString();
    }
    qDebug() << "Notifications lues depuis le fichier : " << notificationVector;
    return notificationVector;
}

void fire::on_tableView_notif_clicked(const QModelIndex &index)
{
    // Lorsqu'une notification est cliquée, stockez-la dans la variable notificationSelected
    this->notificationSelected = ui->tableView_notif->currentIndex().sibling(ui->tableView_notif->currentIndex().row(), 0).data().toString();
}

void fire::on_pushButton_notif_clicked()
{
    // Get current date and time
    QDateTime currentDateTime = QDateTime::currentDateTime();
    QString dateTimeString = currentDateTime.toString("yyyy-MM-dd hh:mm:ss");

    // Append date and time to the text file along with the selected notification
    QString fileName = "C:/Users/MSI/Desktop/integration - Copie/aziz.txt";
    QFile file(fileName);
    if (file.open(QIODevice::Append | QIODevice::Text)) {
        QTextStream out(&file);
        out << "Notification sélectionnée : " << this->notificationSelected << " - " << dateTimeString << "\n";
        file.close();
        qDebug() << "Date et heure enregistrées dans le fichier : " << dateTimeString;
    } else {
        qDebug() << "Erreur lors de l'ouverture du fichier de notifications : " << file.errorString();
    }

    // Optionally, you can also perform other actions here based on the selected notification

    // Close the fire window after the action is performed
    this->close();
}

//Fire detect


QVector<QString> fire::getNotificationFromFile_fire()
{
     QString fileName = "C:/Users/MSI/Desktop/integration - Copie/aziz.txt";
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
        qDebug() << "Erreur lors de l'ouverture du fichier de notifications : " << file.errorString();
    }
    qDebug() << "Notifications lues depuis le fichier : " << notificationVector;
    return notificationVector;
}




