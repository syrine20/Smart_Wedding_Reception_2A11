#include "traiteur.h"

traiteur::traiteur()
{

}

traiteur::traiteur(QString nm,QString i,QString mail,int com){
    this->nom=nm;
    this->id=i;
    this->email=mail;
    this->comission=com;
}

bool traiteur::ajouter(){
    QSqlQuery query;
    query.prepare("INSERT INTO TRAITEURS(NOM,ID,EMAIL,COMISSION) values(:nom,:id,:mail,:com)");
    query.bindValue(":nom",nom);
    query.bindValue(":id",id);
    query.bindValue(":mail",email);
    QString com = QString::number(comission);
    query.bindValue(":com",com);
    return query.exec();
}

bool traiteur::supprimer(QString i){
    QSqlQuery query;
    query.prepare("DELETE FROM TRAITEURS WHERE ID=:id");
    query.bindValue(":id",i);
    return query.exec();
}

QSqlQueryModel * traiteur::afficher(){
QSqlQueryModel * model=new QSqlQueryModel;
model->setQuery("SELECT * FROM TRAITEURS");
model->setHeaderData(0,Qt::Horizontal,"nom");
model->setHeaderData(1,Qt::Horizontal,"id");
model->setHeaderData(2,Qt::Horizontal,"email");
model->setHeaderData(3,Qt::Horizontal,"comission");
return model;
}

QSqlQueryModel * traiteur::affich_dyn(QString search)
{
    //QString search=ui->lineEdit_4->text();
    QSqlQuery quer;
    quer.prepare("select * from Traiteurs where NOM=:id or ID=:id or EMAIL=:id");
    quer.bindValue(":id",search);
    QSqlQueryModel * model=new QSqlQueryModel;
    model->setQuery(quer);
    model->setHeaderData(0,Qt::Horizontal,"nom");
    model->setHeaderData(1,Qt::Horizontal,"id");
    model->setHeaderData(2,Qt::Horizontal,"email");
    model->setHeaderData(3,Qt::Horizontal,"comission");
    return model;
    //tempTrait.afficher();
}

QSqlQueryModel *traiteur::trierA(){
    QSqlQuery * q = new QSqlQuery();
    QSqlQueryModel * model = new QSqlQueryModel();
    q->prepare("SELECT * FROM TRAITEURS order by NOM ASC");
    q->exec();
    model->setQuery(*q);
    return model;
}

QSqlQueryModel *traiteur::trierB(){
    QSqlQuery * q = new QSqlQuery();
    QSqlQueryModel * model = new QSqlQueryModel();
    q->prepare("SELECT * FROM TRAITEURS order by NOM DESC");
    q->exec();
    model->setQuery(*q);
    return model;
}

bool traiteur::modifier(){
QSqlQuery query;
query.prepare("UPDATE TRAITEURS SET NOM=:nom,ID=:id,EMAIL=:mail,COMISSION=:com WHERE ID=:id");
query.bindValue(":nom",this->nom);
query.bindValue(":id",this->id);
query.bindValue(":mail",this->email);
QString com=QString::number(this->comission);
query.bindValue(":com",com);
return query.exec();
}
