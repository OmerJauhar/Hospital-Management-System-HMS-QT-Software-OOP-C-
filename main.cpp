#include "mainwindow.h"
#include<databasehandler.h>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
//    databasehandler dbhandler("ali","male",25,25,25,"omer",25,25) ;
//    databasehandler meow("omer","male",25,25,25,"meow");
    databasehandler d1  ;

    return a.exec();
}
