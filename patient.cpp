#include "patient.h"
#include "databasehandler.h"
#include<QNetworkRequest>
#include <QJsonDocument>
#include <QVariantMap>
#include <QDebug>

patient::patient():credentials()
{

}

void patient::set_name(std::string a)
{
    this->name = a ;
}

void patient::set_medical_probelm(std::string a)
{
    this->medical_problem = a ;
}

//patient::patient(std::string a , std::string b , int c, int d , std::string e , double f , double g , bool h )
//{
//    credentials(a,b,c,d);

//    this->medical_problem = e ;
//    this->bill = f ;
//    this->arrears = g ;
//    this->bill_status = h;
//}

patient::patient(std::string a , std::string b , int c , int d , std::string e , double f , double g , bool i)
{
    credentials(a,b,c,d);

    this->medical_problem = e ;
    this->bill = f ;
    this->arrears = g ;
    this->bill_status = i;
}

void patient::upload_data()
{
    m_networkManager = new QNetworkAccessManager(this ) ;
    QVariantMap newpatient ;
    newpatient ["Name: "] = QString::fromStdString(this->name) ;
    newpatient ["Gender: "] = QString::fromStdString(this->gender);
    newpatient ["Age: "] =   QString::fromStdString(std::to_string(this->age));
    newpatient ["Phone: "] = QString::fromStdString(std::to_string(this->phone_number));
    newpatient ["CNIC: "] = QString::fromStdString(std::to_string(this->cnic)); ;
    newpatient ["Medical Problem: "] = QString::fromStdString(this->medical_problem) ;
    newpatient ["Arrears: "] = "";
    newpatient ["Bill Paid: "] = "";
    newpatient ["Total Amount: "] = "";
    newpatient ["Refernce Doctor: "] = "";

    QJsonDocument jsondoc2  = QJsonDocument::fromVariant(newpatient) ;
    QNetworkRequest newpatientrequest( QUrl("https://hospitalmanagementsystem-597da-default-rtdb.firebaseio.com/patient.json") );

    newpatientrequest.setHeader(QNetworkRequest::ContentTypeHeader,QString("application.json"));
    m_networkManager->post(newpatientrequest,jsondoc2.toJson());
}

void patient::upload_bill(std::string a)
{
    m_networkManager = new QNetworkAccessManager(this ) ;
    QVariantMap newpatient ;
//    QString meow = QString::fromStdString(a);
    std::string connstring = "https://hospitalmanagementsystem-597da-default-rtdb.firebaseio.com/patient/" + a +".json";
    newpatient ["Name: "] = QString::fromStdString(this->name);
    newpatient ["Arrears: "] = QString::fromStdString(std::to_string(this->arrears));
    newpatient ["Bill Paid: "] = QString::fromStdString(std::to_string(this->bill));
    newpatient ["Total Amount: "] =QString::fromStdString(std::to_string(this->total_amount));
    newpatient ["Refernce Doctor: "] = QString::fromStdString(this->reference_doctor);

    QJsonDocument jsondoc2  = QJsonDocument::fromVariant(newpatient) ;
    QNetworkRequest newpatientrequest( QUrl(QString::fromStdString(connstring)) );


    newpatientrequest.setHeader(QNetworkRequest::ContentTypeHeader,QString("application.json"));
    m_networkManager->put(newpatientrequest,jsondoc2.toJson());
}

void patient::set_total_amount(double a)
{
    this->total_amount = a ;
}

void patient::set_arrears(double a)
{
    this->arrears = a ;
}

void patient::set_bill(double a)
{
    this->bill = a ;
}

void patient::set_refernce_doctor(std::string a)
{
   this->reference_doctor = a ;
}
