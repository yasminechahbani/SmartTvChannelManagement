#include "connexion.h"

Connection::Connection(){

}


bool Connection::createconnection()
{
    db = QSqlDatabase::addDatabase("QODBC");
    bool test=false;
    //QSqlDatabase db= QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("ProjectProjet");
    db.setUserName("amoun");
    db.setPassword("1234");
    if (db.open())
        test=true;
    return test;
}
void Connection::closeConnection(){db.close();}
