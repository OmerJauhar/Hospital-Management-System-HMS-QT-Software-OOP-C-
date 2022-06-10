#include "dialog.h"
#include "ui_dialog.h"
#include "hospital.h"
#include "QMessageBox"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    if(ui->line_name->text() != "" && ui->line_location->text() != "" && ui->line_type->text() != "" && ui->line_bed->text() != "" && ui->line_icu->text() != "" && ui->line_shared->text() != "" && ui->line_single->text() != "")
    {
        hospital h1 ;

        QString single_cost = ui->line_single->text() ;
        h1.set_single_room_cost(std::stod(single_cost.toStdString()));

        QString shared_cost = ui->line_shared->text() ;
        h1.set_shared_room_cost(std::stod(shared_cost.toStdString())) ;

        QString icu_cost = ui->line_icu->text() ;
        h1.set_icu_cost(std::stod(icu_cost.toStdString())) ;
        QMessageBox::information(this,"Information","Successful uploaded");

    }
    else
    {
        QMessageBox::warning(this,"Warning","Enter All Fields ") ;
    }
}

void Dialog::on_Dialog_accepted()
{

}

