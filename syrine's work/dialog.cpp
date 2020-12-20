#include "dialog.h"
#include "ui_dialog.h"
#include "connexion.h"
#include "tache.h"
#include "mail.h"
#include <QDebug>
#include "arduino.h"
Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    //affichage contenu base
     show_tables();
    /* int ret=A.connect_arduino();
     switch (ret)
     {
         case(0):qDebug()<< "arduino is availabale and connected to :"<<A.get_arduino_port_name();
         break;
         case(1):qDebug()<< "arduino is availabale but not connected to :"<<A.get_arduino_port_name();
         break;
         case(-1):qDebug()<< "arduino is not availabale";

     }
     QObject::connect(A.getserial(),SIGNAL(readyread()),this,SLOT(update_label()));


    */

}

Dialog::~Dialog()
{
    delete ui;
     show_tables();

}


void Dialog::show_tables()
{
//creation model (masque du tableau) : permet recherche et tri
    proxy = new QSortFilterProxyModel();

   //definir la source (tableau original)
    proxy->setSourceModel(tempPerso.afficher());

   //pour la recherche
    proxy->setFilterCaseSensitivity(Qt::CaseInsensitive); // S=s (pas de difference entre majiscule et miniscule)
    proxy->setFilterKeyColumn(-1); // chercher dans tout le tableau (-1) ou donner le numero de la colone//important
   //remplissage tableau avec le masque
    ui->tablePerso->setModel(proxy);




    //creation model (masque du tableau) : permet recherche et tri
        proxyt = new QSortFilterProxyModel();

       //definir la source (tableau original)
        proxyt->setSourceModel(tempTache.afficher());

       //pour la recherche
        proxyt->setFilterCaseSensitivity(Qt::CaseInsensitive); // S=s (pas de difference entre majiscule et miniscule)
        proxyt->setFilterKeyColumn(-1); // chercher dans tout le tableau (-1) ou donner le numero de la colone//important
       //remplissage tableau avec le masque
        ui->tableTache->setModel(proxyt);
}

void Dialog::on_ajouterperso_clicked()
{
   int C =ui->lineEdit_Cin->text().toInt();
   QString N =ui->lineEdit_nomp->text();
   QString P =ui->lineEdit_prenomp->text();
   QString D =ui->lineEdit_datenp->text();
   QString M =ui->lineEdit_mail->text();
   int  T =ui->lineEdit_tel->text().toInt();
   int NbM =ui->lineEdit_nbmar->text().toInt();
   Personnel Per(C,N,P,D,M,T,NbM);
   bool test =Per.ajouter();
    show_tables();
   if(test)
   {
       //ui->tablePerso->setModel(tempPerso.afficher());
       QMessageBox::information(nullptr,"Ajout Personnel","Personnel ajouté");
   }
   else
   {
       QMessageBox::warning(nullptr,"Ajout Personnel","Personnel non ajouté");
   }


}



void Dialog::on_supprimerperso_clicked()
{
    int i = ui->lineEdit_supp->text().toInt();
    bool test =tempPerso.supprimer(i);
    show_tables();
    if(test)
    {
         //ui->tablePerso->setModel(tempPerso.afficher());
        QMessageBox::information(nullptr,"Suppression Personnel","Personnel supprimé");
    }
    else
    {
        QMessageBox::warning(nullptr,"Suppression Personnel","Personnel non supprimé");
    }
}



void Dialog::fill_form( int i)
{
    QSqlQuery query;
    query.prepare("select *from Personnel where CIN=:CIN");

    query.bindValue(":CIN",i);
    query.exec();
    while(query.next())
    {
        ui->lineEdit_Cin->setText(query.value(i).toString());
        ui->lineEdit_nomp->setText(query.value(1).toString());
        ui->lineEdit_prenomp->setText(query.value(2).toString());
        ui->lineEdit_datenp->setText(query.value(3).toString());
        ui->lineEdit_tel->setText(query.value(4).toString());
        ui->lineEdit_mail->setText(query.value(5).toString());
        ui->lineEdit_nbmar->setText(query.value(6).toString());


    }
}



