#include "traiteurs.h"
#include "ui_traiteurs.h"
#include "fenetre.h"

Traiteurs::Traiteurs(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Traiteurs)
{
    ui->setupUi(this);
}

Traiteurs::~Traiteurs()
{
    delete ui;
}

void Traiteurs::on_pushButton_4_clicked()
{
    close();
}
