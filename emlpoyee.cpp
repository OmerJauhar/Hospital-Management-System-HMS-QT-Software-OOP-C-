#include "emlpoyee.h"
#include <QJsonDocument>
#include <QVariantMap>
#include <QDebug>


emlpoyee::emlpoyee()
{

}

void emlpoyee::set_category(std::string a)
{
    this->category = a ;
}

void emlpoyee::upload_data()
{
    m_networkManager = new QNetworkAccessManager(this ) ;
    std::string meow ;
    std::string  meow2 = ".json" ;
    meow = "https://hospitalmanagementsystem-597da-default-rtdb.firebaseio.com/employee.json";


    QVariantMap newemployee ;
    newemployee ["Name: "] = QString::fromStdString(this->name) ;
    newemployee ["Gender: "] = QString::fromStdString(this->gender);
    newemployee ["Age: "] =  QString::fromStdString(std::to_string(this->age));
    newemployee ["Phone: "] = QString::fromStdString(std::to_string(this->phone_number));
    newemployee ["CNIC: "] = QString::fromStdString(std::to_string(this->cnic));
    newemployee ["Category: "] = QString::fromStdString(this->category) ;

    QJsonDocument jsondoc3  = QJsonDocument::fromVariant(newemployee) ;

    QNetworkRequest newdoctorrequest( QUrl(QString ::fromStdString(meow)) );

    newdoctorrequest.setHeader(QNetworkRequest::ContentTypeHeader,QString("application.json"));
    m_networkManager->post(newdoctorrequest,jsondoc3.toJson());
}
