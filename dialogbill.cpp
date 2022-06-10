#include "dialogbill.h"
#include "ui_dialogbill.h"
#include<patient.h>
#include<QMessageBox>

Dialogbill::Dialogbill(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialogbill)
{
    ui->setupUi(this);

}

Dialogbill::~Dialogbill()
{
    delete ui;
}

void Dialogbill::on_pushButton_clicked()
{

    try
    {
        if(ui->line_patient->text() != "" && ui->linearrears->text() != "" && ui->linepaid->text() !="" && ui->linedoctor->text() !="")
        {
            patient p1 ;
            int net_bill = 0 ;
            QString paid_amount = ui->linepaid  ->text();
            QString arrears = ui->linearrears->text();
            QString refernce_doctor = ui->linedoctor->text();
            net_bill = paid_amount.toInt() - arrears.toInt();
            p1.set_bill(paid_amount.toFloat());
            p1.set_arrears(arrears.toFloat());
            p1.set_refernce_doctor(refernce_doctor.toStdString());
            QString patient_id = ui->line_patient->text();
            p1.upload_bill(patient_id.toStdString());
//            QMessageBox::information(this,);
            std::string a = "Successful " + std::to_string(net_bill);

            QMessageBox::information(this,"Information","Sucessfull");
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


void Dialogbill::on_label_linkActivated(const QString &link)
{


}

