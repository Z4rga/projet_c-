#include "mainwindow.h"
#include "connection.h"
#include <QApplication>
#include <QMessageBox>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
 //   MainWindow w;
    Connection c; //une seule instance de la classe connection
    bool test=c.createconnect(); //etablir la connexion
       MainWindow w;
   if(test)
    {w.show();
        QMessageBox::information(nullptr, QObject::tr("database is open"),
                   QObject::tr("connection successful.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

}
   else  //si la co est echoue
        QMessageBox::critical(nullptr, QObject::tr("database is not open"),
           QObject::tr("connection failed.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);
   return a.exec() ;
}
