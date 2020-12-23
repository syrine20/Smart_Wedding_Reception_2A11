#include "organisation.h"
#include "ui_organisation.h"
#include "salle.h"
#include <QMessageBox>
#include "connection.h"
#include "decorateur.h"
#include <QModelIndex>
#include<QSqlQueryModel>
#include <QDebug>
#include "smtp.h"
#include <QPrinter>
#include <QPrintDialog>
#include"QPdfWriter"
#include"QtPrintSupport/QPrinter"
#include"QPainter"
#include <QPrintDialog>
#include <QTextDocument>
#include <QPixmap>
Organisation::Organisation(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Organisation)
{
    ui->setupUi(this);

    int ret=A.connect_arduino();//lancer la cnx a arduino
    switch(ret)
    {case(0):qDebug()<<"arduino is available and connected to :"<<A.getarduino_port_name();
        break;
    case(1):qDebug()<<"arduino is avaiable but not connected to :"<<A.getarduino_port_name();
        break;
    case(-1):qDebug()<<"arduino is not available";
    }
    QObject::connect(A.getserial(),SIGNAL(readyRead()),this,SLOT(update_label()));


    ui->tablesalle->setModel(stmp.afficher());
    ui->tabledeco->setModel(dtmp.afficher());
    //photo on pushbutton
    ui->pushButton_onoff->setIcon(QIcon("C:/Users/ASUS/Documents/Organisation/resource/money.jpg"));
    ui->pushButton_40->setIcon(QIcon("C:/Users/ASUS/Documents/Organisation/resource/capacite.jpg"));
     ui->pushButton_25->setIcon(QIcon("C:/Users/ASUS/Documents/Organisation/resource/poubelle.jpg"));
     ui->pushButton_23->setIcon(QIcon("C:/Users/ASUS/Documents/Organisation/resource/update.jpg"));
     ui->pushButton_26->setIcon(QIcon("C:/Users/ASUS/Documents/Organisation/resource/ok.jpg"));
     ui->pushButton_17->setIcon(QIcon("C:/Users/ASUS/Documents/Organisation/resource/poubelle.jpg"));
      ui->pushButton_18->setIcon(QIcon("C:/Users/ASUS/Documents/Organisation/resource/update.jpg"));
      ui->pushButton_16->setIcon(QIcon("C:/Users/ASUS/Documents/Organisation/resource/mail.jpg"));
       ui->pushButton_24->setIcon(QIcon("C:/Users/ASUS/Documents/Organisation/resource/reserver.jpg"));
         ui->pushButton_28->setIcon(QIcon("C:/Users/ASUS/Documents/Organisation/resource/cherr.jpg"));
       ui->pushButton_22->setIcon(QIcon("C:/Users/ASUS/Documents/Organisation/resource/id.jpg"));
       ui->pushButton_41->setIcon(QIcon("C:/Users/ASUS/Documents/Organisation/resource/loca.jpg"));
          ui->pushButton_21->setIcon(QIcon("C:/Users/ASUS/Documents/Organisation/resource/retour.jpg"));
          ui->pushButton_42->setIcon(QIcon("C:/Users/ASUS/Documents/Organisation/resource/style.jpg"));
           ui->pushButton_19->setIcon(QIcon("C:/Users/ASUS/Documents/Organisation/resource/id.jpg"));
           ui->pushButton_43->setIcon(QIcon("C:/Users/ASUS/Documents/Organisation/resource/loca.jpg"));
           ui->pushButton_29->setIcon(QIcon("C:/Users/ASUS/Documents/Organisation/resource/retour.jpg"));
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
       player->setMedia(QUrl::fromLocalFile("C:/Users/ASUS/Documents/Organisation/resource/")) ;
       player->play() ;

}

Organisation::~Organisation()
{
    delete ui;
}
void Organisation::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void Organisation::on_pushButton_3_clicked()
{
     ui->stackedWidget->setCurrentIndex(2);
}

void Organisation::on_pushButton_2_clicked()
{
   close();
}

void Organisation::on_pushButton_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void Organisation::on_pushButton_6_clicked()
{
    ui->stackedWidget->setCurrentIndex(7);
}

void Organisation::on_pushButton_7_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}

void Organisation::on_pushButton_8_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void Organisation::on_pushButton_9_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
}

void Organisation::on_pushButton_10_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

void Organisation::on_pushButton_11_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void Organisation::on_pushButton_13_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void Organisation::on_pushButton_15_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void Organisation::on_pushButton_34_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void Organisation::on_pushButton_21_clicked()
{

      ui->tabledeco->setModel(dtmp.afficher());

}

