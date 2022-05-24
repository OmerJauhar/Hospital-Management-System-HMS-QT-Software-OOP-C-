#include "dialogemployee.h"
#include "ui_dialogemployee.h"
#include "emlpoyee.h".h"
#include "qmessagebox.h"


Dialogemployee::Dialogemployee(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialogemployee)
{
    ui->setupUi(this);
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

