#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "fenetre.h"
#include "traiteurs.h"
#include <qstring.h>
#include "qthread.h"
#include <QtMultimedia/qmediaplayer.h>
#include <qdebug.h>
#include "fenetre.h"
#include <QPropertyAnimation>
#include <QAnimationGroup>
#include <QAnimationDriver>
#include <qsqldatabase.h>
#include "connection.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    player=new QMediaPlayer(this);


}

MainWindow::~MainWindow()
{
    delete ui;
}

/*bool MainWindow::check(QString user,QString pass){
QSqlQuery quer;
quer.prepare("SELECT * FROM ADMIN WHERE USERNAME=:user AND PASS=:pass");
quer.bindValue(":user",user);
quer.bindValue(":pass",pass);
quer.exec();
return (quer.numRowsAffected()==-1);
}*/

void MainWindow::on_pushButton_clicked()
{

    QString user=ui->lineEdit->text();
    QString pass=ui->lineEdit2->text();
    QSqlQuery *quer= new QSqlQuery;
    quer->prepare("SELECT * FROM ADMIN WHERE USERNAME=:user AND PASS=:pass");
    quer->bindValue(":user",user);
    quer->bindValue(":pass",pass);
    quer->exec();
    quer->first();
    QString us=quer->value(0).toString();
    QString ps=quer->value(1).toString();
    qDebug()<<us<<" "<<ps<<endl;
    if(us!="" and ps!=""){
        QMessageBox::information(nullptr, QObject::tr("Connexion"),
                                 QObject::tr(" Connecté \n"
                                             "Click ok to login."), QMessageBox::Ok);
        fenetre f;
        f.exec();
    }

    else {

        QMessageBox::critical(nullptr, QObject::tr("Connexion"),
                              QObject::tr("Erreur , Connexion échouée!.\n"
                                          "Click Cancel to exit."), QMessageBox::Cancel);
    }
    player->setMedia(QUrl::fromLocalFile("C:/Users/ghaba/Downloads/click.wav"));
    player->play();
    qDebug()<< player->errorString();

    //}
    //else
    //ui->label4->setText("Erreur : fausse cordonnées");
}

void MainWindow::on_pushButton_2_clicked()
{
    player->setMedia(QUrl::fromLocalFile("C:/Users/ghaba/Downloads/click.wav"));
    player->play();
    qDebug()<< player->errorString();


    close();
}

/*void MainWindow::on_lineEdit2_textChanged(const QString &arg1)
{
    QString mdp=ui->lineEdit2->text();
    QString crypt="";
    for(int i=0;i<mdp.length();i++){
        crypt+="*";
    }
    ui->lineEdit_2->setText(crypt);
}*/
