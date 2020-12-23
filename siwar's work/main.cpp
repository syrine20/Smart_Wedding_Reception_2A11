#include "organisation.h"
#include <connection.h>
#include <QApplication>
#include <QMessageBox>
#include "salle.h"
#include "decorateur.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    connection c;
     bool test=c.createconnection();
    Organisation o;

    if(test)
    {o.show();
        QMessageBox::information(nullptr,"database is open","connection successful.\n","Click Cancel to exit.");

}
    else
        QMessageBox::critical(nullptr,"database is not open","connection failed.\n","Click Cancel to exit.");

    return a.exec();
}