void Organisation::on_pushButton_18_clicked()
{
    ui->stackedWidget->setCurrentIndex(11);
}

void Organisation::on_pushButton_16_clicked()
{
    ui->stackedWidget->setCurrentIndex(9);
}

void Organisation::on_pushButton_23_clicked()
{
    ui->stackedWidget->setCurrentIndex(8);
}

void Organisation::on_pushButton_24_clicked()
{
    ui->stackedWidget->setCurrentIndex(10);


}

void Organisation::on_pushButton_35_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void Organisation::on_pushButton_27_clicked()
{
    ui->stackedWidget->setCurrentIndex(7);
}

void Organisation::on_pushButton_29_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
}

void Organisation::on_pushButton_31_clicked()
{
    ui->stackedWidget->setCurrentIndex(7);
}

void Organisation::on_pushButton_33_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
}

void Organisation::on_pushButton_5_clicked()
{
    close();
}

void Organisation::on_pushButton_36_clicked()
{
    close();
}

void Organisation::on_pushButton_37_clicked()
{
    close();
}

void Organisation::on_pushButton_38_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void Organisation::on_pushButton_39_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void Organisation::on_pushButton_14_clicked()//ajouter salle
{
    ui->stackedWidget->setCurrentIndex(7);
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

void Organisation::on_pushButton_25_clicked()//supprimer salle
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


void Organisation::on_pushButton_12_clicked()//ajouter decorateur
{

    ui->stackedWidget->setCurrentIndex(6);

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


void Organisation::on_pushButton_17_clicked()//supprimer decorateur
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

void Organisation::on_pushButton_32_clicked()//modifier decorateur
{
     ui->stackedWidget->setCurrentIndex(6);


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

void Organisation::on_tabledeco_activated(const QModelIndex &index)// table decorateur
{
    QString val=ui->tabledeco->model()->data(index).toString();
    QSqlQuery query;
    query.prepare(" SELECT * FROM decorateur where ID='"+val+"'");
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

void Organisation::on_tablesalle_activated(const QModelIndex &index)// table salle
{
    QString val=ui->tablesalle->model()->data(index).toString();
    QSqlQuery query;
    query.prepare(" SELECT * FROM salle where ID='"+val+"'");
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

void Organisation::on_pushButton_26_clicked()//modifier salle
{
    ui->stackedWidget->setCurrentIndex(7);


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


void Organisation::on_pushButton_22_clicked()
{
    ui->tablesalle->setModel(stmp.afficher_tri_id());
}



void Organisation::on_pushButton_text_clicked()
{
    qDebug() <<"Clicked";
}

void Organisation::on_pushButton_onoff_toggled(bool checked)
{
    if(checked)
    {
         ui->pushButton_onoff->setIcon(QIcon("C:/Users/ASUS/Desktop/money.jpg"));
    }
}

void Organisation::on_pushButton_40_toggled(bool check)
{
    if(check)
    {
         ui->pushButton_40->setIcon(QIcon("C:/Users/ASUS/Desktop/capacite.jpg"));
        qDebug() <<"Button checked-- ON--";
    }
}

void Organisation::on_pushButton_onoff_clicked()
{
      ui->tablesalle->setModel(stmp.afficher_tri_prix());
}

void Organisation::on_pushButton_40_clicked()
{
    ui->tablesalle->setModel(stmp.afficher_tri_capacite());
}

void Organisation::on_pushButton_25_toggled(bool chec)
{
    if(chec)
    {
         ui->pushButton_25->setIcon(QIcon("C:/Users/ASUS/Desktop/poubelle.jpg"));
        qDebug() <<"Button checked-- ON--";
    }
}

void Organisation::on_pushButton_23_toggled(bool ch)
{
    if(ch)
    {
         ui->pushButton_23->setIcon(QIcon("C:/Users/ASUS/Desktop/update.jpg"));
        qDebug() <<"Button checked-- ON--";
    }
}

void Organisation::on_pushButton_26_toggled(bool ce)
{
    if(ce)
    {
         ui->pushButton_26->setIcon(QIcon("C:/Users/ASUS/Desktop/ok.jpg"));
        qDebug() <<"Button checked-- ON--";
    }
}

void Organisation::on_pushButton_17_toggled(bool k)
{
    if(k)
    {
         ui->pushButton_17->setIcon(QIcon("C:/Users/ASUS/Desktop/poubelle.jpg"));
        qDebug() <<"Button checked-- ON--";
    }
}

void Organisation::on_pushButton_18_toggled(bool h)
{
    if(h)
    {
         ui->pushButton_18->setIcon(QIcon("C:/Users/ASUS/Desktop/update.jpg"));
        qDebug() <<"Button checked-- ON--";
    }
}

void Organisation::on_pushButton_16_toggled(bool m)
{
    if(m)
    {
         ui->pushButton_16->setIcon(QIcon("C:/Users/ASUS/Desktop/mail.jpg"));
        qDebug() <<"Button checked-- ON--";
    }
}

void Organisation::on_pushButton_24_toggled(bool u)
{
    if(u)
    {
         ui->pushButton_24->setIcon(QIcon("C:/Users/ASUS/Desktop/reserver.jpg"));
        qDebug() <<"Button checked-- ON--";
    }
}


void Organisation::on_pushButton_22_toggled(bool p)
{
    if(p)
    {
         ui->pushButton_22->setIcon(QIcon("C:/Users/ASUS/Desktop/id.jpg"));
        qDebug() <<"Button checked-- ON--";
    }
}

void Organisation::on_pushButton_41_toggled(bool v)
{
    if(v)
    {
         ui->pushButton_41->setIcon(QIcon("C:/Users/ASUS/Desktop/loca.jpg"));
        qDebug() <<"Button checked-- ON--";
    }
}

void Organisation::on_pushButton_41_clicked()
{
    ui->tablesalle->setModel(stmp.afficher_tri_lieu());
}

void Organisation::on_pushButton_19_clicked()//chercher par id decorateur
{
    QMessageBox msgBox ;
            QSqlQueryModel *model = new QSqlQueryModel();
            QString cod;
            cod = ui->lineEdit_23->text();
            model->setQuery("Select * from decorateur where id = '"+cod+"' ");
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
            ui->lineEdit_23->clear();
}


void Organisation::on_pushButton_21_toggled(bool ed)
{
    if(ed)
    {
         ui->pushButton_21->setIcon(QIcon("C:/Users/ASUS/Desktop/retour.jpg"));
        qDebug() <<"Button checked-- ON--";
    }

}

void Organisation::on_pushButton_42_clicked()//chercher par style decorateur
{
    QMessageBox msgBox ;
            QSqlQueryModel *model = new QSqlQueryModel();
            QString code;
            code = ui->lineEdit_23->text();
            model->setQuery("Select * from decorateur where style = '"+code+"' ");
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
            ui->lineEdit_23->clear();
}
void  Organisation::browse()//mail
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

void   Organisation::sendMail()//send mail
{
    Smtp* smtp = new Smtp("siwar.dhrif@esprit.tn",ui->mail_pass->text(), "smtp.gmail.com");
    connect(smtp, SIGNAL(status(QString)), this, SLOT(mailSent(QString)));

    if( !files.isEmpty() )
        smtp->sendMail("siwar.dhrif@esprit.tn", ui->rcpt->text() , ui->subject->text(),ui->msg->toPlainText(), files );
    else
        smtp->sendMail("siwar.dhrif@esprit.tn", ui->rcpt->text() , ui->subject->text(),ui->msg->toPlainText());
}

void   Organisation::mailSent(QString status)//mail sent
{

    if(status == "Message sent")
        QMessageBox::warning( nullptr, tr( "Qt Simple SMTP client" ), tr( "Message sent!\n\n" ) );
    ui->rcpt->clear();
    ui->subject->clear();
    ui->file->clear();
    ui->msg->clear();
    ui->mail_pass->clear();
}

void Organisation::on_pushButton_28_toggled(bool y)
{
    if(y)
    {
         ui->pushButton_28->setIcon(QIcon("C:/Users/ASUS/Desktop/cherr.jpg"));
        qDebug() <<"Button checked-- ON--";
    }
}

void Organisation::on_pushButton_42_toggled(bool g)
{
    if(g)
    {
         ui->pushButton_42->setIcon(QIcon("C:/Users/ASUS/Desktop/style.jpg"));
        qDebug() <<"Button checked-- ON--";
    }
}

void Organisation::on_pushButton_19_toggled(bool s)
{
    if(s)
    {
         ui->pushButton_19->setIcon(QIcon("C:/Users/ASUS/Desktop/id.jpg"));
        qDebug() <<"Button checked-- ON--";
    }
}

void Organisation::on_pushButton_43_toggled(bool p)
{
    if(p)
    {
         ui->pushButton_43->setIcon(QIcon("C:/Users/ASUS/Desktop/loca.png"));
        qDebug() <<"Button checked-- ON--";
    }
}

void Organisation::on_pushButton_43_clicked()//chercher par lieu decorateur
{
    QMessageBox msgBox ;
            QSqlQueryModel *model = new QSqlQueryModel();
            QString co;
            co = ui->lineEdit_23->text();
            model->setQuery("Select * from decorateur where lieu = '"+co+"' ");
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
            ui->lineEdit_23->clear();
}

void Organisation::on_pushButton_20_clicked()//imprimer
{
    QPrinter printer ;
    printer.setPrinterName("esprit") ;
    QPrintDialog dialog(&printer,this) ;
    if( dialog.exec() == QDialog::Rejected) return ;
}

void Organisation::on_pushButton_29_toggled(bool a)
{
    if(a)
    {
         ui->pushButton_29->setIcon(QIcon("C:/Users/ASUS/Desktop/retour.jpg"));
        qDebug() <<"Button checked-- ON--";
    }
}

/*void Organisation::on_pushButton_30_clicked()
{
    QString strStream;
                    QTextStream out(&strStream);

                    const int rowCount = ui->tabledeco->model()->rowCount();
                    const int columnCount = ui->tabledeco->model()->columnCount();
                    QString TT = QDate::currentDate().toString("yyyy/MM/dd");


                    out <<"<html>\n"
                          "<head>\n"
                           "<meta Content=\"Text/html; charset=Windows-1251\">\n"
                        << "<title> - Client LIST<title>\n "
                        << "</head>\n"
                         "<body bgcolor=#ffffff link=#5000A0>\n"
                        "<h1 style=\"text-align=center;\"><strong> ****LISTE DES CLIENTS **** "+TT+"</strong></h1>"
                        "<table style=\"text-align: center; font-size: 150px;\" border=1>\n "
                          "</br> </br>";

                    // headers
                    //out << "<thead><tr bgcolor=#E6E6FA>";
                    out << "<tr bgcolor=#d6e5ff>";//couleur bleu
                    for (int column = 0; column < columnCount; column++)
                        if (!ui->tabledeco->isColumnHidden(column))
                            out << QString("<th>%1</th>").arg(ui->tabledeco->model()->headerData(column, Qt::Horizontal).toString());
                    out << "</tr></thead>\n";

                    // data table
                    for (int row = 0; row < rowCount; row++) {
                        out << "<tr>";
                        for (int column = 0; column < columnCount; column++) {
                            if (!ui->tabledeco->isColumnHidden(column)) {
                                QString data =ui->tabledeco->model()->data(ui->tabledeco->model()->index(row, column)).toString().simplified();
                                out << QString("<td bkcolor=0>%1</td>").arg((!data.isEmpty()) ? data : QString("&nbsp;"));
                            }
                        }
                        out << "</tr>\n";
                    }
                    out <<  "</table>\n"
                        "</body>\n"
                        "</html>\n";

                   QTextDocument *document = new QTextDocument();
                    document->setHtml(strStream);
        QPrinter printer(QPrinter::HighResolution);
        QMessageBox::information(nullptr, QObject::tr("pdf is  open"),
                    QObject::tr("imprimer success.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
        printer.setOutputFileName("output1");
                    QPrintDialog *baba = new QPrintDialog(&printer, NULL);
                    if (baba->exec() == QDialog::Accepted) {
                        document->print(&printer);
                    }

                    delete document;


}*/

/*void Organisation::on_pushButton_44_clicked()
{
   QPrinter printer(QPrinter::HighResolution);
            printer.setOutputFormat(QPrinter::PdfFormat);

            printer.setPageMargins(12, 16, 12, 20, QPrinter::Millimeter);
            printer.setFullPage(false);
            QPdfWriter pdf1("C:/Users/ASUS/Documents/Organisation/resource/Exportation.pdf");
            QPainter painter (&pdf1);


            double xscale = printer.pageRect().width() / double(ui->page_11->width());
            double yscale = printer.pageRect().height() / double(ui->page_11->height());
            double scale = qMin(xscale, yscale);
            painter.translate(printer.pageRect().width() / 2,
                                    printer.pageRect().height() / 2);
            painter.scale(scale, scale);
            painter.translate(-ui->page_11->width()/2, -ui->page_11->height()/2);
            ui->page_11->render(&painter);
            painter.drawText(printer.pageRect(), Qt::TextWordWrap, ui->page_2->winId());



}*/

void Organisation::on_pushButton_44_clicked()
{

}
