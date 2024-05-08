#ifndef CHATSERVER_H
#define CHATSERVER_H

#include <QTcpServer>

class ChatServer : public QTcpServer
{
    Q_OBJECT

public:
    explicit ChatServer(QObject *parent = nullptr);
    ~ChatServer();

protected:
    void incomingConnection(qintptr socketDescriptor) override;

signals:
    void newConnection(qintptr socketDescriptor);
};

#endif // CHATSERVER_H
