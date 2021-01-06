#ifndef PROMOTION_H
#define PROMOTION_H
#include<QString>
#include<QVariant>
#include <QSqlQuery>
#include <qsqlquerymodel.h>

class promotion
{   private:
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
    QSqlQueryModel *afficher();
    bool supprimer(QString);
    bool modifier(int);
    bool verif_id(QString ch);


};

#endif // PROMOTION_H



