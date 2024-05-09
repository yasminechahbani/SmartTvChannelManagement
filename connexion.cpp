#include "connexion.h"
#include<QDebug>
Connection::Connection()
{

}

bool Connection::createconnect()
{
    bool test=false;
    QSqlDatabase db= QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("test");
     db.setUserName("mimo");
     db.setPassword("mdp");
    if (db.open())
        test=true;
    return test;
}
void Connection::closeconnection()
{db.close();}

