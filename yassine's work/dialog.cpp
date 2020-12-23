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


#include <QPrintDialog>
#include"QPainter"
#include"QPdfWriter"
#include"QDesktopServices"
#include"QtPrintSupport/QPrinter"
#include <QPropertyAnimation>
#include<QTextDocument>
#include<QFileDialog>



Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->tableView_Promotions_consulter->setModel(P.afficher());
    ui->tableView_packs_consulter->setModel(PA.afficher());
    ui->tableView_vente->setModel(V.afficher());




}

Dialog::~Dialog()
{
    delete ui;

}






void Dialog::on_pushButton__valider_promotions_ajouter_clicked()
{
    QMediaPlayer *player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("C:/Users/LENOVO/Desktop/marketing/back.mp3"));
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
{    QMediaPlayer *player = new QMediaPlayer;
     player->setMedia(QUrl::fromLocalFile("C:/Users/LENOVO/Desktop/marketing/button.mp3"));
     player->setVolume(2000);
     player->play();
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
{    QMediaPlayer *player = new QMediaPlayer;
     player->setMedia(QUrl::fromLocalFile("C:/Users/LENOVO/Desktop/marketing/button.mp3"));
     player->setVolume(2000);
     player->play();
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
    QString c = ui->lineEdit_Categorie_Packs_Ajouter->text();
    QString l = ui->lineEdit_Liste_Packs_Ajouter->text();
    int prix_i= ui->lineEdit_prix_initial_packs_ajouter->text().toInt();
    pack PA(iP,c,l,prix_i);
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
    QSqlQuery qry ;

        int id_pack,prix_initial ;
         QString categorie,liste;
        id_pack=ui->lineEdit_ID_Packs_Ajouter->text().toInt();
        categorie=ui->lineEdit_Categorie_Packs_Ajouter->text();
         liste=ui->lineEdit_Liste_Packs_Ajouter->text();
         prix_initial=ui->lineEdit_prix_initial_packs_ajouter->text().toInt();

        pack PA(id_pack,categorie,liste,prix_initial);
             bool test=PA.modifier(id_pack);
             if (test)
             {  ui->tableView_packs_consulter->setModel(PA.afficher());
                 QMessageBox::information(nullptr,QObject::tr("Modifier un pack"),
                                                  QObject::tr("Pack Modifié .\n"
                                                              "Click Cancel to exit ."),QMessageBox::Cancel);

              }
         else
         {
                 QMessageBox::critical(nullptr,QObject::tr("Modifier un pack"),
                                                  QObject::tr("Erreur.\n"
                                                              "Click Cancel to exit ."),QMessageBox::Cancel);
            }


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


void Dialog::on_pushButton_pdf_clicked()
{


    QString strStream;
                    QTextStream out(&strStream);

                    const int rowCount = ui->tableView_packs_consulter->model()->rowCount();
                    const int columnCount = ui->tableView_packs_consulter->model()->columnCount();

                    out <<  "<html>\n"
                        "<head>\n"
                        "<meta Content=\"Text/html; charset=Windows-1251\">\n"
                        <<  QString("<title>%1</title>\n").arg("strTitle")
                        <<  "</head>\n"
                        "<body bgcolor=#ffffff link=#5000A0>\n"

                       //     "<align='right'> " << datefich << "</align>"
                        "<center> <H1>Liste des packs </H1></br></br><table border=1 cellspacing=0 cellpadding=2>\n";

                    // headers
                    out << "<thead><tr bgcolor=#f0f0f0> <th>Numero</th>";
                    for (int column = 0; column < columnCount; column++)
                        if (!ui->tableView_packs_consulter->isColumnHidden(column))
                            out << QString("<th>%1</th>").arg(ui->tableView_packs_consulter->model()->headerData(column, Qt::Horizontal).toString());
                    out << "</tr></thead>\n";

                    // data table
                    for (int row = 0; row < rowCount; row++) {
                        out << "<tr> <td bkcolor=0>" << row+1 <<"</td>";
                        for (int column = 0; column < columnCount; column++) {
                            if (!ui->tableView_packs_consulter->isColumnHidden(column)) {
                                QString data = ui->tableView_packs_consulter->model()->data(ui->tableView_packs_consulter->model()->index(row, column)).toString().simplified();
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

void Dialog::on_pushButton_imprimer_liste_promotions_clicked()
{
    QPrinter printer;

        printer.setPrinterName("desiered printer name");

      QPrintDialog dialog(&printer,this);

        if(dialog.exec()== QDialog::Rejected)

            return;
}

void Dialog::on_pushButto_ajouter_vente_clicked()
{


    int id_v = ui->lineEdit_ID_vente->text().toInt();
    int prix_v = ui->lineEdit_Prix_final_vente->text().toInt();
    vente  V(id_v,prix_v);
    bool test = V.ajouter();
    if(test)
    {    ui->tableView_vente->setModel(V.afficher());
        QMessageBox::information(nullptr,"Ajout promotion","Promotion ajoutée");

    }
    else
    {
        QMessageBox::warning(nullptr,"Ajout promotion","Promotion non ajoutée");
    }
}


