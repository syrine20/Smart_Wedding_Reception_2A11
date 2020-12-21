#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
  //Connexion c;
    //c.ouvrirConnexion();

}

MainWindow::~MainWindow()
{
    delete ui;

}


void MainWindow::on_pushButton_clicked()
{
    QString Id_Utilis = ui->lineEdit_Id_Utilis->text();
    QString Mot_De_Passe = ui->lineEdit_MotDP->text();

     if (Id_Utilis  =="Syrine" && Mot_De_Passe=="Syrine")
    {
        QMessageBox::information(this,"se connecter","Id_Utilisateur et Mot_De_Passe sont correctes");
        hide();
         Dialog d;
        d.exec();
    }
    else {
         QMessageBox::warning(this,"se connecter","Id_Utilisateur et Mot_De_Passe ne sont pas correctes");
    }
}
