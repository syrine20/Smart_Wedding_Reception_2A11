#include "pack.h"
#include <QMessageBox>
#include "QSqlQueryModel"
#include "mainwindow.h"



pack::pack()
{

}
 pack::pack(int iP,int prix_i ,QString c,QString l)
 {
     id_pack= iP;
     prix_initial= prix_i;
     categorie= c;
     liste= l;

 }

 bool pack::ajouter()
 {
   QSqlQuery query;
   query.prepare("INSERT INTO pack (id_pack,prix_initial,categorie,liste) VALUES(:id_pack,:prix_initial,:categorie,:liste)  ");
   QString r= QString::number(id_pack);
   QString f= QString::number(prix_initial);
   query.bindValue(":id_pack",id_pack);
   query.bindValue(":prix_initial",prix_initial);
   query.bindValue(":categorie",categorie);
   query.bindValue(":liste",liste);
   return query.exec();
 }



 QSqlQueryModel * pack::afficher()
 {QSqlQueryModel * model= new QSqlQueryModel();
 model->setQuery("select * from pack");
 model->setHeaderData(0, Qt::Horizontal, QObject::tr("id_pack"));
 model->setHeaderData(3, Qt::Horizontal, QObject::tr("prix_initial"));
 model->setHeaderData(1, Qt::Horizontal, QObject::tr("categorie"));
 model->setHeaderData(2, Qt::Horizontal, QObject::tr("liste"));

     return model;
 }



 bool pack::supprimer(QString id_pack){

     QSqlQuery query;
     query.prepare("delete from pack where id_pack = :id_pack");
     query.bindValue(":id_pack",id_pack);
     return query.exec();
 }


 bool pack::modifier(int id_pack){
     QSqlQuery query;
     query.prepare("update pack set  prix_initial= : prix_initial ,categorie= :categorie ,liste= :liste  where id_pack = :id_pack");
     query.bindValue(":id_pack",id_pack);
     query.bindValue(":prix_initial",prix_initial);
     query.bindValue(":categorie",categorie);
     query.bindValue(":liste",liste);
     return query.exec();
 }


 void pack::recherche(Ui::Dialog *ui)
 {
         QSqlQuery q;
         QSqlQueryModel *modal=new QSqlQueryModel();
         QString mot =ui->lineEdit_rechercher_packs_consulter->text();
         q.prepare("select * from pack where (id_pack LIKE '%"+mot+"%' or prix_initial LIKE '%"+mot+"%' or categorie LIKE '%"+mot+"%' or liste LIKE '%"+mot+"%')");

         q.exec() ;
         modal->setQuery(q);
         ui->tableView_packs_consulter->setModel(modal);
 }



 void pack::TRI_ID(Ui::Dialog *ui)
 {
        QSqlQuery q;
        QSqlQueryModel *model=new QSqlQueryModel();
        q.prepare("select * from pack order by id_pack");
        q.exec();
        model->setQuery(q);
        ui->tableView_packs_consulter->setModel(model);
 }


 QSqlQueryModel *pack::tri_IDinv()
 {

            QSqlQuery * q = new  QSqlQuery ();
                   QSqlQueryModel * model = new  QSqlQueryModel ();
                   q->prepare("SELECT * FROM pack order by id_pack DESC");
                   q->exec();
                   model->setQuery(*q);
                   return model;
 }






 void pack::TRI_Categorie(Ui::Dialog *ui)
 {
        QSqlQuery q;
        QSqlQueryModel *model=new QSqlQueryModel();
        q.prepare("select * from pack order by categorie");
        q.exec();
        model->setQuery(q);
        ui->tableView_packs_consulter->setModel(model);
 }


 QSqlQueryModel *pack::tri_Categorieinv()
 {

            QSqlQuery * q = new  QSqlQuery ();
                   QSqlQueryModel * model = new  QSqlQueryModel ();
                   q->prepare("SELECT * FROM pack order by categorie DESC");
                   q->exec();
                   model->setQuery(*q);
                   return model;
 }





 void pack::TRI_Prix(Ui::Dialog *ui)
 {
     QSqlQuery q;
     QSqlQueryModel *model=new QSqlQueryModel();
     q.prepare("select * from pack order by prix_initial");
     q.exec();
     model->setQuery(q);
     ui->tableView_packs_consulter->setModel(model);
 }


 QSqlQueryModel *pack::tri_prixinv()
 {
     QSqlQuery * q = new  QSqlQuery ();
            QSqlQueryModel * model = new  QSqlQueryModel ();
            q->prepare("SELECT * FROM pack order by prix_initial DESC");
            q->exec();
            model->setQuery(*q);
            return model;
 }

