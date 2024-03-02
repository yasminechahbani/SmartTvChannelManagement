#include "connexion.h"
#include<QDebug>
Connection::Connection()
{

}

bool Connection::createconnect()
{
    bool test=false;
    QSqlDatabase db= QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("XTV");
    db.setUserName("Koala");
    db.setPassword("1234");
    if (db.open())
        test=true;
    return test;
}
void Connection::closeconnection()
{db.close();}

