#include "fenetre.h"
#include "ui_fenetre.h"
#include "mainwindow.h"
#include "patisserie.h"
#include <QtMultimedia/qmediaplayer.h>
#include <mainwindow.h>
#include <qtableview.h>
#include <QModelIndex>
#include <qfile.h>
#include <qfiledialog.h>
#include <QtPrintSupport/qprinter.h>
#include <qwidget.h>
#include <QtWidgets>
#include <QPushButton>
#include <QSqlTableModel>
#include <QPrintDialog>
#include <qvalidator.h>
#include<QPdfWriter>
#include <QPainter>
#include<QFileDialog>
#include <QString>
fenetre::fenetre(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fenetre)
{
    ui->setupUi(this);
    setWindowTitle("The BIG DAY : Patisserie et Traiteurs");
    QString str="C:/Users/ghaba/Downloads/wedding_rings.png";
    //QIcon icon;
          //  QIcon::addFile(str);
    //setWindowIcon(icon);
    ui->tableView->setModel(tempPatiss.afficher());
    ui->tableView_2->setModel(tempTrait.afficher());
    player=new QMediaPlayer(this);
    ui->stackedWidget->setCurrentIndex(0);

    //int selected=0;
   // while(selected==0){
  //  selected=ui->tableView->selectionModel()->selectedRows().count();

    QModelIndex index=ui->tableView->selectionModel()->currentIndex();
     QString nomm=index.sibling(index.row(),0).data().toString();
    QString idd=index.sibling(index.row(),1).data().toString();
    int echh=index.sibling(index.row(),2).data().toInt();
    QString adr=index.sibling(index.row(),3).data().toString();
    QString mail=index.sibling(index.row(),4).data().toString();
    QString ech=QString::number(echh);
    ui->lineEdit_2->setText(nomm);
    ui->lineEdit->setText(idd);
    ui->lineEdit_3->setText(ech);
    ui->lineEdit_5->setText(adr);
    ui->lineEdit_6->setText(mail);

}

fenetre::~fenetre()
{
    delete ui;
}

void fenetre::on_pushButton_3_clicked()
{
    player->setMedia(QUrl::fromLocalFile("C:/Users/ghaba/Downloads/click.wav"));
    player->play();
    qDebug()<< player->errorString();

    close();

}

void fenetre::on_pushButton_2_clicked() //button ajouter
{
    player->setMedia(QUrl::fromLocalFile("C:/Users/ghaba/Downloads/click.wav"));
    player->play();
    qDebug()<< player->errorString();
    QString nom=ui->lineEdit_2->text();
    QString id=ui->lineEdit->text();
    float echelle=ui->lineEdit_3->text().toFloat();
    //long nb=ui->lineEdit_4->text().toInt();
    QString adr=ui->lineEdit_5->text();
    QString mail=ui->lineEdit_6->text();
    patisserie p(nom,id,echelle,0,adr,mail);
    bool test=p.ajouter();
     if(test){
         ui->tableView->setModel(tempPatiss.afficher());
         QMessageBox::information(nullptr,"ajout patisserie","Patisserie ajoutée avec succes.");
     }
     else QMessageBox::warning(nullptr,"ajout patisserie","Patisserie non ajoutée.");
}

void fenetre::on_pushButton_clicked()
{
//ui->setStyleSheet("border-image:url(C:/Users/ghaba/Desktop/pen.jpg);");
}

void fenetre::on_pushButton_4_clicked()

{  player->setMedia(QUrl::fromLocalFile("C:/Users/ghaba/Downloads/click.wav"));
    player->play();
    qDebug()<< player->errorString();
    ui->stackedWidget->setCurrentIndex(1);
}

void fenetre::on_supp1_clicked()
{
    player->setMedia(QUrl::fromLocalFile("C:/Users/ghaba/Downloads/click.wav"));
    player->play();
    qDebug()<< player->errorString();
 QString i = ui->lineEdit->text();
 bool test = tempPatiss.supprimer(i);

 if (i=="")
     test=false;
 if(test){
     ui->tableView->setModel(tempPatiss.afficher());
     QMessageBox::information(nullptr,"supression patisserie","Patisserie supprimée avec succes.");

 }
 else QMessageBox::warning(nullptr,"supression patisserie","Patisserie non supprimée.");
}

void fenetre::on_pushButton_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
    player->setMedia(QUrl::fromLocalFile("C:/Users/ghaba/Downloads/click.wav"));
    player->play();
    qDebug()<< player->errorString();

}

