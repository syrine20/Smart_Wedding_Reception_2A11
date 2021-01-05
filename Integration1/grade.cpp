#include "grade.h"

Grade::Grade()
{

}

Grade::Grade(QString Gr,QString DEmb,QString SG,int IG)
{
       NomGrade= Gr;
       DateEmbauche=DEmb;
       SalaireGrade=SG ;
       IDPG=IG;
}

bool Grade::ajouter()
{
    QSqlQuery query;
    query.prepare("INSERT INTO Grade(NomGrade,DateEmbauche,SalaireGrade,IDPG) VALUES (:NomGrade,:DateEmbauche,:SalaireGrade,:IDPG)");

    QString IG=QString::number(IDPG);


    query.bindValue(":NomGrade",NomGrade);
    query.bindValue(":DateEmbauche",DateEmbauche);
    query.bindValue(":SalaireGrade",SalaireGrade);
    query.bindValue(":IDPG",IDPG);
    return query.exec();
}

bool Grade::supprimer(QString Gr)
{
    QSqlQuery query;
    query.prepare("Delete from Grade where NomGrade=:NomGrade ");
    query.bindValue(":NomGrade",Gr);
    return query.exec();
}

QSqlQueryModel * Grade::afficher()
{
    QSqlQueryModel * modal=new QSqlQueryModel();
    modal->setQuery("SELECT * FROM Grade ");

    modal->setHeaderData(0,Qt::Horizontal,"NomGrade");
    modal->setHeaderData(1,Qt::Horizontal,"DateEmbauche");
    modal->setHeaderData(2,Qt::Horizontal,"SalaireGrade");
    modal->setHeaderData(3,Qt::Horizontal,"IDPG");
    return modal;
}

bool Grade::modifier(QString Gr)
{

    QSqlQuery query;
    query.prepare("UPDATE GRADE SET  DateEmbauche= :DateEmbauche,SalaireGrade= :SalaireGrade ,IDPG= :IDPG  WHERE NomGrade= :NomGrade");


    QString IG=QString::number(IDPG);

    query.bindValue(":NomGrade",Gr);
    query.bindValue(":DateEmbauche",DateEmbauche);
    query.bindValue(":SalaireGrade",SalaireGrade);
    query.bindValue(":IDPG",IDPG);

    return query.exec();
}
