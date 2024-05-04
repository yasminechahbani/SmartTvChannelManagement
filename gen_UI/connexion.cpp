#include "connexion.h"
#include<QDebug>
Connection::Connection()
{

}

bool Connection::createconnect()
{
    bool test=false;
    QSqlDatabase db= QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("intissar");
    db.setUserName("intissar");
    db.setPassword("intissar");
    if (db.open())
        test=true;
    return test;
}
void Connection::closeconnection()
{db.close();}

