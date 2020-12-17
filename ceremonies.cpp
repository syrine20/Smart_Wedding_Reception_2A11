#include "ceremonies.h"
#include <QDateEdit>

ceremonies::ceremonies()
{
    Id_emplacement=0;
    code_mariage=0;
    Nb_invites=0;
    Budget=0;
    type="";
    //Date="";
}

ceremonies::ceremonies(int Id_emplacement,int code_mariage,int Nb_invites,float Budget,QString type)
{
    this->Id_emplacement=Id_emplacement;
    this->code_mariage=code_mariage;
    this->Nb_invites=Nb_invites;
    //this->Date=Date;
    this->Budget=Budget;
    this->type=type;
}


int ceremonies::get_Id_emplacement(){return  Id_emplacement;}
int ceremonies::get_Code_mariage(){return  code_mariage;}
int ceremonies::get_Nb_invites(){return  Nb_invites;}
//QString ceremonies::get_Date(){return  Date;}
float ceremonies::get_Budget(){return Budget;}
QString ceremonies::get_type(){return  type;}


bool ceremonies::ajouter()
{
QSqlQuery query;
QString res2= QString::number(Id_emplacement);
QString res3=QString::number(code_mariage);
QString res4= QString::number(Nb_invites);
QString res5=QString::number(Budget);
QString type;

QString Budget_string=res5;
  if  (Budget_string.length() ==3)
               type = "faible";
             if (Budget_string.length() == 4)
               type = "moyen";
             if (Budget_string.length() == 5)
               type = "haut";
query.prepare("INSERT INTO MARIAGE (CODEMARIAGE,IDEMPLACEMENT,NBINVITES,BUDGET,TYPE) "
                    "VALUES (:code_mariage,:Id_emplacement,:Nb_invites,:Budget,:type)");
query.bindValue(":Id_emplacement", res2);
query.bindValue(":code_mariage", res3);
query.bindValue(":Nb_invites", res4);
//query.bindValue("Date:", Date);
query.bindValue(":Budget", res5);
query.bindValue(":type", type);



return    query.exec();
}

QSqlQueryModel * ceremonies::afficher()
{
QSqlQueryModel * model= new QSqlQueryModel();
model->setQuery("select * from MARIAGE");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("code_mariage"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("Id_emplacement "));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("Nb_invites"));
//model->setHeaderData(3, Qt::Horizontal, QObject::tr("Date "));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("Budget"));
model->setHeaderData(4, Qt::Horizontal, QObject::tr("type"));
return model;
}

bool ceremonies::supprimer(int code_mariage)
{
QSqlQuery query;
QString res2= QString::number(code_mariage);
query.prepare("Delete from MARIAGE where CODEMARIAGE = :code_mariage");
query.bindValue(":code_mariage",res2);
return    query.exec();
}

bool ceremonies::modifier(int code_mariage)
{
    QSqlQuery query;

    QString res2= QString::number(Id_emplacement),res3=QString::number(code_mariage),res4= QString::number(Nb_invites);
    QString res5=QString::number(Budget);
    query.prepare("update  MARIAGE set CODEMARIAGE=:code_mariage,IDEMPLACEMENT=:Id_emplacement,NBINVITES=:Nb_invites,BUDGET=:Budget " "where CODEMARIAGE=:code_mariage");
    query.bindValue(":Id_emplacement", res2);
    query.bindValue(":code_mariage", res3);
    query.bindValue(":Nb_invites", res4);
    //query.bindValue("Date:", Date);
    query.bindValue(":Budget", res5);
    return    query.exec();
}

QSqlQueryModel * ceremonies::recherche(const QString &rech)
{
QSqlQueryModel * model= new QSqlQueryModel();
model->setQuery("select * from MARIAGE where (CODEMARIAGE LIKE '"+rech+"%' OR IDEMPLACEMENT LIKE '"+rech+"%' OR NBINVITES LIKE '"+rech+"%' OR BUDGET LIKE '"+rech+"%') ");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("code_mariage"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("Id_emplacement "));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("Nb_invites"));
//model->setHeaderData(3, Qt::Horizontal, QObject::tr("Date "));
model->setHeaderData(4, Qt::Horizontal, QObject::tr("Budget"));

return model;
}

QSqlQueryModel * ceremonies::tri_ceremDesc(QString typetri)
{
    QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from MARIAGE order by "+typetri+" desc"  );
model->setHeaderData(0, Qt::Horizontal, QObject::tr("code_mariage"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("Id_emplacement "));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("Nb_invites"));
//model->setHeaderData(3, Qt::Horizontal, QObject::tr("Date "));
model->setHeaderData(4, Qt::Horizontal, QObject::tr("Budget"));
return model;
}
QSqlQueryModel * ceremonies::tri_ceremAsc(QString typetri)
{
    QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from MARIAGE order by "+typetri+" asc"  );
model->setHeaderData(0, Qt::Horizontal, QObject::tr("code_mariage"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("Id_emplacement "));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("Nb_invites"));
//model->setHeaderData(3, Qt::Horizontal, QObject::tr("Date "));
model->setHeaderData(4, Qt::Horizontal, QObject::tr("Budget"));
return model;
}




int ceremonies::calculer(QString type) {
      QSqlQuery query;
      query.prepare("select * from MARIAGE where TYPE = :type");
      query.bindValue(":type", type);

      query.exec();
      int total = 0;
      while (query.next()) {
        total++;
      }

      return total;
    }
