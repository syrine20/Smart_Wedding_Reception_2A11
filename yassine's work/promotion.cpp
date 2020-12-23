#include "promotion.h"
#include <QSqlQuery>
#include <QString>
#include "QSqlQueryModel"
#include "QMessageBox"

promotion::promotion()
{

}

promotion::promotion(int i,QString n,int p)
{
    id= i;
    nom= n;
    pourcentage= p;
}

bool promotion::ajouter()
{
  QSqlQuery query;
  query.prepare("INSERT INTO promotion (id,nom,pourcentage) VALUES(:id,:nom,:pourcentage)  ");
  QString r= QString::number(id);
  QString f= QString::number(pourcentage);
  query.bindValue(":id",id);
  query.bindValue(":nom",nom);
  query.bindValue(":pourcentage",pourcentage);
  return query.exec();
}

QSqlQueryModel * promotion::afficher()
{QSqlQueryModel * model= new QSqlQueryModel();
model->setQuery("select * from promotion");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("pourcentage"));

    return model;
}


bool promotion::supprimer(QString id){

    QSqlQuery query;
    query.prepare("delete from promotion where id = :id");
    query.bindValue(":id",id);
    return query.exec();

}

bool promotion::modifier(int id){
    QSqlQuery query;
    query.prepare("update promotion set  nom= :nom ,pourcentage= :pourcentage  where id = :id");
    query.bindValue(":id",id);
    query.bindValue(":nom",nom);
    query.bindValue(":pourcentage",pourcentage);
    return query.exec();
}



bool promotion::verif_id(QString ch_id){
   bool test=true;
   int i;
   if(ch_id.length()!=6){
      test=false;
      return  test;
   }else{
       for(i=0;i<ch_id.length();i++){
           if(!((ch_id[i]>='0')&&(ch_id[i]<='9'))){
               test=false;
               return  test;
       }
       }
   }
return test;}