void fenetre::on_pushButton_6_clicked()
{
    player->setMedia(QUrl::fromLocalFile("C:/Users/ghaba/Downloads/click.wav"));
    player->play();
    qDebug()<< player->errorString();
    QString nom=ui->lineEditnom->text();
    QString id=ui->lineEditID->text();
    QString mail=ui->lineEditEmail->text();
    int com=ui->lineEditComission->text().toInt();
    traiteur t(nom,id,mail,com);
    bool test=t.ajouter();
    if(test){
        ui->tableView_2->setModel(tempTrait.afficher());
        QMessageBox::information(nullptr,"ajout traiteur","traiteur ajouté avec succes.");
    }
    else QMessageBox::warning(nullptr,"ajout traiteur","traiteur non ajouté.");
}

void fenetre::on_pushButton_7_clicked()
{
    player->setMedia(QUrl::fromLocalFile("C:/Users/ghaba/Downloads/click.wav"));
    player->play();
    qDebug()<< player->errorString();
    QString i = ui->lineEditID->text();
    bool test = tempTrait.supprimer(i);

    if (i=="")
        test=false;
    if(test){
        ui->tableView_2->setModel(tempTrait.afficher());
        QMessageBox::information(nullptr,"supression traiteur","traiteur supprimée avec succes.");

    }
    else QMessageBox::warning(nullptr,"supression traiteur","traiteur non supprimée.");
   }


