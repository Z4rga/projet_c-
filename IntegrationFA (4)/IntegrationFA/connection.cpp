#include "connection.h"

Connection::Connection()
{

}

bool Connection::createconnect()
{
    bool test=false;
QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("test-bd");
db.setUserName("system");//inserer nom de l'utilisateur
db.setPassword("azerty");//inserer mot de passe de cet u


if (db.open())
test=true;


    return  test;
}
//void Connection::closeConnection() {db.close();}
