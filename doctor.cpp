#include "doctor.h"
#include <QJsonDocument>
#include <QVariantMap>
#include <QDebug>
#include <QFile>
#include <QTextStream>


doctor::doctor():credentials()
{

}

doctor::doctor(std::string a , std::string b , int c , int d , std::string e , int f , int g )
{
    credentials(a,b,c,d);

    this->specilization = e ;
    this->st = f ;
    this->et = g ;
}

void doctor::set_doctor_specilization(std::string a)
{
    this->specilization = a ;
}

void doctor::set_start_time(int a)
{
    this-> st = a ;
}

void doctor::set_end_time(int a)
{
    this->et = a ;
}

void doctor::upload_data()
{
    m_networkManager = new QNetworkAccessManager(this ) ;
    std::string meow ;
    std::string  meow2 = ".json" ;
//    meow = "https://hospitalmanagementsystem-597da-default-rtdb.firebaseio.com/" +  std::to_string(c) + meow2 ;
    meow = "https://hospitalmanagementsystem-597da-default-rtdb.firebaseio.com/doctor.json";


    QVariantMap newdoctor ;
    newdoctor ["Name: "] = QString::fromStdString(this->name) ;
    newdoctor ["Gender: "] = QString::fromStdString(this->gender);
    newdoctor ["Age: "] =  QString::fromStdString(std::to_string(this->age));
    newdoctor ["Phone: "] = QString::fromStdString(std::to_string(this->phone_number));
    newdoctor ["CNIC: "] = QString::fromStdString(std::to_string(this->cnic));
    newdoctor ["Specilization: "] = QString::fromStdString(this->specilization) ;
    newdoctor ["Start time: "] =QString::fromStdString(std::to_string(this->st));
    newdoctor ["End time: "] = QString::fromStdString(std::to_string(this->et));
    QJsonDocument jsondoc  = QJsonDocument::fromVariant(newdoctor) ;

    QNetworkRequest newdoctorrequest( QUrl(QString ::fromStdString(meow)) );

    newdoctorrequest.setHeader(QNetworkRequest::ContentTypeHeader,QString("application.json"));
    m_networkManager->post(newdoctorrequest,jsondoc.toJson());

}
