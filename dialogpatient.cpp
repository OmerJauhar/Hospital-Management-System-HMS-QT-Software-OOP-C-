#include "dialogpatient.h"
#include "ui_dialogpatient.h"
#include<patient.h>
#include "QMessageBox"
#include "QPixmap"

DialogPatient::DialogPatient(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogPatient)
{
    ui->setupUi(this);
//    this->showFullScreen();
    QPixmap pix("C:/assets/medicine_qt.png");
    ui->label_medicine->setPixmap(pix.scaled(650,400,Qt::KeepAspectRatio));

}

DialogPatient::~DialogPatient()
{
    delete ui;
}

void DialogPatient::on_pushButton_3_clicked()
{


}


void DialogPatient::on_pushButton_4_clicked()
{
    try
    {
        if(ui->linename->text() != "" && ui->lineage->text() != "" &&ui->linecnic->text() !="" && ui->linegender->text() != "" && ui->linephone->text() !="" && ui->linemedical->text()!="")
        {
            patient p1 ;

            QString name = ui->linename->text();
            p1.set_name(name.toStdString());

            QString age = ui->lineage->text();
            p1.set_age(age.toInt());

            QString gender = ui->linegender->text();
            p1.set_gender(gender.toStdString());

            QString cnic = ui->linecnic->text();
            p1.set_cnic(cnic.toInt());

            QString phone = ui->linephone ->text();
            p1.set_phone_number(phone.toInt());

            QString medical = ui->linemedical ->text();
            p1.set_medical_probelm(medical.toStdString());

            p1.upload_data() ;
//            QMessageBox::information(this,);
            QMessageBox::information(this,"Information","Successful");
        }
        else
        {
            QMessageBox::warning(this,"     Warning","Enter all fields.        ");
        }
    }
    catch (_exception& a)
    {
        QMessageBox::warning(this,"Warning!","Data has not been uploaded.");
    }


}


void DialogPatient::on_DialogPatient_accepted()
{

}


void DialogPatient::on_label_linkActivated(const QString &link)
{

}


void DialogPatient::on_label_medicine_linkActivated(const QString &link)
{

}


void DialogPatient::on_label_3_linkActivated(const QString &link)
{

}


void DialogPatient::on_frame_customContextMenuRequested(const QPoint &pos)
{

}

