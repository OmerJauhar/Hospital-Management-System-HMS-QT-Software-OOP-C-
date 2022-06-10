#include "dialogdoctor.h"
#include "ui_dialogdoctor.h"
#include "mainwindow.h"
#include<doctor.h>
#include<QMessageBox>
#include <QFile>
#include <QTextStream>

DialogDoctor::DialogDoctor(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogDoctor)
{
    ui->setupUi(this);
    QPixmap pix("C:/assets/doctor.png");
    ui->doctor_label->setPixmap(pix.scaled(650,400,Qt::KeepAspectRatio));
}

DialogDoctor::~DialogDoctor()
{
    delete ui;
}

void DialogDoctor::on_pushButton_clicked()
{
    hide();
    MainWindow w ;
    w.show();



}


void DialogDoctor::on_pushButton_2_clicked()
{
    try {
        if(ui->linename->text() != "" && ui->lineage->text() != "" && ui->linecnic->text() !="" && ui->line_phone_number->text() !="" && ui->linest->text()!="" && ui->lineet->text()!="" && ui->linespacilization->text() !="" )
        {
            doctor d1 ;

            QString name = ui->linename->text();
            d1.set_name(name.toStdString());

            QString age = ui->lineage->text();
            d1.set_age(age.toInt());

            QString cnic = ui->linecnic->text();
            d1.set_cnic(cnic.toInt());

            QString phone = ui->line_phone_number->text() ;
            d1.set_phone_number(phone.toInt());

            QString st = ui->linest->text();
            d1.set_start_time(st.toInt());

            QString et = ui->lineet->text();
            d1.set_end_time(et.toInt());

            QString specilization = ui->linespacilization->text();
            d1.set_doctor_specilization(specilization.toStdString());

            d1.upload_data();

            QMessageBox::information(this,"Information","Successful upload to server ");


        }
        else
        {
            QMessageBox::warning(this,"Warning!","   Enter all fields!  ");
        }
    }
    catch (_exception& a) {

        QMessageBox::warning(this,"Warning!","   Data Upload fail !  ");
    }
    QFile file("C:/Users/User/Desktop/hms - Copy/Doctor.txt");
    if (!file.open(QFile::WriteOnly | QFile::Text |QIODevice::Append))
    {
        QMessageBox::warning(this,"Warning","File Not Open");

    }
    QTextStream out(&file);
    QString text = ui->linename->text();
    out <<text ;
    out<<"\n";
    file.close();


    QFile file1("C:/Users/User/Desktop/hms - Copy/st.txt");
    if (!file1.open(QFile::WriteOnly | QFile::Text |QIODevice::Append))
    {
        QMessageBox::warning(this,"Warning","File Not Open");

    }
    QTextStream meow(&file1);
    QString text1 = ui->linest->text();
    meow <<text1 ;
    meow<<"\n";
    file1.close();


    QFile file2("C:/Users/User/Desktop/hms - Copy/et.txt");
    if (!file2.open(QFile::WriteOnly | QFile::Text |QIODevice::Append))
    {
        QMessageBox::warning(this,"Warning","File Not Open");

    }
    QTextStream meow2(&file2);
    QString text2 = ui->lineet->text();
    meow2 <<text2 ;
    meow2<<"\n";
    file2.close();
}


void DialogDoctor::on_doctor_label_linkActivated(const QString &link)
{

}


void DialogDoctor::on_DialogDoctor_accepted()
{

}

