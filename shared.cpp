#include "shared.h"
#include <QJsonDocument>
#include <QVariantMap>
#include <QDebug>

shared::shared()
{
    this->room_type = "Shared room" ;
    this->room_Cost = a.get_single_room_cost();
}

void shared::set_shared(std::string a, int b, int c, int d, int e, int g, int h)
{
    this->name = a ;
    this->age =  b ;
    this->phone_number = c ;
    this->cnic = d ;
    this->number_of_Days = e ;
    this->floor = g ;
    this->room_number = h ;
}

void shared::upload_Data()
{
    m_networkManager = new QNetworkAccessManager(this ) ;
    QVariantMap newroom ;
    newroom ["Name: "] = QString::fromStdString(this->name) ;
    newroom ["Gender: "] = QString::fromStdString(this->gender);
    newroom ["Age: "] =  QString::fromStdString(std::to_string(this->age)) ;
    newroom ["Phone: "] = QString::fromStdString(std::to_string(this->phone_number)) ;
    newroom ["CNIC: "] = QString::fromStdString(std::to_string(this->cnic)) ;
    newroom ["Room Type"] = QString::fromStdString(this->room_type) ;
    newroom ["Room cost"] = QString::fromStdString(this->room_type) ;
    newroom ["Room number"] = QString::fromStdString(std::to_string(this->room_number)) ;
    newroom ["Floor Number"] = QString::fromStdString(std::to_string(this->floor)) ;
    double a ;
    a = this->room_Cost * this->number_of_Days ;
    newroom ["Total Amount"] = QString::fromStdString(std::to_string(a)) ;

    QJsonDocument jsondoc3  = QJsonDocument::fromVariant(newroom) ;
    QNetworkRequest newroomrequest( QUrl("https://hospitalmanagementsystem-597da-default-rtdb.firebaseio.com/room.json") );

    newroomrequest.setHeader(QNetworkRequest::ContentTypeHeader,QString("application.json"));
    m_networkManager->post(newroomrequest,jsondoc3.toJson());
}
