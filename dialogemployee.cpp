#include "dialogemployee.h"
#include "ui_dialogemployee.h"
#include "emlpoyee.h"
#include "qmessagebox.h"


Dialogemployee::Dialogemployee(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialogemployee)
{
    ui->setupUi(this);
    QPixmap pix("C:/assets/employees.png");
    ui->label->setPixmap(pix.scaled(460,350,Qt::KeepAspectRatio));
}

Dialogemployee::~Dialogemployee()
{
    delete ui;
}

void Dialogemployee::on_pushButton_2_clicked()
{
    try {
        if(ui->linename->text() != "" && ui->lineage->text() != "" && ui->linecnic->text() !="" && ui->line_phone_number->text() !="" )
        {
            emlpoyee e1 ;

            QString name = ui->linename->text();
            e1.set_name(name.toStdString());

            QString age = ui->lineage->text();
            e1.set_age(age.toInt());

            QString cnic = ui->linecnic->text();
            e1.set_cnic(cnic.toInt());

            QString phone = ui->line_phone_number->text() ;
            e1.set_phone_number(phone.toInt());

            QString category = ui->line_category->text();
            e1.set_category(category.toStdString());

            e1.upload_data();

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

}


void Dialogemployee::on_pushButton_clicked()
{
    this->close();
}


void Dialogemployee::on_label_53_linkActivated(const QString &link)
{

}


void Dialogemployee::on_Dialogemployee_accepted()
{

}


void Dialogemployee::on_label_2_linkActivated(const QString &link)
{

}

