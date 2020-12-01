#include "dialog.h"
#include "ui_dialog.h"
#include "promotion.h"
#include <QSound>
#include <QMediaPlayer>
#include<QGraphicsOpacityEffect>
#include <QString>
#include <QMessageBox>
Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->tableView_Promotions_consulter->setModel(P.afficher());
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
