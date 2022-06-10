#include "mainwindow.h"
#include<databasehandler.h>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    databasehandler d1  ;

    return a.exec();
}
