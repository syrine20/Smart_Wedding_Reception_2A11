#include "dialog.h"
#include "ui_dialog.h"
#include "promotion.h"
#include "pack.h"
#include <QSound>
#include <QMediaPlayer>
#include<QGraphicsOpacityEffect>
#include <QString>
#include <QMessageBox>
#include <QDebug>
Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->tableView_Promotions_consulter->setModel(P.afficher());
    ui->tableView_packs_consulter->setModel(PA.afficher());

}

Dialog::~Dialog()
{
    delete ui;
}






void Dialog::on_pushButton__valider_promotions_ajouter_clicked()
{
    QMediaPlayer *player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("C:/Users/LENOVO/Desktop/marketing/button.mp3"));
    player->setVolume(2000);
    player->play();

    int i = ui->lineEdit_ID_promotions_ajouter->text().toInt();
    QString n = ui->lineEdit_Nom_promotions_ajouter->text();
    int p = ui->lineEdit_pourcentge_promotions_ajouter->text().toInt();
    promotion  P(i,n,p);
    bool test = P.ajouter();
    if(test)
    {    ui->tableView_Promotions_consulter->setModel(P.afficher());
        QMessageBox::information(nullptr,"Ajout promotion","Promotion ajoutée");

    }
    else
    {
        QMessageBox::warning(nullptr,"Ajout promotion","Promotion non ajoutée");
    }

}




void Dialog::on_pushButton_supp_promotions_clicked()
{
    QString id=ui->lineEdit_supp_promotions->text();
    bool test=P.supprimer(id);
    if(test){

        ui->tableView_Promotions_consulter->setModel(P.afficher());
        QMessageBox::information(nullptr,QObject::tr("suppression"),
                                 QObject::tr("suppression avec succès.\n""Click Cancel to exit."),QMessageBox::Cancel);
    }
    else {
        QMessageBox::critical(nullptr,QObject::tr("suppression"),
                                 QObject::tr("suppression echoue.\n""Click Cancel to exit."),QMessageBox::Cancel);
    }
}

void Dialog::on_pushButton_modif_promotions_clicked()
{
    int id=ui->lineEdit_ID_promotions_ajouter->text().toInt();
    QString nom=ui->lineEdit_Nom_promotions_ajouter->text();
    int pourcentage=ui->lineEdit_pourcentge_promotions_ajouter->text().toInt();

    promotion P(id,nom,pourcentage);
    bool test=P.modifier(id);
    if(test)
    {
        ui->tableView_Promotions_consulter->setModel(P.afficher());
        QMessageBox::information(nullptr,QObject::tr("modifier"),
                                 QObject::tr("modifier avec succès.\n""Click Cancel to exit."),QMessageBox::Cancel);



  }
    else
        QMessageBox::critical(nullptr,QObject::tr("modifier"),
                                 QObject::tr("modifier echoue.\n""Click Cancel to exit."),QMessageBox::Cancel);
}
















void Dialog::on_pushButton_valider_Packs_ajouter_clicked()
{
    QMediaPlayer *player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("C:/Users/LENOVO/Desktop/marketing/button.mp3"));
    player->setVolume(2000);
    player->play();

    int iP = ui->lineEdit_ID_Packs_Ajouter->text().toInt();
    int prix_i= ui->lineEdit_prix_initial_packs_ajouter->text().toInt();
    QString c = ui->comboBox_Categorie_Packs_Ajouter->currentText();
    QString l = ui->lineEdit_Liste_Packs_Ajouter->text();
    pack PA(iP,prix_i,c,l);
    bool test = PA.ajouter();
    if(test)
    {    ui->tableView_packs_consulter->setModel(PA.afficher());
        QMessageBox::information(nullptr,"Ajout pack","Pack ajouté");

    }
    else
    {
        QMessageBox::warning(nullptr,"Ajout pack","Pack non ajouté");
    }
}

void Dialog::on_pushButton_supp_pack_clicked()
{
    QString id_pack=ui->lineEdit_sup_pack->text();
    bool test=PA.supprimer(id_pack);
    if(test){

        ui->tableView_packs_consulter->setModel(PA.afficher());
        QMessageBox::information(nullptr,QObject::tr("suppression"),
                                 QObject::tr("suppression avec succès.\n""Click Cancel to exit."),QMessageBox::Cancel);
    }
    else {
        QMessageBox::critical(nullptr,QObject::tr("suppression"),
                                 QObject::tr("suppression echoue.\n""Click Cancel to exit."),QMessageBox::Cancel);
    }
}

void Dialog::on_pushButton_modif_pack_clicked()
{
    int id_pack=ui->lineEdit_ID_Packs_Ajouter->text().toInt();
    int prix_initial= ui->lineEdit_prix_initial_packs_ajouter->text().toInt();
    QString categorie=ui->comboBox_Categorie_Packs_Ajouter->currentText();
    QString liste=ui->lineEdit_Liste_Packs_Ajouter->text();

    pack PA(id_pack,prix_initial,categorie,liste);
    bool test=PA.modifier(id_pack);
    if(test)
    {
        ui->tableView_packs_consulter->setModel(PA.afficher());
        QMessageBox::information(nullptr,QObject::tr("modifier"),
                                 QObject::tr("modifier avec succès.\n""Click Cancel to exit."),QMessageBox::Cancel);



  }
    else
        QMessageBox::critical(nullptr,QObject::tr("modifier"),
                                 QObject::tr("modifier echoue.\n""Click Cancel to exit."),QMessageBox::Cancel);
}





void Dialog::on_pushButton_rechercher_packs_clicked()
{
    pack PA;
        PA.recherche(ui);
}





void Dialog::on_pushButton_tri_pack_ID_clicked()
{
    pack PA;
    PA.TRI_ID(ui);
}

void Dialog::on_pushButton_tri_id_pack_inverse_clicked()
{
     ui->tableView_packs_consulter->setModel(PA.tri_IDinv());
}





void Dialog::on_pushButton_tri_categorie_pack_clicked()
{
    pack PA;
    PA.TRI_Categorie(ui);
}


void Dialog::on_pushButton_tri_categorie_pack_inverse_clicked()
{
    ui->tableView_packs_consulter->setModel(PA.tri_Categorieinv());
}






void Dialog::on_pushButton_tri_pack_prix_clicked()
{
    pack PA;
    PA.TRI_Prix(ui);
}


void Dialog::on_pushButton_tri_prix_pack_inverse_clicked()
{
    ui->tableView_packs_consulter->setModel(PA.tri_prixinv());
}
