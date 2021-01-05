#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "connexion.h"
#include "login.h"
#include <QMessageBox>
#include <QPixmap>
#include <QDebug>
#include <QMediaPlayer>
#include "invites.h"
#include "ceremonies.h"
#include "stat.h"
#include "QDebug"
#include <QString>
#include <QDateEdit>
#include <QFile>
#include <QFileDialog>
#include <QPrintDialog>
#include <QPrinter>
#include <QSystemTrayIcon>
#include <QPrintDialog>
#include <QPrinter>
#include <QTextDocument>
#include <QTextStream>
#include <iostream>
#include "qpainter.h"
#include "salle.h"
#include "decorateur.h"
#include <QModelIndex>
#include<QSqlQueryModel>
#include "smtp.h"
#include <QPrintDialog>
#include"QPdfWriter"
#include"QtPrintSupport/QPrinter"
#include"QPainter"
#include "tache.h"
#include "personnel.h"
#include "grade.h"
#include "exportexcelobject.h"
#include "mailt.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    rl=0;
    /*int ret=A.connect_arduino();//lancer la cnx a arduino
    switch(ret)
    {case(0):qDebug()<<"arduino is available and connected to :"<<A.getarduino_port_name();
        break;
    case(1):qDebug()<<"arduino is avaiable but not connected to :"<<A.getarduino_port_name();
        break;
    case(-1):qDebug()<<"arduino is not available";
    }
    QObject::connect(A.getserial(),SIGNAL(readyRead()),this,SLOT(update_label()));*/

    ui->tablesalle->setModel(stmp.afficher());
    ui->TablePatiss->setModel(tempPatiss.afficher());
    ui->TableTrait->setModel(tempTrait.afficher());
    ui->tableart->setModel(tempArt.afficher());
    ui->tabledeco->setModel(dtmp.afficher());
    //photo on pushbutton
    ui->trie_prix->setIcon(QIcon("C:/Users/ASUS/Desktop/syrine_Smart_Wedding_Reception_2A11/Integration1/ressource/money.jpg"));
    ui->trie_capacite_2->setIcon(QIcon("C:/Users/ASUS/Desktop/syrine_Smart_Wedding_Reception_2A11/Integration1/ressource/capacite.jpg"));
     ui->suppression_salle->setIcon(QIcon("C:/Users/ASUS/Desktop/syrine_Smart_Wedding_Reception_2A11/Integration1/ressource/poubelle.jpg"));
     ui->salle_email->setIcon(QIcon("C:/Users/ASUS/Desktop/syrine_Smart_Wedding_Reception_2A11/Integration1/ressource/update.jpg"));
     ui->supprimer_deco->setIcon(QIcon("C:/Users/ASUS/Desktop/syrine_Smart_Wedding_Reception_2A11/Integration1/ressource/poubelle.jpg"));
      ui->update_s->setIcon(QIcon("C:/Users/ASUS/Desktop/syrine_Smart_Wedding_Reception_2A11/Integration1/ressource/update.jpg"));
      ui->suppression_a->setIcon(QIcon("C:/Users/ASUS/Desktop/syrine_Smart_Wedding_Reception_2A11/Integration1/ressource/mail.jpg"));
       ui->reserver_salle->setIcon(QIcon("C:/Users/ASUS/Desktop/syrine_Smart_Wedding_Reception_2A11/Integration1/ressource/reserver.jpg"));
         ui->recherche_deco->setIcon(QIcon("C:/Users/ASUS/Desktop/syrine_Smart_Wedding_Reception_2A11/Integration1/ressource/cherr.jpg"));
       ui->trie_id->setIcon(QIcon("C:/Users/ASUS/Desktop/syrine_Smart_Wedding_Reception_2A11/Integration1/ressource/id.jpg"));
       ui->trie_lieu->setIcon(QIcon("C:/Users/ASUS/Desktop/syrine_Smart_Wedding_Reception_2A11/Integration1/ressource/loca.jpg"));
          ui->a_retour->setIcon(QIcon("C:/Users/ASUS/Desktop/syrine_Smart_Wedding_Reception_2A11/Integration1/ressource/retour.jpg"));
          ui->style_recherche->setIcon(QIcon("C:/Users/ASUS/Desktop/syrine_Smart_Wedding_Reception_2A11/Integration1/ressource/style.jpg"));
           ui->idd_recherche->setIcon(QIcon("C:/Users/ASUS/Desktop/syrine_Smart_Wedding_Reception_2A11/Integration1/ressource/id.jpg"));
           ui->lieu_recherche_2->setIcon(QIcon("C:/Users/ASUS/Desktop/syrine_Smart_Wedding_Reception_2A11/Integration1/ressource/loca.jpg"));
           ui->backk->setIcon(QIcon("C:/Users/ASUS/Desktop/syrine_Smart_Wedding_Reception_2A11/Integration1/ressource/retour.jpg"));
           //controle de saisie
        ui->lineEdit_7->setValidator(new QIntValidator (0,99999999));
        ui->lineEdit_18->setValidator(new QIntValidator (0,99999999));
       ui->lineEdit_id->setValidator(new QIntValidator (0,999999999));
       ui->lineEdit_ideco->setValidator(new QIntValidator(0,9999));
       ui->lineEdit_19->setValidator(new QRegExpValidator(QRegExp("[A-Za-z_]{0,20}"),this));
       //send mail
       connect(ui->sendBtn, SIGNAL(clicked()),this, SLOT(sendMail()));
       connect(ui->browseBtn, SIGNAL(clicked()), this, SLOT(browse()));
       //song
       player= new QMediaPlayer(this) ;
       player->setMedia(QUrl::fromLocalFile("C:/Users/ASUS/Desktop/syrine_Smart_Wedding_Reception_2A11/Integration1/ressource/")) ;
       player->play() ;


    ui->pages->setCurrentIndex(0);
    ui->pagesTable->setCurrentIndex(0);

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
    QString role = ui->login_role->currentText();
    QString etat="connecté(e)";
           if((username !=  "")&&(password!="")&&(role !="")) {
login h(username,password,role);
bool test=h.connect();

if(test)
{

    if( role=="EMPLOYE" )
    {
     ui->pages->setCurrentIndex(3);
     rl=2;
    }

    else if( role=="ADMIN" )
    {
     ui->pages->setCurrentIndex(16);
     rl=1;
    }
ui->tableViewInvites->setModel(tmpinvite.afficher());
ui->tableViewCerems->setModel(tmpcerem.afficher());
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



void MainWindow::on_ajouterMariage_clicked()
{
    int Id_emplacement=ui->mariage_id->text().toInt();
    int code_mariage=ui->mariage_code->text().toInt();
    int Nb_invites=ui->mariage_nbinvit->text().toInt();
   // QString Date =ui->mariage_date->text();
    float Budget=ui->mariage_budget->text().toInt();
     QString type;
    qDebug()<<code_mariage;
        qDebug()<<Id_emplacement;
            qDebug()<<Nb_invites;
           // qDebug()<<Date;
            qDebug()<<Budget;

          QString Budget_string=QString :: number(Budget);
            if (Budget_string.length() == 3)
                         type = "faible";
                       if (Budget_string.length() == 4)
                         type = "moyen";
                       if (Budget_string.length() == 5)
                         type = "haut";
        QSqlQuery *q=new QSqlQuery;
        q->prepare("UPDATE MARIAGE SET TYPE =:type WHERE CODEMARIAGE=:code_mariage");
        q->bindValue(":type",type);
        q->bindValue(":code_mariage",code_mariage);
        q->exec();

    ceremonies cerem(Id_emplacement,code_mariage,Nb_invites,Budget,type);
    bool test=cerem.ajouter();
    if(test)
{
    ui->tableViewCerems->setModel(tmpcerem.afficher());
    QMessageBox::information(nullptr, QObject::tr("Ajouter un mariage"),
                      QObject::tr("mariage ajouté.\n"
                                  "Click Cancel to exit."), QMessageBox::Cancel);
    ui->mariage_code->setText("");
    ui->mariage_id->setText("");
    ui->mariage_nbinvit->setText("");
    //ui->mariage_date->setText("");
    ui->mariage_budget->setText("");
    }
      else
       { QMessageBox::critical(nullptr, QObject::tr("Ajouter un mariage"),
                      QObject::tr("Erreur !.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);}

}

void MainWindow::on_tableViewCerems_activated(const QModelIndex &index)
{
    QString val=ui->tableViewCerems->model()->data(index).toString();
    QSqlQuery q;
    q.prepare("select * from MARIAGE where CODEMARIAGE='"+val+"'");
    if(q.exec())
    {
        while (q.next()) {
            ui->mariage_code->setText(q.value(0).toString());
            ui->mariage_id->setText(q.value(1).toString());
            ui->mariage_nbinvit->setText(q.value(2).toString());
           // ui->mariage_date->setText(q.value(3).toString());
            ui->mariage_budget->setText(q.value(3).toString());


        }
    }

}

void MainWindow::on_modifierMariage_clicked()
{
    int Id_emplacement=ui->mariage_id->text().toInt();
    int code_mariage=ui->mariage_code->text().toInt();
    int Nb_invites=ui->mariage_nbinvit->text().toInt();
    // QString Date =ui->mariage_date->text();
    float Budget=ui->mariage_budget->text().toInt();
   QString type;
    ceremonies cerem(Id_emplacement,code_mariage,Nb_invites,Budget,type);
       bool test=cerem.modifier(code_mariage);
       if(test)
     {
           ui->mariage_id->setText("");
           ui->mariage_code->setText("");
           ui->mariage_nbinvit->setText("");
           //ui->mariage_date->setText("");
           ui->mariage_budget->setText("");
    ui->tableViewCerems->setModel(tmpcerem.afficher());//afficher tableau Mariage
     QMessageBox::information(nullptr, QObject::tr("modifier"),
                       QObject::tr("modifié.\n"
                                   "Click Cancel to exit."), QMessageBox::Cancel);

     }
       else
           QMessageBox::critical(nullptr, QObject::tr("modifier"),
                       QObject::tr("non modifié !.\n"
                                   "Click Cancel to exit."), QMessageBox::Cancel);
}

void MainWindow::on_supprimerMariage_clicked()
{
    QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, "vehicule", "supprimer?",
                                      QMessageBox::Yes|QMessageBox::No);
        if (reply == QMessageBox::Yes) {
          qDebug() << "Yes was clicked";
          int code_mariage=ui->mariage_code->text().toInt();
          qDebug()<<code_mariage;

       bool test=tmpcerem.supprimer(code_mariage);
        ui->mariage_id->setText("");
        ui->mariage_code->setText("");
        ui->mariage_nbinvit->setText("");
        //ui->mariage_date->setText("");
        ui->mariage_budget->setText("");
        ui->tableViewCerems->setModel(tmpcerem.afficher());

        } else {
          qDebug() << "Yes was *not* clicked";
        }
}

void MainWindow::on_btn_rech_invite_clicked()
{
    QString rech=ui->recherche_invite->text();
 if(rech!="")  { ui->tableViewInvites->setModel(tmpinvite.recherche(rech)); }
 else{ QMessageBox::information(this,"Pour chercher il Faut","tapez quelque chose !");
 ui->tableViewInvites->setModel(tmpinvite.afficher());
 }
}

void MainWindow::on_btn_rechfMariage_clicked()
{
    QString rech=ui->recherche_Mariage->text();
 if(rech!="")  { ui->tableViewCerems->setModel(tmpcerem.recherche(rech)); }
 else{ QMessageBox::information(this,"Pour chercher il Faut","tapez quelque chose !");
 ui->tableViewCerems->setModel(tmpcerem.afficher());
 }

}



void MainWindow::on_btn_triefdescMariage_clicked()
{
    QString typetri=ui->trie_mariage->currentText();
    if(typetri=="select")
    {
            QMessageBox Box;
                        Box.setText("Please select type de trie ");
                        Box.exec();
    }
    else
    {
    ui->tableViewCerems->setModel(tmpcerem.tri_ceremDesc(typetri));
    }
}

void MainWindow::on_btn_trieDec_clicked()
{
    QString typetri=ui->trie_invite->currentText();
    if(typetri=="select")
    {
            QMessageBox Box;
                        Box.setText("Please select type de trie ");
                        Box.exec();
    }
    else
    {
    ui->tableViewInvites->setModel(tmpinvite.tri_inviDesc(typetri));
    }
}

void MainWindow::on_btn_trieAsc_clicked()
{
    QString typetri=ui->trie_invite->currentText();
    if(typetri=="select")
    {
            QMessageBox Box;
                        Box.setText("Please select type de trie ");
                        Box.exec();
    }
    else
    {
    ui->tableViewInvites->setModel(tmpinvite.tri_inviAsc(typetri));
    }
}

void MainWindow::on_btn_triefascMariage_clicked()
{
    QString typetri=ui->trie_mariage->currentText();
    if(typetri=="select")
    {
            QMessageBox Box;
                        Box.setText("Please select type de trie ");
                        Box.exec();
    }
    else
    {
    ui->tableViewCerems->setModel(tmpcerem.tri_ceremAsc(typetri));
    }
}

void MainWindow::on_ExcelMariage_clicked()
{
    QTableView *table;
    table = ui->tableViewCerems;

    QString filters("CSV files (*.csv);;All files (*.*)");
    QString defaultFilter("CSV files (*.csv)");
    QString fileName = QFileDialog::getSaveFileName(0, "Save file", QCoreApplication::applicationDirPath(),
                       filters, &defaultFilter);
    QFile file(fileName);

    QAbstractItemModel *model =  table->model();
    if (file.open(QFile::WriteOnly | QFile::Truncate)) {
        QTextStream data(&file);
        QStringList strList;
        for (int i = 0; i < model->columnCount(); i++) {
            if (model->headerData(i, Qt::Horizontal, Qt::DisplayRole).toString().length() > 0)
                strList.append("\"" + model->headerData(i, Qt::Horizontal, Qt::DisplayRole).toString() + "\"");
            else
                strList.append("");
        }
        data << strList.join(";") << "\n";
        for (int i = 0; i < model->rowCount(); i++) {
            strList.clear();
            for (int j = 0; j < model->columnCount(); j++) {

                if (model->data(model->index(i, j)).toString().length() > 0)
                    strList.append("\"" + model->data(model->index(i, j)).toString() + "\"");
                else
                    strList.append("");
            }
            data << strList.join(";") + "\n";
        }
        file.close();
        QMessageBox::information(this,"Exporter To Excel","Exporter En Excel Avec Succées ");
    }
}

void MainWindow::on_Pdf_invitation_clicked()
{
    QString strStream;
                QTextStream out(&strStream);

                 const int rowCount = ui->tableViewInvites->model()->rowCount();
                 const int columnCount = ui->tableViewInvites->model()->columnCount();
                out <<  "<html>\n"
                "<head>\n"
                                 "<meta Content=\"Text/html; charset=Windows-1251\">\n"
                                 <<  QString("<title>%1</title>\n").arg("strTitle")
                                 <<  "</head>\n"
                                 "<body bgcolor=#ffffff link=#5000A0>\n"

                                //     "<align='right'> " << datefich << "</align>"
                                 "<center> <H1>Liste des invités</H1></br></br><table border=1 cellspacing=0 cellpadding=2>\n";

                             // headers
                             out << "<thead><tr bgcolor=#f0f0f0> <th>Numero</th>";
                             out<<"<cellspacing=10 cellpadding=3>";
                             for (int column = 0; column < columnCount; column++)
                                 if (!ui->tableViewInvites->isColumnHidden(column))
                                     out << QString("<th>%1</th>").arg(ui->tableViewInvites->model()->headerData(column, Qt::Horizontal).toString());
                             out << "</tr></thead>\n";

                             // data table
                             for (int row = 0; row < rowCount; row++) {
                                 out << "<tr> <td bkcolor=0>" << row+1 <<"</td>";
                                 for (int column = 0; column < columnCount; column++) {
                                     if (!ui->tableViewInvites->isColumnHidden(column)) {
                                         QString data = ui->tableViewInvites->model()->data(ui->tableViewInvites->model()->index(row, column)).toString().simplified();
                                         out << QString("<td bkcolor=0>%1</td>").arg((!data.isEmpty()) ? data : QString("&nbsp;"));
                                     }
                                 }
                                 out << "</tr>\n";
                             }
                             out <<  "</table> </center>\n"
                                 "</body>\n"
                                 "</html>\n";

                       QString fileName = QFileDialog::getSaveFileName((QWidget* )0, "Sauvegarder en PDF", QString(), "*.pdf");
                         if (QFileInfo(fileName).suffix().isEmpty()) { fileName.append(".pdf"); }

                        QPrinter printer (QPrinter::PrinterResolution);
                         printer.setOutputFormat(QPrinter::PdfFormat);
                        printer.setPaperSize(QPrinter::A4);
                       printer.setOutputFileName(fileName);

                        QTextDocument doc;
                         doc.setHtml(strStream);
                         doc.setPageSize(printer.pageRect().size()); // This is necessary if you want to hide the page number
                         doc.print(&printer);
}

void MainWindow::on_pushButton_clicked()
{
    int res;
            statistiques w(this);
            w.setWindowTitle("Statistiques des operateurs");

            res = w.exec();
            qDebug() << res;
            if (res == QDialog::Rejected)
              return;
}

void MainWindow::on_pushButton_2_clicked()
{
    QPrinter printer;
    
                printer.setPrinterName("desiered printer name");
    
              QPrintDialog dialog(&printer,this);
    
                if(dialog.exec()== QDialog::Rejected)
    
                    return;
}





void MainWindow::on_ceremonie_3_clicked()
{
    ui->pages->setCurrentIndex(3);
}

void MainWindow::on_ceremonie_2_clicked()
{
    ui->pages->setCurrentIndex(3);
}



void MainWindow::on_gerer_salle_clicked()
{
     ui->pages->setCurrentIndex(6);
}

void MainWindow::on_gerer_decorateur_clicked()
{
    ui->pages->setCurrentIndex(7);
}

void MainWindow::on_quittersalledeco_clicked()
{

ui->pages->setCurrentIndex(16);
}

void MainWindow::on_liste_des_salle_clicked()
{
    ui->tablesalle->setModel(stmp.afficher());
    ui->pages->setCurrentIndex(11);
}

void MainWindow::on_ajouter_salle_clicked()
{
    ui->pages->setCurrentIndex(9);
}

void MainWindow::on_quittersalle_clicked()
{
    ui->pages->setCurrentIndex(15);
}

void MainWindow::on_retoursalle_clicked()
{
    ui->pages->setCurrentIndex(5);
}

void MainWindow::on_liste_de_decorateur_clicked()
{
    ui->tabledeco->setModel(dtmp.afficher());
    ui->pages->setCurrentIndex(10);
}

void MainWindow::on_ajouter_decorateur_clicked()
{
    ui->pages->setCurrentIndex(8);
}

void MainWindow::on_quitterdeco_clicked()
{
    ui->pages->setCurrentIndex(16);
}

void MainWindow::on_retourdeco_clicked()
{
    ui->pages->setCurrentIndex(5);
}

void MainWindow::on_ajouter_decorateur_2_clicked()
{
    ui->pages->setCurrentIndex(10);

    int id=ui->lineEdit_ideco->text().toInt();
    QString nom=ui->lineEdit_nom->text();
    QString style=ui->lineEdit_style->text();
    int num_telephone=ui->lineEdit_18->text().toInt();
    QString email=ui->lineEdit_21->text();
    QString lieu=ui->lineEdit_22->text();


    decorateur d(id,nom,style,num_telephone,email,lieu);
    bool test= d.ajouter();
    if(test)
    {
        ui->tabledeco->setModel(dtmp.afficher());
        QMessageBox::information(nullptr,"Ajout decorateur","decorateur ajoute");
}
    else
    {
        QMessageBox::warning(nullptr,"Ajout decorateur","decorateur non ajoute");
}
}



void MainWindow::on_return11_clicked()
{
     ui->pages->setCurrentIndex(7);
}


void MainWindow::on_ajoutersalle_clicked()
{
    ui->pages->setCurrentIndex(11);
    int id=ui->lineEdit_id->text().toInt();
    QString lieu=ui->lineEdit_lieu->text();
    int capacite=ui->lineEdit_capacite->text().toInt();
    int prix=ui->lineEdit_prix->text().toInt();
    salle s(lieu,id,capacite,prix);
    bool test= s.ajouter();
    if(test)
    {
        ui->tablesalle->setModel(stmp.afficher());
        QMessageBox::information(nullptr,"Ajout salle","salle ajoute");
}
    else
    {
        QMessageBox::warning(nullptr,"Ajout salle","salle non ajoute");
}
}


void MainWindow::on_retouur_clicked()
{
    ui->pages->setCurrentIndex(6);
}

void MainWindow::on_a_retour_clicked()
{
       ui->tabledeco->setModel(dtmp.afficher());
}

void MainWindow::on_lieu_recherche_2_clicked()
{
    QMessageBox msgBox ;
            QSqlQueryModel *model = new QSqlQueryModel();
            QString co;
            co = ui->lineEdit_24->text();
            model->setQuery("Select * from decorateur where lieu_decorateur = '"+co+"' ");
            model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
            model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom"));
            model->setHeaderData(2, Qt::Horizontal, QObject::tr("style"));
            model->setHeaderData(3, Qt::Horizontal, QObject::tr("num_telephone"));
            model->setHeaderData(4, Qt::Horizontal, QObject::tr("email"));
            model->setHeaderData(5, Qt::Horizontal, QObject::tr("lieu"));
            ui->tabledeco->setModel(model);
            ui->tabledeco->show();
            msgBox.setText("decorateur trouver");
            msgBox.exec();
            ui->lineEdit_24->clear();
}

void MainWindow::on_style_recherche_clicked()
{
    QMessageBox msgBox ;
            QSqlQueryModel *model = new QSqlQueryModel();
            QString code;
            code = ui->lineEdit_24->text();
            model->setQuery("Select * from decorateur where style_decorateur = '"+code+"' ");
            model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
            model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom"));
            model->setHeaderData(2, Qt::Horizontal, QObject::tr("style"));
            model->setHeaderData(3, Qt::Horizontal, QObject::tr("num_telephone"));
            model->setHeaderData(4, Qt::Horizontal, QObject::tr("email"));
            model->setHeaderData(5, Qt::Horizontal, QObject::tr("lieu"));
            ui->tabledeco->setModel(model);
            ui->tabledeco->show();
            msgBox.setText("decorateur trouver");
            msgBox.exec();
            ui->lineEdit_24->clear();
}

void MainWindow::on_idd_recherche_clicked()
{
    QMessageBox msgBox ;
            QSqlQueryModel *model = new QSqlQueryModel();
            QString cod;
            cod = ui->lineEdit_24->text();
            model->setQuery("Select * from decorateur where id_decorateur = '"+cod+"' ");
            model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
            model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom"));
            model->setHeaderData(2, Qt::Horizontal, QObject::tr("style"));
            model->setHeaderData(3, Qt::Horizontal, QObject::tr("num_telephone"));
            model->setHeaderData(4, Qt::Horizontal, QObject::tr("email"));
            model->setHeaderData(5, Qt::Horizontal, QObject::tr("lieu"));
            ui->tabledeco->setModel(model);
            ui->tabledeco->show();
            msgBox.setText("decorateur trouver");
            msgBox.exec();
            ui->lineEdit_24->clear();
}

void MainWindow::on_suppression_a_clicked()
{
     ui->pages->setCurrentIndex(13);
}

void MainWindow::on_supprimer_deco_clicked()
{
    int id =ui->lineEdit_ideco2->text().toInt();
    bool test=dtmp.supprimer(id);
    if(test)
    {
        ui->tabledeco->setModel(dtmp.afficher());
        QMessageBox::information(nullptr,"suppression decorateur","decorateur supprimé");
}
    else
        QMessageBox::warning(nullptr,"suppression decorateur","decorateur non supprimé");
}

void MainWindow::on_update_s_clicked()
{
    ui->pages->setCurrentIndex(15);
}

void MainWindow::on_exporteer_pdff_clicked()
{
    QString strStream;
                QTextStream out(&strStream);

                 const int rowCount = ui->tabledeco->model()->rowCount();
                 const int columnCount = ui->tabledeco->model()->columnCount();
                out <<  "<html>\n"
                "<head>\n"
                                 "<meta Content=\"Text/html; charset=Windows-1251\">\n"
                                 <<  QString("<title>%1</title>\n").arg("strTitle")
                                 <<  "</head>\n"
                                 "<body bgcolor=#ffffff link=#5000A0>\n"

                                //     "<align='right'> " << datefich << "</align>"
                                 "<center> <H1>Liste des decorateur</H1></br></br><table border=1 cellspacing=0 cellpadding=2>\n";

                             // headers
                             out << "<thead><tr bgcolor=#f0f0f0> <th>Numero</th>";
                             out<<"<cellspacing=10 cellpadding=3>";
                             for (int column = 0; column < columnCount; column++)
                                 if (!ui->tabledeco->isColumnHidden(column))
                                     out << QString("<th>%1</th>").arg(ui->tabledeco->model()->headerData(column, Qt::Horizontal).toString());
                             out << "</tr></thead>\n";

                             // data table
                             for (int row = 0; row < rowCount; row++) {
                                 out << "<tr> <td bkcolor=0>" << row+1 <<"</td>";
                                 for (int column = 0; column < columnCount; column++) {
                                     if (!ui->tabledeco->isColumnHidden(column)) {
                                         QString data = ui->tabledeco->model()->data(ui->tabledeco->model()->index(row, column)).toString().simplified();
                                         out << QString("<td bkcolor=0>%1</td>").arg((!data.isEmpty()) ? data : QString("&nbsp;"));
                                     }
                                 }
                                 out << "</tr>\n";
                             }
                             out <<  "</table> </center>\n"
                                 "</body>\n"
                                 "</html>\n";

                       QString fileName = QFileDialog::getSaveFileName((QWidget* )0, "Sauvegarder en PDF", QString(), "*.pdf");
                         if (QFileInfo(fileName).suffix().isEmpty()) { fileName.append(".pdf"); }

                        QPrinter printer (QPrinter::PrinterResolution);
                         printer.setOutputFormat(QPrinter::PdfFormat);
                        printer.setPaperSize(QPrinter::A4);
                       printer.setOutputFileName(fileName);

                        QTextDocument doc;
                         doc.setHtml(strStream);
                         doc.setPageSize(printer.pageRect().size()); // This is necessary if you want to hide the page number
                         doc.print(&printer);
}

void MainWindow::on_home_clicked()
{
    ui->pages->setCurrentIndex(5);
}

void MainWindow::on_retouir_clicked()
{
    ui->pages->setCurrentIndex(7);
}

void MainWindow::on_trie_capacite_2_clicked()
{
    ui->tablesalle->setModel(stmp.afficher_tri_capacite());
}

void MainWindow::on_trie_id_clicked()
{
    ui->tablesalle->setModel(stmp.afficher_tri_id());
}

void MainWindow::on_trie_prix_clicked()
{
      ui->tablesalle->setModel(stmp.afficher_tri_prix());
}

void MainWindow::on_trie_lieu_clicked()
{
    ui->tablesalle->setModel(stmp.afficher_tri_lieu());
}

void MainWindow::on_suppression_salle_clicked()
{
    int id =ui->lineEdit_supp->text().toInt();
    bool test=stmp.supprimer(id);
    if(test)
    {
        ui->tablesalle->setModel(stmp.afficher());
        QMessageBox::information(nullptr,"suppression salle","salle supprimé");

}
    else
        QMessageBox::warning(nullptr,"suppression salle","salle non supprimé");
}

void MainWindow::on_reserver_salle_clicked()
{
    ui->pages->setCurrentIndex(14);
}

void MainWindow::on_salle_email_clicked()
{
    ui->pages->setCurrentIndex(12);
}

void MainWindow::on_export_excel_salle_clicked()
{
    QTableView *table;
    table = ui->tablesalle;

    QString filters("CSV files (*.csv);;All files (*.*)");
    QString defaultFilter("CSV files (*.csv)");
    QString fileName = QFileDialog::getSaveFileName(0, "Save file", QCoreApplication::applicationDirPath(),
                       filters, &defaultFilter);
    QFile file(fileName);

    QAbstractItemModel *model =  table->model();
    if (file.open(QFile::WriteOnly | QFile::Truncate)) {
        QTextStream data(&file);
        QStringList strList;
        for (int i = 0; i < model->columnCount(); i++) {
            if (model->headerData(i, Qt::Horizontal, Qt::DisplayRole).toString().length() > 0)
                strList.append("\"" + model->headerData(i, Qt::Horizontal, Qt::DisplayRole).toString() + "\"");
            else
                strList.append("");
        }
        data << strList.join(";") << "\n";
        for (int i = 0; i < model->rowCount(); i++) {
            strList.clear();
            for (int j = 0; j < model->columnCount(); j++) {

                if (model->data(model->index(i, j)).toString().length() > 0)
                    strList.append("\"" + model->data(model->index(i, j)).toString() + "\"");
                else
                    strList.append("");
            }
            data << strList.join(";") + "\n";
        }
        file.close();
        QMessageBox::information(this,"Exporter To Excel","Exporter En Excel Avec Succées ");
    }
}

void MainWindow::on_retouur5_clicked()
{
    ui->pages->setCurrentIndex(6);
}

void MainWindow::on_homme_clicked()
{
    ui->pages->setCurrentIndex(5);
}

void MainWindow::on_okk_clicked()
{
    ui->pages->setCurrentIndex(11);


   int id=ui->lineEdit_13->text().toInt();
   QString lieu=ui->lineEdit_19->text();
   QString capacite=ui->lineEdit_3->text();
   QString prix=ui->lineEdit_4->text();
   bool test=stmp.modifier(id,lieu,capacite,prix);
   if(test)
   {
       ui->tablesalle->setModel(stmp.afficher());
       QMessageBox::information(nullptr,"modifier salle","salle modifier");
}
   else
   {
       QMessageBox::warning(nullptr,"modifier salle","salle non modifie");
}

}

void MainWindow::on_back_clicked()
{
    ui->pages->setCurrentIndex(11);
}

void MainWindow::on_backk_clicked()
{
    ui->pages->setCurrentIndex(10);
}

void MainWindow::on_imprimer_resrv_clicked()
{
    QPrinter printer ;
    printer.setPrinterName("esprit") ;
    QPrintDialog dialog(&printer,this) ;
    if( dialog.exec() == QDialog::Rejected) return ;
}

void MainWindow::on_backkk_clicked()
{
    ui->pages->setCurrentIndex(11);
}

void MainWindow::on_okkkkk_clicked()
{
    ui->pages->setCurrentIndex(10);


   int id=ui->lineEdit_16->text().toInt();
   QString nom=ui->lineEdit_17->text();
   QString style=ui->lineEdit_6->text();
   int num_telephone=ui->lineEdit_7->text().toInt();
   QString email=ui->lineEdit_8->text();
   QString lieu=ui->lineEdit_9->text();
   bool test=dtmp.modifier(id,nom,style,num_telephone,email,lieu);
   if(test)
   {
       ui->tabledeco->setModel(dtmp.afficher());
       QMessageBox::information(nullptr,"modifier decorateur","decorateur modifier");
}
   else
   {
       QMessageBox::warning(nullptr,"modifier decorateur","decorateur non modifie");
}

}

void MainWindow::on_bacck_clicked()
{
    ui->pages->setCurrentIndex(10);
}

void MainWindow::on_tabledeco_activated(const QModelIndex &index)
{
    QString val=ui->tabledeco->model()->data(index).toString();
    QSqlQuery query;
    query.prepare(" SELECT * FROM decorateur where ID_DECORATEUR='"+val+"'");
    if (query.exec())
    {
        while(query.next())
        {
         ui->lineEdit_16->setText(query.value(0).toString());
         ui->lineEdit_ideco2->setText(query.value(0).toString());
         ui->lineEdit_17->setText(query.value(1).toString());
         ui->lineEdit_6->setText(query.value(2).toString());
         ui->lineEdit_7->setText(query.value(3).toString());
         ui->lineEdit_8->setText(query.value(4).toString());
         ui->lineEdit_9->setText(query.value(5).toString());
        }
    }
}

void MainWindow::on_tablesalle_activated(const QModelIndex &index)
{
    QString val=ui->tablesalle->model()->data(index).toString();
    QSqlQuery query;
    query.prepare(" SELECT * FROM salle where ID_SALLE='"+val+"'");
    if (query.exec())
    {
        while(query.next())
        {
         ui->lineEdit_supp->setText(query.value(0).toString());
         ui->lineEdit_13->setText(query.value(0).toString());
         ui->lineEdit_19->setText(query.value(1).toString());
         ui->lineEdit_3->setText(query.value(2).toString());
         ui->lineEdit_4->setText(query.value(3).toString());
         ui->lineEdit_12->setText(query.value(0).toString());
         ui->lineEdit_11->setText(query.value(1).toString());
         ui->lineEdit_10->setText(query.value(2).toString());
         ui->lineEdit_5->setText(query.value(3).toString());
        }
    }
}

void MainWindow::on_a_retour_toggled(bool ed)
{
    if(ed)
    {
         ui->a_retour->setIcon(QIcon("C:/Users/ASUS/Desktop/retour.jpg"));
        qDebug() <<"Button checked-- ON--";
    }
}

void MainWindow::on_recherche_deco_toggled(bool y)
{
    if(y)
    {
         ui->recherche_deco->setIcon(QIcon("C:/Users/ASUS/Desktop/cherr.jpg"));
        qDebug() <<"Button checked-- ON--";
    }
}

void MainWindow::on_lieu_recherche_2_toggled(bool p)
{
    if(p)
    {
         ui->lieu_recherche_2->setIcon(QIcon("C:/Users/ASUS/Desktop/loca.png"));
        qDebug() <<"Button checked-- ON--";
    }
}

void MainWindow::on_style_recherche_toggled(bool g)
{
    if(g)
    {
         ui->style_recherche->setIcon(QIcon("C:/Users/ASUS/Desktop/style.jpg"));
        qDebug() <<"Button checked-- ON--";
    }
}

void MainWindow::on_idd_recherche_toggled(bool s)
{
    if(s)
    {
         ui->idd_recherche->setIcon(QIcon("C:/Users/ASUS/Desktop/id.jpg"));
        qDebug() <<"Button checked-- ON--";
    }
}

void MainWindow::on_suppression_a_toggled(bool m)
{
    if(m)
    {
         ui->suppression_a->setIcon(QIcon("C:/Users/ASUS/Desktop/mail.jpg"));
        qDebug() <<"Button checked-- ON--";
    }
}

void MainWindow::on_supprimer_deco_toggled(bool k)
{
    if(k)
    {
         ui->supprimer_deco->setIcon(QIcon("C:/Users/ASUS/Desktop/poubelle.jpg"));
        qDebug() <<"Button checked-- ON--";
    }
}

void MainWindow::on_update_s_toggled(bool h)
{
    if(h)
    {
         ui->update_s->setIcon(QIcon("C:/Users/ASUS/Desktop/update.jpg"));
        qDebug() <<"Button checked-- ON--";
    }
}

void MainWindow::on_trie_capacite_2_toggled(bool check)
{
    if(check)
    {
         ui->trie_capacite_2->setIcon(QIcon("C:/Users/ASUS/Desktop/capacite.jpg"));
        qDebug() <<"Button checked-- ON--";
    }
}

void MainWindow::on_trie_id_toggled(bool p)
{
    if(p)
    {
         ui->trie_id->setIcon(QIcon("C:/Users/ASUS/Desktop/id.jpg"));
        qDebug() <<"Button checked-- ON--";
    }
}

void MainWindow::on_trie_prix_toggled(bool checked)
{
    if(checked)
    {
         ui->trie_prix->setIcon(QIcon("C:/Users/ASUS/Desktop/money.jpg"));
    }
}

void MainWindow::on_trie_lieu_toggled(bool v)
{
    if(v)
    {
         ui->trie_lieu->setIcon(QIcon("C:/Users/ASUS/Desktop/loca.jpg"));
        qDebug() <<"Button checked-- ON--";
    }
}

void MainWindow::on_suppression_salle_toggled(bool chec)
{
    if(chec)
    {
         ui->suppression_salle->setIcon(QIcon("C:/Users/ASUS/Desktop/poubelle.jpg"));
        qDebug() <<"Button checked-- ON--";
    }
}

void MainWindow::on_reserver_salle_toggled(bool u)
{
    if(u)
    {
         ui->reserver_salle->setIcon(QIcon("C:/Users/ASUS/Desktop/reserver.jpg"));
        qDebug() <<"Button checked-- ON--";
    }
}

void MainWindow::on_salle_email_toggled(bool ch)
{
    if(ch)
    {
         ui->salle_email->setIcon(QIcon("C:/Users/ASUS/Desktop/update.jpg"));
        qDebug() <<"Button checked-- ON--";
    }
}

void MainWindow::on_backk_toggled(bool a)
{
    if(a)
    {
         ui->backk->setIcon(QIcon("C:/Users/ASUS/Desktop/retour.jpg"));
        qDebug() <<"Button checked-- ON--";
    }
}


void MainWindow::on_organisation_3_clicked()
{
    ui->pages->setCurrentIndex(5);
}

void MainWindow::on_organisation_2_clicked()
{
    ui->pages->setCurrentIndex(5);
}

void MainWindow::on_pushButton_3_clicked()
{

    ui->pages->setCurrentIndex(16);

}

void MainWindow::on_toolButton_clicked()
{
    player->setMedia(QUrl::fromLocalFile("C:/Users/ghaba/Desktop/git 2/Smart_Wedding_Reception_2A11/Integration1/ressource/Click.WAV"));
       player->play();
       qDebug()<< player->errorString();
       QString nom=ui->lineEdit->text();
       QString id=ui->lineEdit_2->text();
       float echelle=ui->lineEdit_14->text().toFloat();
       //long nb=ui->lineEdit_4->text().toInt();
       QString adr=ui->lineEdit_15->text();
       QString mail=ui->lineEdit_15->text();
       patisserie p(nom,id,echelle,0,adr,mail);
       bool test=p.ajouter();
        if(test){

            QMessageBox::information(nullptr,"ajout patisserie","Patisserie ajoutée avec succes.");
        }
        else QMessageBox::warning(nullptr,"ajout patisserie","Patisserie non ajoutée.");
        ui->TablePatiss->setModel(tempPatiss.afficher());
}

void MainWindow::on_alimentation_2_clicked()
{
    ui->pages->setCurrentIndex(1);
    ui->TablePatiss->setModel(tempPatiss.afficher());
    rl=2;//connecté en tant qu'employé
}

void MainWindow::on_alimentation_3_clicked()
{
    ui->pages->setCurrentIndex(1);
    ui->TablePatiss->setModel(tempPatiss.afficher());
    rl=1;//connecté en tant qu'admin
}

void MainWindow::on_toolButton_4_clicked()
{
    if(rl==1)
    ui->pages->setCurrentIndex(17);//admin
    else if (rl==2)
    ui->pages->setCurrentIndex(3);//employé
}



void MainWindow::on_toolButton_2_clicked()
{
    player->setMedia(QUrl::fromLocalFile("C:/Users/ghaba/Downloads/click.wav"));
        player->play();
        qDebug()<< player->errorString();
     QString i = ui->lineEdit_2->text();
     bool test = tempPatiss.supprimer(i);
     if (i=="")
         test=false;
     if(test){
         ui->TablePatiss->setModel(tempPatiss.afficher());
         QMessageBox::information(nullptr,"supression patisserie","Patisserie supprimée avec succes.");

     }
     else QMessageBox::warning(nullptr,"supression patisserie","Patisserie non supprimée.");
}

void MainWindow::on_TablePatiss_activated(const QModelIndex &index)
{
    QString val = ui->TablePatiss->model()->data(index).toString();
            //int n=ui->tableView->model()->data(index).toInt();
            /*
            QString search=ui->lindedit->text().toString;

             */
            QSqlQuery query,quer;
             query.prepare("select * from patisseries where NOMPATISS=:id or IDPATISS=:id  or ADRESSE=:id or EMAIL=:id");
             //quer.prepare("select * from patisseries where ECHELLE_QUAL=:n or NBPRVENDUS=:n");
             query.bindValue(":id",val);
             //
             //query.bindValue(":n",n);
            if (query.exec())
            {

                while (query.next())
                {
                    ui->lineEdit->setText(query.value(0).toString());
                    ui->lineEdit_2->setText(query.value(1).toString());
                    ui->lineEdit_14->setText(query.value(2).toString());
                    ui->lineEdit_15->setText(query.value(4).toString());
                    ui->lineEdit_20->setText(query.value(5).toString());

                }

            }
            else
            {
                QMessageBox::critical(nullptr,QObject::tr("error \n"),QObject::tr("de selection"));
            }
}



void MainWindow::on_toolButton_3_clicked()
{
    player->setMedia(QUrl::fromLocalFile("C:/Users/ghaba/Downloads/click.wav"));
       player->play();
       qDebug()<< player->errorString();
       QString nom= ui->lineEdit->text();  //lineEdit_nouv_nom
               QString id = ui->lineEdit_2->text(); //lineEdit_id_eventmodif
               int ech=ui->lineEdit_14->text().toInt(); //lineEdit_nouv_idsalle
               QString adr=ui->lineEdit_15->text();
               QString mail=ui->lineEdit_20->text();
               patisserie p(nom,id,ech,0,adr,mail);
                bool test=p.modifier(nom,id,ech,adr,mail);
               if(test)
               {
                   ui->TablePatiss->setModel(tempPatiss.afficher());//refresh
                   QMessageBox::information(nullptr, QObject::tr("Modifier une patisserie!"),
                                            QObject::tr(" patisserie modifiée ! \n"
                                                        "Click Cancel to exit."), QMessageBox::Cancel);
               }

               else {

                   QMessageBox::critical(nullptr, QObject::tr("Modifier une patisserie"),
                                         QObject::tr("Erreur !.\n"
                                                     "Click Cancel to exit."), QMessageBox::Cancel);
               }
}

void MainWindow::on_toolButton_5_clicked()
{

    ui->pages->setCurrentIndex(1);//admin
}

void MainWindow::on_pushButton_4_clicked()
{
    ui->pages->setCurrentIndex(17);
    ui->TableTrait->setModel(tempTrait.afficher());
}

void MainWindow::on_toolButton_6_clicked()
{
    player->setMedia(QUrl::fromLocalFile("C:/Users/ghaba/Downloads/click.wav"));
       player->play();
       qDebug()<< player->errorString();
       QString nom=ui->nomtrait->text();
       QString id=ui->idtrait->text();
       QString mail=ui->mailtrait->text();
       int com=ui->comission->text().toInt();
       traiteur t(nom,id,mail,com);
       bool test=t.ajouter();
       if(test){
           ui->TableTrait->setModel(tempTrait.afficher());
           QMessageBox::information(nullptr,"ajout traiteur","traiteur ajouté avec succes.");
       }
       else QMessageBox::warning(nullptr,"ajout traiteur","traiteur non ajouté.");
}

void MainWindow::on_toolButton_7_clicked()
{
    player->setMedia(QUrl::fromLocalFile("C:/Users/ghaba/Downloads/click.wav"));
        player->play();
        qDebug()<< player->errorString();
        QString i = ui->idtrait->text();
        bool test = tempTrait.supprimer(i);

        if (i=="")
            test=false;
        if(test){
            ui->TableTrait->setModel(tempTrait.afficher());
            QMessageBox::information(nullptr,"supression traiteur","traiteur supprimée avec succes.");

        }
        else QMessageBox::warning(nullptr,"supression traiteur","traiteur non supprimée.");
}

void MainWindow::on_toolButton_8_clicked()
{
    player->setMedia(QUrl::fromLocalFile("C:/Users/ghaba/Downloads/click.wav"));
        player->play();
        qDebug()<< player->errorString();
                QString nom= ui->nomtrait->text();  //lineEdit_nouv_nom
                QString id = ui->idtrait->text(); //lineEdit_id_eventmodif
                QString email=ui->mailtrait->text();
                int comission=ui->comission->text().toInt();
               traiteur t(nom,id,email,comission);
               QSqlQuery quer;
               QString tempId=t.getid();
               bool test=t.modifier();
                if(test)
                {
                    ui->TableTrait->setModel(tempTrait.afficher());//refresh
                    QMessageBox::information(nullptr, QObject::tr("Modifier une patisserie!"),
                                             QObject::tr(" patisserie modifiée ! \n"
                                                         "Click Cancel to exit."), QMessageBox::Cancel);
                }

                else {

                    QMessageBox::critical(nullptr, QObject::tr("Modifier une patisserie"),
                                          QObject::tr("Erreur !.\n"
                                                      "Click Cancel to exit."), QMessageBox::Cancel);
                }


}


void MainWindow::on_search_textChanged(const QString &arg1)
{
    QString src=ui->search->text();
        QSqlQuery * query=new QSqlQuery;
        query->prepare("SELECT * FROM TRAITEURS WHERE NOM=:src OR ID=:src OR EMAIL=:src");
        query->bindValue(":src",src);
        QSqlQueryModel * model= new QSqlQueryModel;
        if (query->exec() and src!=""){
        model->setQuery(*query);
        model->setHeaderData(0,Qt::Horizontal,"nom");
        model->setHeaderData(1,Qt::Horizontal,"id");
        model->setHeaderData(2,Qt::Horizontal,"email");
        model->setHeaderData(3,Qt::Horizontal,"comission");
        ui->TableTrait->setModel(model);
        tempTrait.afficher();
        }
     else if(src=="") ui->TableTrait->setModel(tempTrait.afficher());
}
void MainWindow::exporter(){
    QString strStream;
                QTextStream out(&strStream);

                 const int rowCount = ui->TablePatiss->model()->rowCount();
                 const int columnCount = ui->TablePatiss->model()->columnCount();
                out <<  "<html>\n"
                "<head>\n"
                                 "<meta Content=\"Text/html; charset=Windows-1251\">\n"
                                 <<  QString("<title>%1</title>\n").arg("strTitle")
                                 <<  "</head>\n"
                                 "<body bgcolor=#ffffff link=#5000A0>\n"

                                //     "<align='right'> " << datefich << "</align>"
                                 "<center> <H1>Liste des patisseries </H1></br></br><table border=1 cellspacing=0 cellpadding=2>\n";

                             // headers
                             out << "<thead><tr bgcolor=#f0f0f0> <th>Numero</th>";
                             out<<"<cellspacing=10 cellpadding=3>";
                             for (int column = 0; column < columnCount; column++)
                                 if (!ui->TablePatiss->isColumnHidden(column))
                                     out << QString("<th>%1</th>").arg(ui->TablePatiss->model()->headerData(column, Qt::Horizontal).toString());
                             out << "</tr></thead>\n";

                             // data table
                             for (int row = 0; row < rowCount; row++) {
                                 out << "<tr> <td bkcolor=0>" << row+1 <<"</td>";
                                 for (int column = 0; column < columnCount; column++) {
                                     if (!ui->TablePatiss->isColumnHidden(column)) {
                                         QString data = ui->TablePatiss->model()->data(ui->TablePatiss->model()->index(row, column)).toString().simplified();
                                         out << QString("<td bkcolor=0>%1</td>").arg((!data.isEmpty()) ? data : QString("&nbsp;"));
                                     }
                                 }
                                 out << "</tr>\n";
                             }
                             out <<  "</table> </center>\n"
                                 "</body>\n"
                                 "</html>\n";

                       QString fileName = QFileDialog::getSaveFileName((QWidget* )0, "Sauvegarder en PDF", QString(), "*.pdf");
                         if (QFileInfo(fileName).suffix().isEmpty()) { fileName.append(".pdf"); }

                        QPrinter printer (QPrinter::PrinterResolution);
                         printer.setOutputFormat(QPrinter::PdfFormat);
                        printer.setPaperSize(QPrinter::A4);
                       printer.setOutputFileName(fileName);

                        QTextDocument doc;
                         doc.setHtml(strStream);
                         doc.setPageSize(printer.pageRect().size()); // This is necessary if you want to hide the page number
                         doc.print(&printer);
}

void MainWindow::print(){
    QPrinter printer;
    printer.setPrinterName("desiered printer name");
    QPrintDialog dialog(&printer,this);
    if(dialog.exec()== QDialog::Rejected)
                   return;
}

void MainWindow::on_toolButton_9_clicked()
{
    ui->TablePatiss->setModel(tempPatiss.trierA());
}

void MainWindow::on_toolButton_10_clicked()
{
    ui->TablePatiss->setModel(tempPatiss.trierB());

}

void MainWindow::on_toolButton_13_clicked()
{
    exporter();
}

void MainWindow::on_toolButton_14_clicked()
{
    print();
}

void MainWindow::on_toolButton_16_clicked()
{
    ui->pages->setCurrentIndex(1);
}

void MainWindow::on_toolButton_15_clicked()
{
    ui->pages->setCurrentIndex(18);
    ui->tableart->setModel(tempArt.afficher());
}

void MainWindow::on_toolButton_17_clicked()
{
    ui->pages->setCurrentIndex(16);
}

void MainWindow::on_pushButton_5_clicked()
{
    ui->pages->setCurrentIndex(19);
    ui->tablecmd->setModel(tempCmd.afficher());
    QSqlQuery *q=new QSqlQuery;
    QSqlQueryModel * model=new QSqlQueryModel;
    q->prepare("SELECT ID FROM TRAITEURS");
     q->exec();
    model->setQuery(*q);
    ui->trait->setModel(model);
    QSqlQuery *q1=new QSqlQuery;
    QSqlQueryModel * model1=new QSqlQueryModel;
    q1->prepare("SELECT IDART FROM ARTICLES");
     q1->exec();
    model1->setQuery(*q1);
    ui->art->setModel(model1);
}

void MainWindow::on_TableTrait_activated(const QModelIndex &index)
{
    QString val = ui->TableTrait->model()->data(index).toString();
        //int n=ui->tableView->model()->data(index).toInt();
        /*
        QString search=ui->lindedit->text().toString;

         */
        QSqlQuery query,quer;
         query.prepare("select * from traiteurs where NOM=:id or ID=:id  or EMAIL=:id");
         //quer.prepare("select * from patisseries where ECHELLE_QUAL=:n or NBPRVENDUS=:n");
         query.bindValue(":id",val);
         //
         //query.bindValue(":n",n);
        if (query.exec())
        {

            while (query.next())
            {
                ui->nomtrait->setText(query.value(0).toString());
                ui->idtrait->setText(query.value(1).toString());
                ui->mailtrait->setText(query.value(2).toString());
                ui->comission->setText(query.value(3).toString());

            }

        }
        else
        {
            QMessageBox::critical(nullptr,QObject::tr("error \n"),QObject::tr("de selection"));
        }

}

void MainWindow::on_ajoutart_clicked()
{
    QString id,nm,type;
       int qte,pu;
       id=ui->idart->text();
       nm=ui->nomart->text();
       type=ui->type->currentText();
       qte=ui->qte->text().toInt();
       pu=ui->pu->text().toInt();
       article art(id,nm,type,qte,pu);
       art.ajouter();
       ui->tableart->setModel(tempArt.afficher());
}

void MainWindow::on_suppart_clicked()
{
    //supression article
    QString id=ui->idart->text();
    article art;
    bool test=art.supprimer(id);
    if (test){
        ui->tableart->setModel(tempArt.afficher());
        QMessageBox::information(nullptr, QObject::tr("Supprimer un article!"),
                                 QObject::tr(" Article supprimé ! \n"
                                             "Click Cancel to exit."), QMessageBox::Cancel);
            }
    else {
        QMessageBox::critical(nullptr, QObject::tr("Supprimer un article"),
                              QObject::tr("Erreur !.\n"
                                          "Click Cancel to exit."), QMessageBox::Cancel);
    }


}

void MainWindow::on_modifart_clicked()
{
    //modification article
    QString id=ui->idart->text();
    QString nom=ui->nomart->text();
    int qte=ui->qte->text().toInt();
    int pu=ui->pu->text().toInt();
    QString type=ui->type->currentText();
    article art(nom,id,type,qte,pu);
    bool test=art.modifier(art.getidart(),art.getnomart(),art.gettype(),art.getqte(),art.getpu());
    if (test){
        ui->tableart->setModel(tempArt.afficher());
        QMessageBox::information(nullptr, QObject::tr("Modfier un article!"),
                                 QObject::tr(" Article modifié ! \n"
                                             "Click Cancel to exit."), QMessageBox::Cancel);
            }
    else {
        QMessageBox::critical(nullptr, QObject::tr("Modifier un article"),
                              QObject::tr("Erreur !.\n"
                                          "Click Cancel to exit."), QMessageBox::Cancel);
    }


}

void MainWindow::on_ajoutcmd_clicked()
{
    QString id,desc,trait,art;
    int qte,prix;
    id=ui->idcmd->text();
    desc=ui->desccmd->toPlainText();
    trait=ui->trait->currentText();
    art=ui->art->currentText();
    QSqlQuery * q=new QSqlQuery;
    q->prepare("SELECT PU FROM ARTICLES WHERE IDART=:id");
    q->bindValue(":id",art);
    q->exec();
    int pu=q->value(3).toInt();
    qte=ui->qte1->text().toInt();
    prix=pu*qte;
    qDebug()<<" prix total "<<prix<<endl;
    commande cmd(id,desc,trait,art,qte,prix);
    cmd.ajouter();
    ui->tablecmd->setModel(tempCmd.afficher());
}

void MainWindow::on_suppcmd_clicked()
{
    QString icmd=ui->idcmd->text();
    commande cmd;
    bool test=cmd.supprimer(icmd);
    if (test){
            ui->tablecmd->setModel(tempCmd.afficher());
            QMessageBox::information(nullptr, QObject::tr("Supprimer un article!"),
                                     QObject::tr(" Article supprimé ! \n"
                                                 "Click Cancel to exit."), QMessageBox::Cancel);
                }
        else {
            QMessageBox::critical(nullptr, QObject::tr("Supprimer un article"),
                                  QObject::tr("Erreur !.\n"
                                              "Click Cancel to exit."), QMessageBox::Cancel);
        }
}

void MainWindow::on_modifcmd_clicked()
{
    QString id,desc,art,trait;
    int qte=ui->qte1->text().toInt();
    id=ui->idcmd->text();
    desc=ui->desccmd->toPlainText();
    art=ui->art->currentText();
    trait=ui->trait->currentText();
    QSqlQuery * q=new QSqlQuery;
    q->prepare("SELECT PU FROM ARTICLES WHERE IDART=:id");
    q->bindValue(":id",art);
    q->exec();
    int pu=q->value(3).toInt();
    qte=ui->qte1->text().toInt();
    int prix=pu*qte;
    qDebug()<<" prix total "<<prix<<endl;
    commande cmd2(id,desc,trait,art,qte,prix);
    bool test=cmd2.modifier(cmd2.getidcmd());
    if (test){
            ui->tablecmd->setModel(tempCmd.afficher());
            QMessageBox::information(nullptr, QObject::tr("Modifier une commande!"),
                                     QObject::tr(" Commande modifié ! \n"
                                                 "Click Cancel to exit."), QMessageBox::Cancel);
                }
        else {
            QMessageBox::critical(nullptr, QObject::tr("Modifier commande"),
                                  QObject::tr("Erreur !.\n"
                                              "Click Cancel to exit."), QMessageBox::Cancel);
        }
}

void MainWindow::show_tables()
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

            //pour tache
            proxyt = new QSortFilterProxyModel();
            proxyt->setSourceModel(tempTache.afficher());
            proxyt->setFilterCaseSensitivity(Qt::CaseInsensitive);
            proxyt->setFilterKeyColumn(-1);
            ui->tableTache->setModel(proxyt);

            //pour grade
            proxyg = new QSortFilterProxyModel();
            proxyg->setSourceModel(tempGrade.afficher());
            proxyg->setFilterCaseSensitivity(Qt::CaseInsensitive);
            proxyg->setFilterKeyColumn(-1);
            ui->tableGrade->setModel(proxyg);
}
void MainWindow::on_AjouterPerso_clicked()
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

           QMessageBox::information(nullptr,"Ajout Personnel","Personnel ajouté");
       }
       else
       {
           QMessageBox::warning(nullptr,"Ajout Personnel","Personnel non ajouté");
       }
}


void MainWindow::on_SupprimerPerso_clicked()
{
    int i = ui->lineEdit_CINmod_supp->text().toInt();
        bool test =tempPerso.supprimer(i);
        show_tables();
        if(test)
        {

            QMessageBox::information(nullptr,"Suppression Personnel","Personnel supprimé");
        }
        else
        {
            QMessageBox::warning(nullptr,"Suppression Personnel","Personnel non supprimé");
        }
}

void MainWindow::fill_form(int i)
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


void MainWindow::on_ModifierPerso_clicked()
{
    int C =ui->lineEdit_supp->text().toInt();
           MainWindow d(this);
           d.fill_form(C);
       QString N =ui->lineEdit_nomp->text();
       QString P =ui->lineEdit_prenomp->text();
       QString D =ui->lineEdit_datenp->text();
       QString M =ui->lineEdit_mail->text();
       int T =ui->lineEdit_tel->text().toInt();
       int  NbM =ui->lineEdit_nbmar->text().toInt();
       Personnel Per(C,N,P,D,M,T,NbM);
       bool test =Per.modifier(C);
       show_tables();
       if(test)
       {

           QMessageBox::information(nullptr,"Modification Personnel","Personnel modifié");
       }
       else
       {
           QMessageBox::warning(nullptr,"Modification Personnel","Personnel non modifié");
       }

}


void MainWindow::on_RechercherPerso_textChanged(const QString &arg1)
{
     proxy->setFilterFixedString(arg1);
}

void MainWindow::on_AjouterTache_clicked()
{
    QString N=ui->lineEdit_NomT->text();
       QString E =ui->lineEdit_EtatT->text();
       QString D =ui->lineEdit_DateLimitT->text();
       int I =ui->lineEdit_IDP->text().toInt();

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

void MainWindow::on_SupprimerTache_clicked()
{
    Tache T;
       QString n=ui->NomTSuppMod->text();
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



void MainWindow::fill_formTache(QString N)
{
    QSqlQuery query;
        query.prepare("select *from TAche where NomT=:NomT");

        query.bindValue(":NomT",N);
        query.exec();
        while(query.next())
        {
            ui->lineEdit_NomT->setText(query.value(N).toString());
            ui->lineEdit_EtatT->setText(query.value(1).toString());
            ui->lineEdit_DateLimitT->setText(query.value(2).toString());
            ui->lineEdit_IDP->setText(query.value(3).toString());
       }
}
void MainWindow::on_ModifierTache_clicked()
{
    QString N =ui->NomTSuppMod->text();
           MainWindow d(this);
           d.fill_formTache(N);
       QString E =ui->lineEdit_EtatT->text();
       QString D =ui->lineEdit_DateLimitT->text();
       int I =ui->lineEdit_IDP->text().toInt();

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

void MainWindow::on_ExportExcelTache_clicked()
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

void MainWindow::on_EmailTache_clicked()
{
   MailT m;
   m.exec();
}

void MainWindow::on_pushButton_PDF_Perso_clicked()
{
    QString strStream;
                    QTextStream out(&strStream);

                    const int rowCount = ui->tablePerso->model()->rowCount();
                    const int columnCount = ui->tablePerso->model()->columnCount();

                    out <<  "<html>\n"
                        "<head>\n"
                        "<meta Content=\"Text/html; charset=Windows-1251\">\n"
                        <<  QString("<title>%1</title>\n").arg("strTitle")
                        <<  "</head>\n"
                        "<body bgcolor=#ffffff link=#5000A0>\n"

                       //     "<align='right'> " << datefich << "</align>"
                        "<center> <H1>Liste des Personnels </H1></br></br><table border=1 cellspacing=0 cellpadding=2>\n";

                    // headers
                    out << "<thead><tr bgcolor=#f0f0f0> <th>Numero</th>";
                    for (int column = 0; column < columnCount; column++)
                        if (!ui->tablePerso->isColumnHidden(column))
                            out << QString("<th>%1</th>").arg(ui->tablePerso->model()->headerData(column, Qt::Horizontal).toString());
                    out << "</tr></thead>\n";

                    // data table
                    for (int row = 0; row < rowCount; row++) {
                        out << "<tr> <td bkcolor=0>" << row+1 <<"</td>";
                        for (int column = 0; column < columnCount; column++) {
                            if (!ui->tablePerso->isColumnHidden(column)) {
                                QString data = ui->tablePerso->model()->data(ui->tablePerso->model()->index(row, column)).toString().simplified();
                                out << QString("<td bkcolor=0>%1</td>").arg((!data.isEmpty()) ? data : QString("&nbsp;"));
                            }
                        }
                        out << "</tr>\n";
                    }
                    out <<  "</table> </center>\n"
                        "</body>\n"
                        "</html>\n";

              QString fileName = QFileDialog::getSaveFileName((QWidget* )0, "Sauvegarder en PDF", QString(), "*.pdf");
                if (QFileInfo(fileName).suffix().isEmpty()) { fileName.append(".pdf"); }

               QPrinter printer (QPrinter::PrinterResolution);
                printer.setOutputFormat(QPrinter::PdfFormat);
               printer.setPaperSize(QPrinter::A4);
              printer.setOutputFileName(fileName);

               QTextDocument doc;
                doc.setHtml(strStream);
                doc.setPageSize(printer.pageRect().size());
                doc.print(&printer);
}

void MainWindow::on_AjouterGrade_clicked()
{
       QString Gr=ui->lineEdit_NomGrade->text();
       QString DEmb =ui->lineEdit_DateEmbauche->text();
       QString SG =ui->lineEdit_SalaireGrade->text();
       int IG =ui->lineEdit_IDPG->text().toInt();

       Grade G(Gr,DEmb,SG,IG);
       bool test =G.ajouter();
        show_tables();
       if(test)
       {

           QMessageBox::information(nullptr,"Ajout Grade"," Grade ajouté");
       }
       else
       {
           QMessageBox::warning(nullptr,"Ajout Grade","Grade non ajouté");
       }
}


void MainWindow::on_SupprimerGrade_clicked()
{
    Grade G;
    QString n=ui->lineEdit_NomGSupMod->text();
    bool test =G.supprimer(n);
    show_tables();
    if(test)
    {

        QMessageBox::information(nullptr,"Suppression Grade ","Grade supprimé");
    }
    else
    {
        QMessageBox::warning(nullptr,"Suppression Grade","Grade non supprimé");
    }
}


void MainWindow::fill_formGrade(QString Gr)
{
    QSqlQuery query;
    query.prepare("select *from Grade where NomGrade=:NomGrade");

    query.bindValue(":NomGrade",Gr);
    query.exec();
    while(query.next())
    {
        ui->lineEdit_NomGrade->setText(query.value(Gr).toString());
        ui->lineEdit_DateEmbauche->setText(query.value(1).toString());
        ui->lineEdit_SalaireGrade->setText(query.value(2).toString());
        ui->lineEdit_IDPG->setText(query.value(3).toString());
   }
}
void MainWindow::on_ModifierGrade_clicked()
{
    QString Gr =ui->lineEdit_NomGSupMod->text();
        MainWindow d(this);
        d.fill_formGrade(Gr);
    QString DEmb =ui->lineEdit_DateEmbauche->text();
    QString SG =ui->lineEdit_SalaireGrade->text();
    int IG =ui->lineEdit_IDPG->text().toInt();

    Grade G(Gr,DEmb,SG,IG);
    bool test =G.modifier(Gr);

    if(test)
    {

        QMessageBox::information(nullptr,"Modification Grade","Grade modifié");
    }
    else
    {
        QMessageBox::warning(nullptr,"Modification Grade","Grade non modifié");
    }
     show_tables();
}

void MainWindow::on_RechercherGrade_textChanged(const QString &arg1)
{
     proxyg->setFilterFixedString(arg1);
}

void MainWindow::on_ON_Cgaz_clicked()
{
    a.write_to_arduino("1");
}


void MainWindow::on_OFF_Cgaz_clicked()
{
     a.write_to_arduino("0");
}

void MainWindow::on_RessourcesHumaine_clicked()
{
  ui->pages->setCurrentIndex(2);
}

void MainWindow::on_pushButton_RetourRHMenu_clicked()
{
  ui->pages->setCurrentIndex(16);
}

void  MainWindow::browse()//mail
{
    files.clear();

    QFileDialog dialog(this);
    dialog.setDirectory(QDir::homePath());
    dialog.setFileMode(QFileDialog::ExistingFiles);

    if (dialog.exec())
        files = dialog.selectedFiles();

    QString fileListString;
    foreach(QString file, files)
        fileListString.append( "\"" + QFileInfo(file).fileName() + "\" " );

    ui->file->setText( fileListString );

}

void   MainWindow::sendMail()//send mail
{
    Smtp* smtp = new Smtp("siwar.dhrif@esprit.tn",ui->mail_pass->text(), "smtp.gmail.com");
    connect(smtp, SIGNAL(status(QString)), this, SLOT(mailSent(QString)));

    if( !files.isEmpty() )
        smtp->sendMail("siwar.dhrif@esprit.tn", ui->rcpt->text() , ui->subject->text(),ui->msg->toPlainText(), files );
    else
        smtp->sendMail("siwar.dhrif@esprit.tn", ui->rcpt->text() , ui->subject->text(),ui->msg->toPlainText());
}
void   MainWindow::mailSent(QString status)//mail sent
{

    if(status == "Message sent")
        QMessageBox::warning( nullptr, tr( "Qt Simple SMTP client" ), tr( "Message sent!\n\n" ) );
    ui->rcpt->clear();
    ui->subject->clear();
    ui->file->clear();
    ui->msg->clear();
    ui->mail_pass->clear();
}

void MainWindow::on_ImprimerListeGrade_clicked()
{
    QPrinter printer;

                printer.setPrinterName("desiered printer name");

              QPrintDialog dialog(&printer,this);

                if(dialog.exec()== QDialog::Rejected)

                    return;
}
