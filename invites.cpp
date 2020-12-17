#include "invites.h"
#include <QFile>
#include <QFileDialog>
#include <QPrintDialog>
#include <QPrinter>
#include <QSystemTrayIcon>

invites::invites()
{
    nom="";
    prenom="";
    Id_invitation=0;
}

invites::invites(int Id_invitation,QString prenom,QString nom)
{
    this->Id_invitation=Id_invitation;
    this->prenom=prenom;
    this->nom=nom;
}

QString invites::get_prenom(){return prenom;}
QString invites::get_nom(){return  nom;}
int invites::get_Id_invitation(){return  Id_invitation;}

bool invites::ajouter()
{
QSqlQuery query;
QString res2= QString::number(Id_invitation);

query.prepare("INSERT INTO INVITES (IDINVI,NOM,PRENOM) "
                    "VALUES (:Id_invitation,:nom,:prenom)");
query.bindValue(":prenom", prenom);
query.bindValue(":nom", nom);
query.bindValue(":Id_invitation", res2);


return    query.exec();
}

QSqlQueryModel * invites::afficher()
{
QSqlQueryModel * model= new QSqlQueryModel();
model->setQuery("select * from INVITES");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("Id_invitation"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom "));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("prenom"));
return model;
}

bool invites::supprimer(int Id_invitationn)
{
QSqlQuery query;
QString res2= QString::number(Id_invitationn);
query.prepare("Delete from INVITES where IDINVI = :Id_invitation ");
query.bindValue(":Id_invitation",res2);
return    query.exec();
}

bool invites::modifier(int Id_invitation)
{
    QSqlQuery query;
    QString res= QString::number(Id_invitation);
    query.prepare("update  INVITES set IDINVI=:Id_invitation,NOM=:nom,PRENOM=:prenom " "where IDINVI = :Id_invitation");
    query.bindValue(":Id_invitation", res);
    query.bindValue(":nom", nom);
    query.bindValue(":prenom", prenom);
    return    query.exec();
}

QSqlQueryModel * invites::recherche(const QString &rech)
{
QSqlQueryModel * model= new QSqlQueryModel();
model->setQuery("select * from INVITES where (IDINVI LIKE '"+rech+"%' OR NOM LIKE '"+rech+"%' OR PRENOM LIKE '"+rech+"%') ");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("Id_invitation"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom "));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("prenom"));

return model;
}

QSqlQueryModel * invites::tri_inviDesc(QString typetri)
{
    QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from INVITES order by "+typetri+" desc"  );
model->setHeaderData(0, Qt::Horizontal, QObject::tr("Id_invitation"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom "));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("prenom"));
return model;
}

QSqlQueryModel * invites::tri_inviAsc(QString typetri)
{
    QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from INVITES order by "+typetri+" asc"  );
model->setHeaderData(0, Qt::Horizontal, QObject::tr("Id_invitation"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom "));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("prenom"));
return model;
}


