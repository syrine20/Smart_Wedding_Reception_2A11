#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QMessageBox>
#include "promotion.h"
#include "pack.h"
#include <QMediaPlayer>
#include <QSound>
#include <QDebug>



namespace Ui { class Dialog; }

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();


private slots:


    void on_pushButton__valider_promotions_ajouter_clicked();

    void on_pushButton_supp_promotions_clicked();

    void on_pushButton_modif_promotions_clicked();



    void on_pushButton_valider_Packs_ajouter_clicked();

    void on_pushButton_supp_pack_clicked();

    void on_pushButton_modif_pack_clicked();



    void on_pushButton_rechercher_packs_clicked();

    void on_pushButton_tri_pack_ID_clicked();

    void on_pushButton_tri_id_pack_inverse_clicked();

    void on_pushButton_tri_categorie_pack_clicked();

    void on_pushButton_tri_categorie_pack_inverse_clicked();

    void on_pushButton_tri_pack_prix_clicked();

    void on_pushButton_tri_prix_pack_inverse_clicked();

private:
    Ui::Dialog *ui;
pack PA;
    promotion P;




};

#endif // DIALOG_H
