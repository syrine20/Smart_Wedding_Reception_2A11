#include "salle.h"
#include <QString>

salle::salle()
{

}
salle::salle(QString l,int i,int c,int p)
{
   lieu=l;
    id=i;
    capacite=c;
    prix=p;
}
bool salle::ajouter()
{
    QSqlQuery query;
    QString r = QString::number(id);
    //prepare() prend la requete en parametre pour la preparation de lexuction
    query.prepare("INSERT INTO salle (lieu, id, capacite,prix) VALUES (:lieu,:id,:capacite,:prix)");
    //creation des variables liees
    query.bindValue(":id",r);
    query.bindValue(":lieu",lieu);
    query.bindValue(":capacite",capacite);
    query.bindValue(":prix",prix);
    return query.exec();
}
bool salle::supprimer(int id)
{
    QSqlQuery query;
     query.prepare("DELETE FROM salle where id=:id");
    QString r =QString::number(id);
    query.bindValue(":id",r);
    return query.exec();
}
QSqlQueryModel * salle::afficher()
{
    QSqlQueryModel * model=new QSqlQueryModel();
    model->setQuery("select * from salle");
    model->setHeaderData(0,Qt::Horizontal,"ID");
        model->setHeaderData(1,Qt::Horizontal,"lieu");
            model->setHeaderData(2,Qt::Horizontal,"capacite");
                model->setHeaderData(3,Qt::Horizontal,"prix");
                return model;
}
bool salle::modifier(int id,QString lieu,QString capacite,QString prix)
{
    QSqlQuery query;
    query.prepare(" UPDATE salle set ID=:id ,LIEU=:lieu ,CAPACITE=:capacite ,PRIX=:prix where ID=:id");
    QString r =QString::number(id);
    query.bindValue(":id",r);
    query.bindValue(":lieu",lieu);
    query.bindValue(":capacite",capacite);
    query.bindValue(":prix",prix);
    return query.exec();
}
QSqlQueryModel * salle::afficher_tri_prix()
{
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("select * from salle order by prix");
model->setHeaderData(0,Qt::Horizontal,"ID");
model->setHeaderData(1,Qt::Horizontal,"lieu");
    model->setHeaderData(2,Qt::Horizontal,"capacite");
        model->setHeaderData(3,Qt::Horizontal,"prix");
        return model;
}
QSqlQueryModel * salle::afficher_tri_capacite()
{
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("select * from salle order by capacite");
model->setHeaderData(0,Qt::Horizontal,"ID");
model->setHeaderData(1,Qt::Horizontal,"lieu");
    model->setHeaderData(2,Qt::Horizontal,"capacite");
        model->setHeaderData(3,Qt::Horizontal,"prix");
        return model;
}
QSqlQueryModel * salle::afficher_tri_lieu()
{
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("select * from salle order by lieu");
model->setHeaderData(0,Qt::Horizontal,"ID");
model->setHeaderData(1,Qt::Horizontal,"lieu");
    model->setHeaderData(2,Qt::Horizontal,"capacite");
        model->setHeaderData(3,Qt::Horizontal,"prix");
        return model;
}
QSqlQueryModel * salle::afficher_tri_id()
{
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("select * from salle order by id");
model->setHeaderData(0,Qt::Horizontal,"ID");
model->setHeaderData(1,Qt::Horizontal,"lieu");
    model->setHeaderData(2,Qt::Horizontal,"capacite");
        model->setHeaderData(3,Qt::Horizontal,"prix");
        return model;
}
