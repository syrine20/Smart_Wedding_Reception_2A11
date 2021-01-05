#include "connexion.h"

Connexion::Connexion()
{}

bool Connexion::ouvrirConnexion()
{
bool test=false;
    db=QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("Projet_2A11");
    db.setUserName("syrine");//inserer nom de l'utilisateur
    db.setPassword("syrine");//inserer mot de passe de cet utilisateur


if (db.open()) test = true;


return test;

}
void Connexion::fermerConnexion()
{db.close();}


