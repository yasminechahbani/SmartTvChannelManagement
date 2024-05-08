#include "chatserver.h"

ChatServer::ChatServer(QObject *parent) :
    QTcpServer(parent)
{
    if (!listen(QHostAddress::Any, 12345)) {
            qDebug() << "Unable to start the server:" << errorString();
        } else {
            qDebug() << "Server started, listening on port 12345";
        }}

ChatServer::~ChatServer()
{
    close();
}

void ChatServer::incomingConnection(qintptr socketDescriptor)
{
    // Gestion de la nouvelle connexion
    emit newConnection(socketDescriptor);
}
