#include "commande.h"
#include <qsqlquery.h>
#include <qsqlquerymodel.h>
commande::commande()
{

}

commande::commande(QString id,QString desc,QString trait,QString art,int qte,int prix)
{
idcmd=id;
description=desc;
this->idart=art;
this->idtrait=trait;
this->prixtot=prix;
this->qte=qte;
}

bool commande::ajouter(){
    QSqlQuery query;
    query.prepare("INSERT INTO COMMANDES(IDCMD,DESCRIPTION,IDTRAIT,IDART,QTE,PRIXTOT) values(:id,:d,:trait,:art,:qte,:prx)");
    query.bindValue(":id",idcmd);
    query.bindValue(":d",description);
     query.bindValue(":trait",idtrait);
     query.bindValue(":art",idart);
     QString qte1=QString::number(this->qte);
     QString prx=QString::number(this->prixtot);
     query.bindValue(":qte",qte1);
     query.bindValue(":prx",prx);
    return query.exec();
}

bool commande::supprimer(QString i){
    QSqlQuery query;
    query.prepare("DELETE FROM COMMANDES WHERE IDCMD=:id");
    query.bindValue(":id",i);
    return query.exec();
}

QSqlQueryModel * commande::afficher(){
QSqlQueryModel * model=new QSqlQueryModel;
model->setQuery("SELECT * FROM COMMANDES");
model->setHeaderData(0,Qt::Horizontal,"Id Cmd");
model->setHeaderData(1,Qt::Horizontal,"Description");
model->setHeaderData(2,Qt::Horizontal,"Id Trait");
model->setHeaderData(3,Qt::Horizontal,"Id Art");
model->setHeaderData(4,Qt::Horizontal,"quantité");
model->setHeaderData(5,Qt::Horizontal,"prix totale");
return model;
}

bool commande::modifier(QString id,QString d){
QSqlQuery query;
query.prepare("UPDATE COMMANDES SET IDCMD=:id,DESCRIPTION=:d,IDTRAIT=:trait,IDART=:art,QTE=:qte,PRIXTOT=:prx WHERE IDCMD=:id");
query.bindValue(":id",id);
query.bindValue(":d",d);
query.bindValue(":trait",idtrait);
query.bindValue(":art",idart);
QString qte1=QString::number(this->qte);
QString prx=QString::number(this->prixtot);
query.bindValue(":qte",qte1);
query.bindValue(":prx",prx);
return query.exec();
}
