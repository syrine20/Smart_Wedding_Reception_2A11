#include "patisserie.h"
#include <qstring.h>
#include <qsqlquery.h>
#include <qsqldatabase.h>
#include <qvariant.h>
#include <qsqlquerymodel.h>
#include <QTableView>

patisserie::patisserie()
{

}

patisserie::patisserie(QString nm, QString id,float ech,long nb,QString adresse,QString mail)
{
this->nom=nm;
this->id=id;
this->echelle_qual=ech;
this->nbprvendus=nb;
this->adr=adresse;
this->email=mail;
}

bool patisserie::ajouter(){
    QSqlQuery query;
    query.prepare("INSERT INTO PATISSERIES(NOMPATISS,IDPATISS,ECHELLE_QUAL,NBPRVENDUS,ADRESSE,EMAIL) values(:nom,:id,:ech,:nb,:adr,:mail)");
    query.bindValue(":nom",nom);
    query.bindValue(":id",id);
    QString e = QString::number(echelle_qual);
    query.bindValue(":ech",e);
    QString n = QString::number(nbprvendus);
    query.bindValue(":nb",n);
    query.bindValue(":adr",adr);
    query.bindValue(":mail",email);
    return query.exec();
}

bool patisserie::supprimer(QString i){
    QSqlQuery query;
    query.prepare("DELETE FROM PATISSERIES WHERE IDPATISS=:id");
    query.bindValue(":id",i);
    return query.exec();
}

QSqlQueryModel * patisserie::afficher(){
QSqlQueryModel * model=new QSqlQueryModel;
model->setQuery("SELECT * FROM PATISSERIES");
model->setHeaderData(0,Qt::Horizontal,"nom");
model->setHeaderData(1,Qt::Horizontal,"id");
model->setHeaderData(2,Qt::Horizontal,"echelle");
model->setHeaderData(3,Qt::Horizontal,"produits_vendus");
model->setHeaderData(4,Qt::Horizontal,"adresse");
model->setHeaderData(5,Qt::Horizontal,"email");
return model;
}

bool patisserie::modifier(QString nomm,QString idd,float echh,QString adrr,QString maill){
QSqlQuery query;
query.prepare("UPDATE PATISSERIES SET NOMPATISS=:nom,ECHELLE_QUAL=:ech,ADRESSE=:adr,NBPRVENDUS=0,EMAIL=:email WHERE IDPATISS=:id");
query.bindValue(":nom",nomm);
QString ech = QString::number(echh);
query.bindValue(":ech",ech);
query.bindValue(":adr",adrr);
query.bindValue(":email",maill);
query.bindValue(":id",idd);
return query.exec();
}

QSqlQueryModel *patisserie::trierA(){
    QSqlQuery * q = new QSqlQuery();
    QSqlQueryModel * model = new QSqlQueryModel();
    q->prepare("SELECT * FROM PATISSERIES order by NOMPATISS ASC");
    q->exec();
    model->setQuery(*q);
    return model;
}

QSqlQueryModel *patisserie::trierB(){
    QSqlQuery * q = new QSqlQuery();
    QSqlQueryModel * model = new QSqlQueryModel();
    q->prepare("SELECT * FROM PATISSERIES order by NOMPATISS DESC");
    q->exec();
    model->setQuery(*q);
    return model;
}


