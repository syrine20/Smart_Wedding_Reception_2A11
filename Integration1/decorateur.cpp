#include "decorateur.h"

decorateur::decorateur()
{

}
decorateur::decorateur(int i,QString n,QString st,int nt,QString e,QString l)
{
   id=i;
   nom=n;
    style=st;
    num_telephone=nt;
    email=e;
    lieu=l;
}
bool decorateur::ajouter()
{
    QSqlQuery query;
    QString r = QString::number(id);
    //prepare() prend la requete en parametre pour la preparation de lexuction
    query.prepare("INSERT INTO decorateur (nom_decorateur, style_decorateur, id_decorateur, num_telephone_decorateur, email_decorateur, lieu_decorateur) VALUES (:nom_,:style,:id,:num_telephone,:email,:lieu)");
    //creation des variables liees
    query.bindValue(":id",r);
    query.bindValue(":nom",nom);
    query.bindValue(":style",style);
    query.bindValue(":num_telephone",num_telephone);
    query.bindValue(":email",email);
    query.bindValue(":lieu",lieu);
    return query.exec();
}
bool decorateur::supprimer(int id)
{
    QSqlQuery query;
     query.prepare("DELETE FROM decorateur where id_decorateur=:id");
    QString r =QString::number(id);
    query.bindValue(":id",r);
    return query.exec();
}
QSqlQueryModel * decorateur::afficher()
{
    QSqlQueryModel * model=new QSqlQueryModel();
    model->setQuery("select * from decorateur");
    model->setHeaderData(0,Qt::Horizontal,"ID");
        model->setHeaderData(1,Qt::Horizontal,"nom");
            model->setHeaderData(2,Qt::Horizontal,"style");
             model->setHeaderData(3,Qt::Horizontal,"num_telephone");
              model->setHeaderData(4,Qt::Horizontal,"email");
               model->setHeaderData(5,Qt::Horizontal,"lieu");
                return model;
}

bool decorateur::modifier(int id,QString nom,QString style,int num_telephone,QString email,QString lieu)
{
    QSqlQuery query;
    query.prepare(" UPDATE decorateur set ID_DECORATEUR=:id ,NOM_DECORATEUR=:nom ,STYLE_DECORATEUR=:style ,email_decorateur=:email ,num_telephone_decorateur=:num_telephone ,lieu_decorateur=:lieu where ID_DECORATEUR=:id");
    QString r =QString::number(id);
    query.bindValue(":id",r);
    query.bindValue(":nom",nom);
    query.bindValue(":style",style);
    query.bindValue(":num_telephone",num_telephone);
    query.bindValue(":email",email);
    query.bindValue(":lieu",lieu);
    return query.exec();
}
