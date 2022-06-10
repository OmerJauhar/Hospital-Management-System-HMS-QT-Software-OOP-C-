#include "dialogbill1.h"
#include "ui_dialogbill1.h"
#include "qpixmap.h"
#include "qfile.h"
#include "qmessagebox.h"
#include "databasehandler.h"
#include "patient.h"

Dialogbill1::Dialogbill1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialogbill1)

{
    ui->setupUi(this);
    QPixmap pix("C:/assets/bill.png");
    ui->label_3->setPixmap(pix.scaled(650,450,Qt::KeepAspectRatio));

    QFile filebill("C:/Users/User/Desktop/hms - Copy/Doctor.txt");
    if (!filebill.open(QFile::ReadOnly | QFile::Text ))
    {
        QMessageBox::warning(this,"Warning","File Not Open");

    }
    QTextStream in(&filebill);
    while(true)
    {
        QString line  = in.readLine();
        if(!line.isNull())
        {
            ui->comboBox->addItem(line);
        }
        else
        {
            break;
        }
    }
    filebill.close();

}

Dialogbill1::~Dialogbill1()
{
    delete ui;
}

void Dialogbill1::on_Dialogbill1_accepted()
{

}


void Dialogbill1::on_label_3_linkActivated(const QString &link)
{

}


void Dialogbill1::on_pushButton_clicked()
{
    if(ui->labelName->text() != "" && ui->labelArrears->text() !="" &&ui->labelID->text() != "" && ui->labelPaid->text() != "" && ui->comboBox->currentText() != ""  )
    {
        patient p1 ;
        int net_bill = 0 ;
        QString patient_name = ui->labelName->text() ;
        p1.set_name(patient_name.toStdString());
        QString paid_amount = ui->labelPaid  ->text();
        QString arrears = ui->labelArrears->text();
        QString refernce_doctor = ui->comboBox->currentText();
        net_bill = paid_amount.toInt() - arrears.toInt();
        p1.set_bill(paid_amount.toFloat());
        p1.set_arrears(arrears.toFloat());
        p1.set_refernce_doctor(refernce_doctor.toStdString());
        QString patient_id = ui->labelID->text();
        p1.upload_bill(patient_id.toStdString());
//            QMessageBox::information(this,);
        std::string a = "Successful " + std::to_string(net_bill);

        QMessageBox::information(this,"Information","Sucessfull");
//        databasehandler d1(ui->labelID->text(),ui->labelName->text(),ui->labelArrears->text(),ui->labelPaid->text(),ui->comboBox->currentText()) ;

    }
    else
    {
        QMessageBox::warning(this,"warning","Enter all fields !") ;
    }
}

