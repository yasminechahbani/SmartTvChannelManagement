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
#include "chat.h"
#include "ui_chat.h"
#include <QStackedWidget>

#include <QDebug>
#include <QHostAddress>
#include <QStandardItemModel>
#include <QFile>

chat::chat(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::chat)
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
    prepareTableViewNotification(); // Appel de la fonction après l'affichage de la fenêtre
}

void chat::prepareTableViewNotification()
{
    QVector<QString> vectorNotification = getNotificationFromFile();

    QStandardItemModel *model = new QStandardItemModel(vectorNotification.size(), 1, this);
    model->setHorizontalHeaderItem(0, new QStandardItem(QString("Notification")));
    for (int i = 0; i < vectorNotification.size(); i++) {
        QStandardItem *Row = new QStandardItem(vectorNotification[i]);
        model->setItem(i, Row);
    }
    ui->tableView_notif->setModel(model);
}

QVector<QString> chat::getNotificationFromFile()
{
    //QString fileName = "notification.txt";
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
        qDebug() << "Erreur lors de l'ouverture du fichier de notifications : " << file.errorString();
    }
    qDebug() << "Notifications lues depuis le fichier : " << notificationVector;
    return notificationVector;
}

void chat::on_tableView_notif_clicked(const QModelIndex &index)
{
    // Lorsqu'une notification est cliquée, stockez-la dans la variable notificationSelected
    this->notificationSelected = ui->tableView_notif->currentIndex().sibling(ui->tableView_notif->currentIndex().row(), 0).data().toString();
}

void chat::on_pushButton_notif_clicked()
{
    // Si une notification est sélectionnée, effectuez une action (par exemple, marquer comme lue ou supprimer)
    if (!this->notificationSelected.isEmpty()) {
        qDebug() << "Notification sélectionnée : " << this->notificationSelected;
        // Implémentez ici votre action à effectuer sur la notification sélectionnée

        // Fermer la fenêtre actuelle (chat) pour revenir à la fenêtre principale (mainwindow)
         //returnToPreviousView();
    } else {
        qDebug() << "Veuillez sélectionner une notification";
    }
}






/*void chat::connectToServer()
{
    m_socket->connectToHost(QHostAddress::LocalHost, 12345); // Connect to localhost on port 12345
    if (!m_socket->waitForConnected()) {
        qDebug() << "Error: " << m_socket->errorString();
    }
}

void chat::sendData(const QString &message)
{
    if (m_socket->state() == QAbstractSocket::ConnectedState) {
        QByteArray data;
        QDataStream out(&data, QIODevice::WriteOnly);
        out << message;
        m_socket->write(data);
    } else {
        qDebug() << "Not connected to server.";
    }
}


void chat::readMessage()
{
    QByteArray data = m_socket->readAll();
    ui->textEdit->append(QString(data));
}
*/