void Dialog::on_modifierperso_clicked()
{


    int C =ui->lineEdit_supp->text().toInt();
        Dialog d(this);
        d.fill_form(C);
    QString N =ui->lineEdit_nomp->text();
    QString P =ui->lineEdit_prenomp->text();
    QString D =ui->lineEdit_datenp->text();
    QString M =ui->lineEdit_mail->text();
    int T =ui->lineEdit_tel->text().toInt();
    int  NbM =ui->lineEdit_nbmar->text().toInt();
    Personnel Per(C,N,P,D,M,T,NbM);
    bool test =Per.modifier(C);

    if(test)
    {
         //ui->tablePerso->setModel(tempPerso.afficher());
        QMessageBox::information(nullptr,"Modification Personnel","Personnel modifié");
    }
    else
    {
        QMessageBox::warning(nullptr,"Modification Personnel","Personnel non modifié");
    }
     show_tables();

}





void Dialog::on_rechercher_textChanged(const QString &arg1)
{
  proxy->setFilterFixedString(arg1);
}


void Dialog::on_ajouter_tache_clicked()
{
    QString N=ui->lineEdit_NomTache->text();
    QString E =ui->lineEdit_EtatT->text();
    QString D =ui->lineEdit_DateLimite->text();
    int I =ui->lineEdit_CinPTache->text().toInt();

    Tache T(N,E,D,I);
    bool test =T.ajouter();
     show_tables();
    if(test)
    {

        QMessageBox::information(nullptr,"Ajout Tâche"," Tâche ajouté");
    }
    else
    {
        QMessageBox::warning(nullptr,"Ajout Tâche","Tâche non ajouté");
    }


}

void Dialog::on_supprimertache_clicked()
{
    Tache T;
    QString n=ui->lineEdit_suppmodT->text();
    bool test =T.supprimer(n);
    show_tables();
    if(test)
    {

        QMessageBox::information(nullptr,"Suppression Tâche","Tâche supprimé");
    }
    else
    {
        QMessageBox::warning(nullptr,"Suppression Tâche","Tâche non supprimé");
    }
}

void Dialog::fill_formTache(QString N)
{
    QSqlQuery query;
    query.prepare("select *from TAche where NomT=:NomT");

    query.bindValue(":NomT",N);
    query.exec();
    while(query.next())
    {
        ui->lineEdit_NomTache->setText(query.value(N).toString());
        ui->lineEdit_EtatT->setText(query.value(1).toString());
        ui->lineEdit_DateLimite->setText(query.value(2).toString());
        ui->lineEdit_CinPTache->setText(query.value(3).toString());
   }
}

void Dialog::on_modifierTache_clicked()
{
    QString N =ui->lineEdit_suppmodT->text();
        Dialog d(this);
        d.fill_formTache(N);
    QString E =ui->lineEdit_EtatT->text();
    QString D =ui->lineEdit_DateLimite->text();
    int I =ui->lineEdit_CinPTache->text().toInt();

    Tache T(N,E,D,I);
    bool test =T.modifier(N);

    if(test)
    {

        QMessageBox::information(nullptr,"Modification Tâche","Tâche modifié");
    }
    else
    {
        QMessageBox::warning(nullptr,"Modification Tâche","Tâche non modifié");
    }
     show_tables();
}

void Dialog::on_pushButton_10_clicked()
{

    mail m;
    m.exec();
}


void Dialog::on_export_excel_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this, tr("Excel file"), qApp->applicationDirPath (),
                                                    tr("Excel Files (*.xls)"));
    if (fileName.isEmpty())
        return;

    ExportExcelObject obj(fileName, "mydata", ui->tableTache);

    //colums to export
    obj.addField(0, "NomT", "char(20)");
    obj.addField(1, "EtatT", "char(20)");
    obj.addField(2, "DateLimiteT", "char(20)");
    obj.addField(3, "IDP", "char(20)");



    int retVal = obj.export2Excel();
    if( retVal > 0)
    {
        QMessageBox::information(this, tr("Done"),
                                 QString(tr("%1 records exported!")).arg(retVal)
                                 );
    }
}



void Dialog::on_ON_clicked()
{
     A.write_to_arduino("1");
}

void Dialog::on_OFF_clicked()
{
     A.write_to_arduino("0");
}
