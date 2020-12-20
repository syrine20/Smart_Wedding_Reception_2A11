#include "tache.h"

Tache::Tache()
{

}

Tache::Tache(QString N,QString E,QString D,int I)
{
    NomT=N;
    EtatT=E;
    DateLimiteT=D;
    IDP=I;

}

bool Tache::ajouter()
{
    QSqlQuery query;
    query.prepare("INSERT INTO Tache(NomT,EtatT,DateLimiteT,IDP) VALUES (:NomT,:EtatT,:DateLimiteT,:IDP)");
    QString I=QString::number(IDP);
    query.bindValue(":NomT",NomT);
    query.bindValue(":EtatT",EtatT);
    query.bindValue(":DateLimiteT",DateLimiteT);
    query.bindValue(":IDP",I);
    return query.exec();

}

bool Tache::supprimer(QString n)
{
    QSqlQuery query;
    query.prepare("Delete from Tache where NomT=:NomT ");
    query.bindValue(":NomT",n);
    return query.exec();
}

QSqlQueryModel * Tache::afficher()
{
    QSqlQueryModel * modal=new QSqlQueryModel();
    modal->setQuery("SELECT * FROM TACHE ");

    modal->setHeaderData(0,Qt::Horizontal,"NomT");
    modal->setHeaderData(1,Qt::Horizontal,"EtatT");
    modal->setHeaderData(2,Qt::Horizontal,"DateLimiteT");
    modal->setHeaderData(3,Qt::Horizontal,"IDP");
    return modal;
}

bool Tache::modifier(QString n)
{

    QSqlQuery query;
    query.prepare("UPDATE TACHE SET EtatT= :EtatT ,DateLimiteT= :DateLimiteT,IDP= :IDP  WHERE NomT= :NomT");
     QString I=QString::number(IDP);
    query.bindValue(":NomT",n);
    query.bindValue(":EtatT",EtatT);
    query.bindValue(":DateLimiteT",DateLimiteT);
    query.bindValue(":IDP",I);

    return query.exec();
}
