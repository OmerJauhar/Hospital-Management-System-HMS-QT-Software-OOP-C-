#include "admitted.h"
#include <QJsonDocument>
#include <QVariantMap>
#include <QDebug>

admitted::admitted()
{
    this-> cost = 0 ;
    this-> reserve_days = 0 ;
    this-> floor_num = 0 ;
}

void admitted::set_balance(int a)
{
    this->cost = a ;
}

void admitted::set_floor_num(int a)
{
    this->floor_num = a ;
}

void admitted::set_reserve_days(int a)
{
    this->reserve_days = a ;
}

void admitted::set_room(int a)
{
    this->room = a ;
}

void admitted::upload_room_data()
{
    m_networkManager = new QNetworkAccessManager(this ) ;
    QVariantMap newroom ;
    newroom ["Name: "] = QString::fromStdString(this->name) ;
    newroom ["Gender: "] = QString::fromStdString(this->gender);
    newroom ["Age: "] =   QString::fromStdString(std::to_string(this->age));
    newroom ["Phone: "] = QString::fromStdString(std::to_string(this->phone_number));
    newroom ["CNIC: "] = QString::fromStdString(std::to_string(this->cnic)); ;
    newroom ["Balance: "] = "";
    newroom ["Reverse Days: "] = "";
    newroom ["Floor: "] = "";
    newroom ["Room Number: "] = "";

    QJsonDocument jsondoc4  = QJsonDocument::fromVariant(newroom) ;
    QNetworkRequest newpatientrequest( QUrl("https://hospitalmanagementsystem-597da-default-rtdb.firebaseio.com/patient.json") );

    newpatientrequest.setHeader(QNetworkRequest::ContentTypeHeader,QString("application.json"));
    m_networkManager->post(newpatientrequest,jsondoc4.toJson());
}
