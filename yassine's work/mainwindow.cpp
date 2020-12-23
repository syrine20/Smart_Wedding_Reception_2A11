#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include "dialog.h"
#include <QSound>
#include <QMediaPlayer>
#include <QString>
#include <QDebug>



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_connecter_clicked()
{
    QString pseudo = ui -> lineEdit_pseudo->text();
    QString mdp = ui -> lineEdit_mdp->text();
    if(pseudo=="yass"  && mdp=="yass")
    {   hide();

        QMessageBox::information(this,"se connecter","Bienvenue!");
        Dialog dialog ;
        dialog.setModal(true);
        dialog.exec();
          }
    else { QMessageBox::warning(this,"se connecter","Vérifiez vos données!"); }

}


