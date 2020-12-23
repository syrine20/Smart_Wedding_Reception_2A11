#ifndef VENTE_H
#define VENTE_H

#include<QString>
#include<QVariant>
#include <QSqlQuery>
#include "QSqlQueryModel"
#include "ui_dialog.h"
#include<QDialog>

class vente
{   private:
    int id_vente;
    int prix_final_v;
public:
    vente();
    vente(int,int);
    int get_id_vente(){return id_vente;}
    int get_prix_final_v(){return prix_final_v;}
    bool ajouter();
    QSqlQueryModel *afficher();
};

#endif // VENTE_H
