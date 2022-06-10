#include "dialogadmitted.h"
#include "ui_dialogadmitted.h"
#include "room.h"
#include "qmessagebox.h"
#include "single.h"
#include "shared.h"
#include "icu.h"

Dialogadmitted::Dialogadmitted(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialogadmitted)
{
    ui->setupUi(this);
    QPixmap pix("C:/assets/room.png");
    ui->label_2->setPixmap(pix.scaled(625,550,Qt::KeepAspectRatio));
}

Dialogadmitted::~Dialogadmitted()
{
    delete ui;
}

void Dialogadmitted::on_Dialogadmitted_accepted()
{

}


void Dialogadmitted::on_pushButton_6_clicked()
{
if(ui->line_name->text() !="" && ui->line_phone->text() !="" && ui->line_age->text() != "" && ui->line_cnic->text() != "" && ui->line_floor->text() != "" && ui->comboBox->currentText() != "" && ui->line_nods->text() != "" && ui->line_room->text() !="" )
{
    std::string name = ui->line_name->text().toStdString() ;
    int age = ui->line_age->text().toInt() ;
    int cnic = ui->line_cnic->text().toInt() ;
    int floor = ui->line_floor->text().toInt() ;
    std::string roomtype = ui->comboBox->currentText().toStdString() ;
    int nods = ui->line_nods->text().toInt() ;
    int roomnumber = ui->line_room->text().toInt();
    int phonenumber = ui->line_phone->text().toInt() ;

    room* array[2] ;

    single s1 ;
    s1.set_single(name,age,phonenumber,cnic,nods,floor,roomnumber) ;

    shared sh1 ;
    sh1.set_shared(name,age,phonenumber,cnic,nods,floor,roomnumber) ;

    icu icu1 ;
    icu1.set_icu(name,age,phonenumber,cnic,nods,floor,roomnumber) ;

    if(ui->comboBox->currentText() == "Single Room ")
    {
        array[1] = &s1 ;
        array[1] ->upload_Data() ;
    }
    else if (ui->comboBox->currentText() == "Shared Room ")
    {
        array[1] = &sh1 ;
        array[1] ->upload_Data() ;
    }
    else if (ui->comboBox->currentText() == "Imtensive Care Unit (ICU)")
    {
        array[1] = &icu1 ;
        array[1] ->upload_Data() ;
    }
    QMessageBox::information(this,"Information","Successfuly uploaded to server") ;

}
else
{
    QMessageBox::warning(this,"warning","please Enter all fields ");
}
}

