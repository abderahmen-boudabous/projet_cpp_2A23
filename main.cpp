#include "mainwindow.h"
#include <QApplication>
#include <QMessageBox>
#include "client.h"
#include "connection.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Connection c;
    bool test=c.createconnect();
    MainWindow w;
    if(test)
    {w.show();
        QMessageBox::information(nullptr, QObject::tr("database is open"),
                    QObject::tr("Client successful.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

}
    else
        QMessageBox::critical(nullptr, QObject::tr("database is not open"),
                    QObject::tr("Client failed.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);



    return a.exec();
}