#include "connection.h"

Connection::Connection()
{

}

bool Connection::createconnect()
{bool test=false;
QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("marketing");
db.setUserName("yassine");
db.setPassword("yassou98");

if (db.open())
test=true;





    return  test;
}
