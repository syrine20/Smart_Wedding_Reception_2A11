#include "connexion.h"

Connexion::Connexion()
{

}

bool Connexion::ouvrirConnexion()
{
    db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("Projet_2A11");
    db.setUserName("syrine");
    db.setPassword("syrine");
    if(db.open())
        return true;
    return false;
}

void Connexion::fermerConnexion()
{
    db.close();
}
