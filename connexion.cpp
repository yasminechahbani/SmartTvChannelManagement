#include "connexion.h"

Connection::Connection()
{

}

bool Connection::createconnect()
{
    bool test=false;
    QSqlDatabase db= QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("Source_Projet2A");
    db.setUserName("yassmine");
    db.setPassword("fuck");
    if (db.open())
        test=true;
    return test;
}
