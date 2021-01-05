#include "mailt.h"
#include "ui_mailt.h"
#include "smtp.h"

MailT::MailT(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MailT)
{
    ui->setupUi(this);
    //for email tab
        connect(ui->sendBtn, SIGNAL(clicked()),this, SLOT(sendMail()));
        connect(ui->browseBtn, SIGNAL(clicked()), this, SLOT(browse()));
}

MailT::~MailT()
{
    delete ui;
}

//mailing
void  MailT::browse()
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
void   MailT::sendMail()
{
    Smtp* smtp = new Smtp("syrine.amami@esprit.tn",ui->mail_pass->text(), "smtp.gmail.com");
    connect(smtp, SIGNAL(status(QString)), this, SLOT(mailSent(QString)));

    if( !files.isEmpty() )
        smtp->sendMail("syrine.amami@esprit.tn", ui->rcpt->text() , ui->subject->text(),ui->msg->toPlainText(), files );
    else
        smtp->sendMail("syrine.amami@esprit.tn", ui->rcpt->text() , ui->subject->text(),ui->msg->toPlainText());
}

void   MailT::mailSent(QString status)
{

    if(status == "Message sent")
        QMessageBox::warning( nullptr, tr( "Qt Simple SMTP client" ), tr( "Message sent!\n\n" ) );
    ui->rcpt->clear();
    ui->subject->clear();
    ui->file->clear();
    ui->msg->clear();
    ui->mail_pass->clear();
}

void MailT::on_sendBtn_clicked()
{

}
