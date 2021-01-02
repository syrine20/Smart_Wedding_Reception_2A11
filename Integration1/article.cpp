#include "article.h"
#include <qsqlquerymodel.h>
#include <qsqlquery.h>
article::article()
{

}

article::article(QString nomart,QString idart,QString type,int qte,int pu)
{
this->idart=idart;
this->nomart=nomart;
this->pu=pu;
this->qte=qte;
this->type=type;
}
bool article::ajouter(){
    QSqlQuery query;
    query.prepare("INSERT INTO ARTICLES(IDART,NOMART,QTE,PU,TYPE) values(:id,:nm,:qte,:pu,:tp)");
    query.bindValue(":id",idart);
    query.bindValue(":nm",nomart);
     query.bindValue(":tp",type);
     query.bindValue(":art",idart);
     QString qte1=QString::number(this->qte);
     QString pu1=QString::number(this->pu);
     query.bindValue(":qte",qte1);
     query.bindValue(":pu",pu1);
    return query.exec();
}

bool article::supprimer(QString i){
    QSqlQuery query;
    query.prepare("DELETE FROM ARTICLES WHERE IDART=:id");
    query.bindValue(":id",i);
    return query.exec();
}

QSqlQueryModel * article::afficher(){
QSqlQueryModel * model=new QSqlQueryModel;
model->setQuery("SELECT * FROM ARTICLES");
model->setHeaderData(0,Qt::Horizontal,"Id Article");
model->setHeaderData(1,Qt::Horizontal,"Nom Article");
model->setHeaderData(2,Qt::Horizontal,"Quantité");
model->setHeaderData(3,Qt::Horizontal,"Prix unitaire");
model->setHeaderData(4,Qt::Horizontal,"Type");
return model;
}

bool article::modifier(QString idart,QString nomart,QString type,int qte,int pu){
QSqlQuery query;
query.prepare("UPDATE COMMANDES SET IDART=:id,NOMART=:nm,QTE=:qte,PU=:pu,TYPE=:tp WHERE IDART=:id");
query.bindValue(":id",idart);
query.bindValue(":nm",nomart);
query.bindValue(":tp",type);
QString qte1=QString::number(qte);
QString prx=QString::number(pu);
query.bindValue(":qte",qte1);
query.bindValue(":pu",prx);
return query.exec();
}

