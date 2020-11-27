#include "promotion.h"

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


bool promotion::supprimer(int i)
{
    QSqlQuery query;
    query.prepare(" Delete from promotion where id=:id  ");
    QString r= QString::number(i);
    query.bindValue(":id",r);
    return query.exec();
}
