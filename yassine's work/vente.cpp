#include "vente.h"
#include <QSqlQuery>
#include <QString>
#include "QSqlQueryModel"
#include "QMessageBox"


vente::vente()
{

}

vente::vente(int id_v,int prix_v)
{
    id_vente= id_v;
    prix_final_v= prix_v;
}

bool vente::ajouter()
{
  QSqlQuery query;
  query.prepare("INSERT INTO vente (id_vente,prix_final_v) VALUES(:id_vente,:prix_final_v)  ");
  QString r= QString::number(id_vente);
  QString f= QString::number(prix_final_v);
  query.bindValue(":id_vente",id_vente);
  query.bindValue(":prix_final_v",prix_final_v);
  return query.exec();
}

QSqlQueryModel * vente::afficher()
{QSqlQueryModel * model= new QSqlQueryModel();
model->setQuery("select * from vente");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("id_vente"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("prix_final_v"));

    return model;
}



