#ifndef PACK_H
#define PACK_H
#include<QString>
#include<QVariant>
#include <QSqlQuery>
#include "QSqlQueryModel"
#include "ui_dialog.h"
#include<QDialog>



class pack
{
private:
    int id_pack;
    int prix_initial;
    QString categorie;
    QString liste;
public:
    pack();
    pack(int,QString,QString,int);
    int get_id_pack(){return id_pack;}
    QString get_categorie(){return categorie;}
    QString get_liste(){return liste;}
    int get_prix_initial(){return prix_initial;}
    bool ajouter();
    QSqlQueryModel *afficher();
    bool supprimer(QString);
    bool modifier(int);
    void recherche(Ui::Dialog *ui);
    void TRI_ID(Ui::Dialog *ui);
    void TRI_Categorie(Ui::Dialog *ui);
    void TRI_Prix(Ui::Dialog *ui);
    QSqlQueryModel * tri_IDinv();
    QSqlQueryModel * tri_Categorieinv();
    QSqlQueryModel * tri_prixinv();

};



#endif // PACK_H
