#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialogdoctor.h"
#include "dialogpatient.h"
#include "dialogemployee.h"
#include "dialogbill.h"
#include "dialogadmitted.h"
#include "dialogappointment.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_3_clicked()
{
//    hide();
    DialogDoctor d1 ;
    d1.setModal(true);
    d1.exec();


}


void MainWindow::on_pushButton_2_clicked()
{
//    hide();
    DialogPatient p1 ;
    p1.setModal(true);
    p1.exec();
}


void MainWindow::on_pushButton_7_clicked()
{
//    hide();
    Dialogemployee e1 ;
    e1.setModal(true) ;
    e1.exec();

}


void MainWindow::on_pushButton_8_clicked()
{
//    hide();
    Dialogbill b1 ;
    b1.setModal(true) ;
    b1.exec();

}


void MainWindow::on_pushButton_6_clicked()
{
    Dialogadmitted a1 ;
    a1.setModal(true) ;
    a1.exec();
}


void MainWindow::on_pushButton_4_clicked()
{
    Dialogappointment ap ;
    ap.setModal(true);
    ap.exec();
}

