#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "connexion.h"
#include "login.h"
#include <QMessageBox>
#include <QPixmap>
#include <QDebug>
#include <QMediaPlayer>
#include "invites.h"
#include "QDebug"
#include <QString>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->pages->setCurrentIndex(0);

    QMediaPlayer *music=new QMediaPlayer();
   // music->setMedia(QUrl("qrc:/ressource/Click.wav"));
    music->play();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btn_login_clicked()
{
    QMediaPlayer *music=new QMediaPlayer();
    music->setMedia(QUrl("qrc:/ressource/Click.wav"));
    music->play();

    QString username = ui->login_name->text();
    QString password = ui->login_pass->text();
    QString role = ui->login_role->text();
    QString etat="connecté(e)";
           if((username !=  "")&&(password!="")&&(role !="")) {
login h(username,password,role);
bool test=h.connect();

if(test)
{

    if( role=="GM" )
    {
     ui->pages->setCurrentIndex(1);
    }
ui->tableViewInvites->setModel(tmpinvite.afficher());
}
else{
QMessageBox::warning(this,"Connection", "Vérifier svp ");
}
           }}

void MainWindow::on_ajouterinvite_clicked()
{
    int Id_invitation=ui->invi_id->text().toInt();
    QString nom =ui->invi_nom->text();
    QString prenom =ui->invi_prenom->text();

    qDebug()<<Id_invitation;
        qDebug()<<nom;
            qDebug()<<prenom;

    invites invi(Id_invitation,prenom,nom);
    bool test=invi.ajouter();
    if(test)
{
    ui->tableViewInvites->setModel(tmpinvite.afficher());
    QMessageBox::information(nullptr, QObject::tr("Ajouter un invite"),
                      QObject::tr("invite ajouté.\n"
                                  "Click Cancel to exit."), QMessageBox::Cancel);
    ui->invi_id->setText("");
    ui->invi_nom->setText("");
    ui->invi_prenom->setText("");

    }
      else
       { QMessageBox::critical(nullptr, QObject::tr("Ajouter un invite"),
                      QObject::tr("Erreur !.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);}

}

void MainWindow::on_tableViewInvites_activated(const QModelIndex &index)
{
    QString val=ui->tableViewInvites->model()->data(index).toString();
    QSqlQuery q;
    q.prepare("select * from INVITES where IDINVI='"+val+"'");
    if(q.exec())
    {
        while (q.next()) {
            ui->invi_id->setText(q.value(0).toString());
            ui->invi_nom->setText(q.value(1).toString());
            ui->invi_prenom->setText(q.value(2).toString());

        }
    }
}


void MainWindow::on_supprimerinvite_clicked()
{
    QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, "vehicule", "supprimer?",
                                      QMessageBox::Yes|QMessageBox::No);
        if (reply == QMessageBox::Yes) {
          qDebug() << "Yes was clicked";
          int Id_invitation=ui->invi_id->text().toInt();
          qDebug()<<Id_invitation;

        bool test=tmpinvite.supprimer(Id_invitation);
        ui->invi_id->setText("");
        ui->invi_nom->setText("");
        ui->invi_prenom->setText("");
        ui->tableViewInvites->setModel(tmpinvite.afficher());

        } else {
          qDebug() << "Yes was *not* clicked";
        }
}

void MainWindow::on_modifierinvite_clicked()
{
    int Id_invitation=ui->invi_id->text().toInt();
    QString nom =ui->invi_nom->text();
    QString prenom =ui->invi_prenom->text();

    invites invi(Id_invitation,prenom,nom);
       bool test=invi.modifier(Id_invitation);
       if(test)
     {
           ui->invi_id->setText("");
           ui->invi_nom->setText("");
           ui->invi_prenom->setText("");
    ui->tableViewInvites->setModel(tmpinvite.afficher());//afficher tableau invi
     QMessageBox::information(nullptr, QObject::tr("modifier"),
                       QObject::tr("modifié.\n"
                                   "Click Cancel to exit."), QMessageBox::Cancel);

     }
       else
           QMessageBox::critical(nullptr, QObject::tr("modifier"),
                       QObject::tr("non modifié !.\n"
                                   "Click Cancel to exit."), QMessageBox::Cancel);

}
