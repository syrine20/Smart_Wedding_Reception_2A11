#ifndef PROMOTION_H
#define PROMOTION_H
#include<QString>
#include<QVariant>
#include <QSqlQuery>

class promotion
{
    int id;
    QString nom;
    int pourcentage;
public:
    promotion();
    promotion(int,QString,int);
    int get_id(){return id;}
    QString get_nom(){return nom;}
    int get_pourcentage(){return pourcentage;}
    bool ajouter();
    bool supprimer(int);
};

#endif // PROMOTION_H
