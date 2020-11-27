#include "dialog.h"
#include "ui_dialog.h"
#include "promotion.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton__valider_promotions_ajouter_clicked()
{
    int i = ui->lineEdit_ID_promotions_ajouter->text().toInt();
    QString n = ui->lineEdit_Nom_promotions_ajouter->text();
    int p = ui->lineEdit_pourcentge_promotions_ajouter->text().toInt();
    promotion  P(i,n,p);
    bool test = P.ajouter();
    if(test)
    {
        QMessageBox::information(nullptr,"Ajout promotion","Promotion ajoutée");

    }
    else
    {
        QMessageBox::warning(nullptr,"Ajout promotion","Promotion non ajoutée");
    }


}


void Dialog::on_pushButton_supprimer_promotions_consulter_clicked()
{
    int i = ui->pushButton_supprimer_promotions_consulter->text().toInt();
    bool test = tempP.supprimer(i);
    if(test)
    {
        QMessageBox::information(nullptr,"Supprimer promotion","Promotion supprimée");

    }
    else
    {
        QMessageBox::warning(nullptr,"supprimer promotion","Promotion non supprimée");
    }
}
