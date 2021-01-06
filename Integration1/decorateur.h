#ifndef DECORATEUR_H
#define DECORATEUR_H


#include<QString>
#include<QVariant>
#include<QSqlQuery>
#include <qsqlquerymodel.h>
class decorateur
{

public:
    //constructeurs
    decorateur();
    decorateur(int,QString,QString,int,QString,QString);

    //Getters
    int getid(){return id;}
    QString getnom(){return nom;}
    QString getstyle(){return style;}
    int getnum_telephone(){return num_telephone;}
    QString getemail(){return email;}
    QString getlieu(){return lieu;}

    //fonctionnalite de base relative a l'entite decorateur
    bool ajouter();
    bool supprimer(int id);
    QSqlQueryModel * afficher();
    bool modifier(int id, QString nom,QString style,int num_telephone, QString email, QString lieu);
private :
    int id;
    QString nom;
    QString style;
    int num_telephone;
    QString email;
    QString lieu;

};

#endif // DECORATEUR_H
