#ifndef PATISSERIE_H
#define PATISSERIE_H
#include <qstring.h>
#include <QSqlQuery>
#include <qsqlquerymodel.h>
#include <qsqlquery.h>
#include <qsqldatabase.h>
#include <QtDebug>
#include <QVariant>

class patisserie
{
   protected :
    QString nom;
    QString id;
    float echelle_qual;
    long nbprvendus;
    QString adr;
    QString email;

public:
    patisserie();
    patisserie(QString, QString,float,long,QString,QString);
    //getters
    QString getnom(){return nom;}
    QString getid(){return id;}
    float getechelle(){return echelle_qual;}
    long getnbprvendus(){return nbprvendus;}
    QString getAdr(){return adr;}
    QString getEmail(){return email;}
    //setters
    bool setnom(QString);
    bool setid(QString);
    bool setechelle(float);
    bool setnbprvendus(long);
    bool setAdr(QString);
    bool setEmail(QString);

   //methods
    bool ajouter();
    QSqlQueryModel * afficher();
    bool supprimer(QString);
    bool modifier(QString,QString,float,QString,QString);
    QSqlQueryModel *trierA();
    QSqlQueryModel *trierB();
};

#endif // PATISSERIE_H
