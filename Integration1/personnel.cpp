#include "personnel.h"

Personnel::Personnel()
{

}

Personnel::Personnel( int C,QString N,QString P,QString D,QString M,int T,int NbM)
{

    CIN=C;
    NomPerso=N;
    PrenomPerso=P;
    DateNaissP=D;
    Mail=M;
    TelPerso=T;
    NbMarOrg=NbM;
}

bool Personnel::ajouter()
{
   QSqlQuery query;
   query.prepare("INSERT INTO Personnel(CIN,NomPerso,PrenomPerso,DateNaissP,Mail,TelPerso,NbMarOrg) VALUES (:CIN,:NomPerso,:PrenomPerso,:DateNaissP,:Mail,:TelPerso,:NbMarOrg)");
   QString C=QString::number(CIN);
   QString T=QString::number(TelPerso);
   QString Nb=QString::number(NbMarOrg);


   query.bindValue(":CIN",C);
   query.bindValue(":NomPerso",NomPerso);
   query.bindValue(":PrenomPerso",PrenomPerso);
   query.bindValue(":DateNaissP",DateNaissP);
   query.bindValue(":Mail",Mail);
   query.bindValue(":TelPerso",T);
   query.bindValue(":NbMarOrg",Nb);
   return query.exec();


}

bool Personnel::supprimer(int C)
{
    QSqlQuery query;
    query.prepare("Delete from Personnel where CIN=:CIN ");
    query.bindValue(":CIN",C);
    return query.exec();
}

 QSqlQueryModel * Personnel::afficher()
 {
     QSqlQueryModel * modal=new QSqlQueryModel();
     modal->setQuery("SELECT * FROM PERSONNEL ");

     /* modal->setHeaderData(0,Qt::Horizontal,"CIN");
     modal->setHeaderData(1,Qt::Horizontal,"NomPerso");
     modal->setHeaderData(2,Qt::Horizontal,"PrenomPerso");
     modal->setHeaderData(3,Qt::Horizontal,"DateNaissP");
     modal->setHeaderData(4,Qt::Horizontal,"Mail");
     modal->setHeaderData(5,Qt::Horizontal,"TelPerso");
     modal->setHeaderData(6,Qt::Horizontal,"NbMarOrg"); */

     return modal;
 }


 bool Personnel::modifier(int C)
 {

     QSqlQuery query;
     query.prepare("UPDATE Personnel SET NomPerso= :NomPerso,PrenomPerso= :PrenomPerso,DateNaissP= :DateNaissP,Mail= :Mail,TelPerso= :TelPerso,NbMarOrg= :NbMarOrg WHERE CIN= :CIN");


     QString T=QString::number(TelPerso);
     QString Nb=QString::number(NbMarOrg);

     query.bindValue(":CIN",C);
     query.bindValue(":NomPerso",NomPerso);
     query.bindValue(":PrenomPerso",PrenomPerso);
     query.bindValue(":DateNaissP",DateNaissP);
     query.bindValue(":Mail",Mail);
     query.bindValue(":TelPerso",T);
     query.bindValue(":NbMarOrg",Nb);
     return query.exec();
 }
