#include "dialogappointment.h"
#include "ui_dialogappointment.h"
#include "QFile"
#include "QTextStream"
#include "QMessageBox"
Dialogappointment::Dialogappointment(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialogappointment)
{
    ui->setupUi(this);
    QPixmap pix("C:/assets/appointment.png");
    ui->label_2->setPixmap(pix.scaled(700,300,Qt::KeepAspectRatio));


    QFile file("C:/Users/User/Desktop/hms - Copy/Doctor.txt");
    if (!file.open(QFile::ReadOnly | QFile::Text ))
    {
        QMessageBox::warning(this,"Warning","File Not Open");

    }
    QTextStream in(&file);
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
    file.close();

}

Dialogappointment::~Dialogappointment()
{
    delete ui;
}

void Dialogappointment::on_comboBox_activated(int index)
{

}


void Dialogappointment::on_pushButton_8_clicked()
{
    QString st ;
    QString et ;
    QFile file("C:/Users/User/Desktop/hms - Copy/Doctor.txt");
    if (!file.open(QFile::ReadOnly | QFile::Text ))
    {
        QMessageBox::warning(this,"Warning","File Not Open");

    }
    QFile file1("C:/Users/User/Desktop/hms - Copy/et.txt");
    if (!file1.open(QFile::ReadOnly | QFile::Text ))
    {
        QMessageBox::warning(this,"Warning","File Not Open");

    }
    QFile file2("C:/Users/User/Desktop/hms - Copy/st.txt");
    if (!file2.open(QFile::ReadOnly | QFile::Text ))
    {
        QMessageBox::warning(this,"Warning","File Not Open");

    }

//    QTextStream in(&file);
//    while(true)
//    {
//        QString line  = in.readLine();
//        if(!line.isNull())
//        {
//            ui->comboBox->addItem(line);
//        }
//        else
//        {
//            break;
//        }
//    }
//    file.close();
    QString name = ui->comboBox->currentText();
    QTextStream in(&file);
    QTextStream in1(&file1);
    QTextStream in2(&file2);
    while(true)
    {
        QString line = in.readLine();
        QString line1 = in1.readLine();
        QString line2 = in2.readLine();
        if(name==line)
        {
            et = line1 ;
            st = line2 ;
        }
        else
        {
            break;
        }
    }

    if(true)
    {
        int n = 1 ;
        int  m1 = st.toInt();
        int m2 = et.toInt();
        int c = m1+(100)*n ;
        if(c>=m2)
        {
            std::string a = std::to_string(m1);
            std::string b = std::to_string(m2);
            QString aloo = QString::fromStdString(a) + QString::fromStdString(b);
//            "Time is up come back tommorow!"
            QMessageBox::warning(this,"Warning",aloo);
        }
        else
        {
            std::string a = "Your Appoitment time is : " + std::to_string(c) ;
            QString time = QString::fromStdString(a);
            QMessageBox::information(this,"Appointment time:",time);
        }
    }
}


void Dialogappointment::on_label_2_linkActivated(const QString &link)
{

}


void Dialogappointment::on_Dialogappointment_accepted()
{

}

