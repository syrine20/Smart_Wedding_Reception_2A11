#ifndef SALLE_H
#define SALLE_H

#include<QString>
#include<QVariant>
#include<QSqlQuery>
#include<QSqlQueryModel>

class salle

{
    QString lieu;
    int id;
    int capacite;
    int prix;
public:
    //constructeurs
    salle();
    salle(QString,int,int,int);

    //Getters
    QString getlieu(){return lieu;}
    int getid(){return id;}
    int getcapacite(){return capacite;}
    int getprix(){return prix;}


    //fonctionnalite de base relative a l'entite salle
    bool ajouter();
    bool supprimer(int id);
    QSqlQueryModel * afficher();
    QSqlQueryModel * afficher_tri_prix();
    QSqlQueryModel * afficher_tri_capacite();
    QSqlQueryModel * afficher_tri_lieu();
    QSqlQueryModel * afficher_tri_id();
    bool modifier(int id, QString lieu,QString capacite, QString prix);


};
#endif // SALLE_H
