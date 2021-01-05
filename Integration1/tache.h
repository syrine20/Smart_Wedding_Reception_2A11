#ifndef TACHE_H
#define TACHE_H

#include <QString>
#include <QVariant>
#include <QDate>
#include <QSqlQuery>
#include <QSqlQueryModel>

class Tache
{
    QString NomT;
       QString EtatT;
       QString DateLimiteT;
       int IDP;
public:
    Tache();
    Tache(QString,QString,QString,int);

       //Getters
       QString get_NomT(){return NomT;}
       QString get_EtatT(){return EtatT;}
       QString get_DateLimiteT(){return DateLimiteT;}
       int get_IDP(){return IDP;}

       //Setters
       void set_NomT(QString N){NomT=N;}
       void set_EtatT(QString E){EtatT=E;}
       void set_DateLimiteT(QString D){DateLimiteT=D;}
       void set_IDP(int I){IDP= I;}


       bool ajouter();
       bool supprimer(QString);
       QSqlQueryModel * afficher();
       bool modifier(QString);
};

#endif // TACHE_H