void fenetre::on_modif1_clicked()
{  player->setMedia(QUrl::fromLocalFile("C:/Users/ghaba/Downloads/click.wav"));
    player->play();
    qDebug()<< player->errorString();
    QString nom= ui->lineEdit_2->text();  //lineEdit_nouv_nom
            QString id = ui->lineEdit->text(); //lineEdit_id_eventmodif
            int ech=ui->lineEdit_3->text().toInt(); //lineEdit_nouv_idsalle
            QString adr=ui->lineEdit_5->text();
            QString mail=ui->lineEdit_6->text();
            patisserie p(nom,id,ech,0,adr,mail);
             bool test=p.supprimer(p.getid());
             bool test2=p.ajouter();
            if(test and test2)
            {
                ui->tableView->setModel(tempPatiss.afficher());//refresh
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


/*void fenetre::on_pushButton_9_clicked()
{
    QModelIndex index=ui->tableView->selectionModel()->currentIndex();
    int r=index.row();
    QString nomm=index.sibling(r,0).data().toString();
    QString idd=index.sibling(r,1).data().toString();
    int echh=index.sibling(r,2).data().toInt();
    QString adr=index.sibling(r,3).data().toString();
    QString mail=index.sibling(r,4).data().toString();
    QString ech=QString::number(echh);
    ui->lineEdit_2->setText(nomm);
    ui->lineEdit->setText(idd);
    ui->lineEdit_3->setText(ech);
    ui->lineEdit_5->setText(adr);
    ui->lineEdit_6->setText(mail);
    QString nom=ui->lineEdit_2->text();
    QString id=ui->lineEdit->text();
    int ech=ui->lineEdit_3->text().toInt();
    QString adr=ui->lineEdit_5->text();
    QString mail=ui->lineEdit_6->text();
    patisserie p(nom,id,ech,0,adr,mail);
    bool tes=p.modifier(nom,id,ech,adr,mail);
    if(tes){
        ui->tableView->setModel(tempPatiss.afficher());
        QMessageBox::information(nullptr,"modifier","modifié");
    }
    else QMessageBox::critical(nullptr,"modifier","non modifié");
}*/

void fenetre::on_pushButton_8_clicked()
{
    player->setMedia(QUrl::fromLocalFile("C:/Users/ghaba/Downloads/click.wav"));
    player->play();
    qDebug()<< player->errorString();
            QString nom= ui->lineEditnom->text();  //lineEdit_nouv_nom
            QString id = ui->lineEditID->text(); //lineEdit_id_eventmodif
            QString email=ui->lineEditEmail->text();
            int comission=ui->lineEditComission->text().toInt();
           traiteur t(nom,id,email,comission);
           QSqlQuery quer;
           QString tempId=t.getid();
           quer.prepare("Select count(1) from PATISSERIES as 'exist' WHERE IDPATISS=:id ");
           quer.bindValue(":id",tempId);
             bool test3=quer.exec();
             int exist=quer.value(0).toInt();
             bool test=t.supprimer(t.getid());
             bool test2=t.ajouter();
            if(test and test2 and (exist>0) and test3)
            {
                ui->tableView_2->setModel(tempTrait.afficher());//refresh
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

void fenetre::on_pushButton_10_clicked()
{
    player->setMedia(QUrl::fromLocalFile("C:/Users/ghaba/Downloads/click.wav"));
    player->play();
    qDebug()<< player->errorString();
    ui->tableView_2->setModel(tempTrait.trierA());

}

void fenetre::on_pushButton_11_clicked()
{
    player->setMedia(QUrl::fromLocalFile("C:/Users/ghaba/Downloads/click.wav"));
    player->play();
    qDebug()<< player->errorString();
    ui->tableView_2->setModel(tempTrait.trierB());
}

void fenetre::on_pushButton_13_clicked()
{
    ui->tableView->setModel(tempPatiss.trierA());
}

void fenetre::on_pushButton_12_clicked()
{
    ui->tableView->setModel(tempPatiss.trierB());
}

void fenetre::exporter(){


    QString strStream;
            QTextStream out(&strStream);

             const int rowCount = ui->tableView->model()->rowCount();
             const int columnCount = ui->tableView->model()->columnCount();
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
                             if (!ui->tableView->isColumnHidden(column))
                                 out << QString("<th>%1</th>").arg(ui->tableView->model()->headerData(column, Qt::Horizontal).toString());
                         out << "</tr></thead>\n";

                         // data table
                         for (int row = 0; row < rowCount; row++) {
                             out << "<tr> <td bkcolor=0>" << row+1 <<"</td>";
                             for (int column = 0; column < columnCount; column++) {
                                 if (!ui->tableView->isColumnHidden(column)) {
                                     QString data = ui->tableView->model()->data(ui->tableView->model()->index(row, column)).toString().simplified();
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

//***************************************************************************

void fenetre::on_pushButton_9_clicked()   //*******exportation pdf********
{
    /*player->setMedia(QUrl::fromLocalFile("C:/Users/ghaba/Downloads/click.wav"));
    player->play();
    qDebug()<< player->errorString();
    QString fileName = QFileDialog::getSaveFileName((QWidget* )0, "Export PDF", QString(), "*.pdf");
       if (QFileInfo(fileName).suffix().isEmpty()) { fileName.append(".pdf"); }
       QPrinter printer(QPrinter::PrinterResolution);
          printer.setOutputFormat(QPrinter::PdfFormat);
          printer.setPaperSize(QPrinter::A4);
          printer.setOutputFileName(fileName);
           QTextDocument doc("ffff",nullptr);

           int selected=ui->tableView->selectionModel()->selectedRows().count();
           QModelIndex index=ui->tableView->selectionModel()->currentIndex();
           QString sum,sum1;
           int row=ui->tableView->verticalHeader()->count();
           //int col=ui->tableView->horizontalHeader()->count();
           for(int j=1;j<=row;j++){
               for(int k=0;k<5;k++)
                   sum1=sum1+index.sibling(j,k).data().toString()+" - ";

               sum=sum+ "\n" + sum1;
            }
           doc.setHtml(sum);
           doc.setPageSize(printer.pageRect().size()); // This is necessary if you want to hide the page number
              doc.print(&printer);*/
    exporter();
}
//****************************************************************************
void fenetre::print(){

    QPrinter printer;

            printer.setPrinterName("desiered printer name");

          QPrintDialog dialog(&printer,this);

            if(dialog.exec()== QDialog::Rejected)

                return;
}

void fenetre::on_pushButton_14_clicked()
{
    print();
}

void fenetre::on_tableView_activated(const QModelIndex &index)
{
    patisserie p;
        QString val = ui->tableView->model()->data(index).toString();
        int n=ui->tableView->model()->data(index).toString().toInt();
        QString id=p.getid();

        QSqlQuery query;
         query.prepare("select * from patisseries where NOMPATISS=:id or ECHELLE_QUAL=:n or NBPRVENDUS=:n or IDPATISS=:id or ADRESSE=:id or EMAIL=:id");
         query.bindValue(":id",val);
         query.bindValue(":n",n);
        if (query.exec())
        {
            while (query.next())
            {
                ui->lineEdit_2->setText(query.value(0).toString());
                ui->lineEdit->setText(query.value(1).toString());
                ui->lineEdit_3->setText(query.value(2).toString());
                ui->lineEdit_5->setText(query.value(3).toString());
                ui->lineEdit_6->setText(query.value(4).toString());

            }
        }
        else
        {
            //QMessageBox::critical(nullptr,"error");
        }

}
