#include "databasehandler.h"
#include<QNetworkRequest>
#include <QJsonDocument>
#include <QVariantMap>
#include <QDebug>

databasehandler::databasehandler(QObject *parent)
    : QObject{parent}
{
    m_networkManager = new QNetworkAccessManager(this) ;
    m_networkReply = m_networkManager->get(QNetworkRequest(QUrl("https://hospitalmanagementsystem-597da-default-rtdb.firebaseio.com/")));

    connect(m_networkReply,&QNetworkReply::readyRead,this, &databasehandler::networkReplyReadyRead );
}

void databasehandler::upload_patient(std::string a, std::string b, int c, int d, int e, std::string f)
{
    m_networkManager = new QNetworkAccessManager(this ) ;
    QVariantMap newpatient ;
    newpatient ["Name: "] = QString::fromStdString(a) ;
    newpatient ["Gender: "] = QString::fromStdString(b);
    newpatient ["Age: "] =  c ;
    newpatient ["Phone: "] = e ;
    newpatient ["CNIC: "] = d ;
    newpatient ["Medical Problem: "] = QString::fromStdString(f) ;

    QJsonDocument jsondoc2  = QJsonDocument::fromVariant(newpatient) ;
    QNetworkRequest newpatientrequest( QUrl("https://hospitalmanagementsystem-597da-default-rtdb.firebaseio.com/.json") );

    newpatientrequest.setHeader(QNetworkRequest::ContentTypeHeader,QString("application.json"));
    m_networkManager->post(newpatientrequest,jsondoc2.toJson());
}


databasehandler::databasehandler(std::string a, std::string b, int c, int d, int e, std::string f, int g, int h)
{
    m_networkManager = new QNetworkAccessManager(this ) ;
    std::string meow ;
    std::string  meow2 = ".json" ;
//    meow = "https://hospitalmanagementsystem-597da-default-rtdb.firebaseio.com/" +  std::to_string(c) + meow2 ;
    meow = "https://hospitalmanagementsystem-597da-default-rtdb.firebaseio.com/.json";


    QVariantMap newdoctor ;
    newdoctor ["Name: "] = QString::fromStdString(a) ;
    newdoctor ["Gender: "] = QString::fromStdString(b);
    newdoctor ["Age: "] =  c ;
    newdoctor ["Phone: "] = d ;
    newdoctor ["CNIC: "] = e ;
    newdoctor ["Specilization: "] = QString::fromStdString(f) ;
    newdoctor ["Start time: "] = g ;
    newdoctor ["End time: "] = h ;
    QJsonDocument jsondoc  = QJsonDocument::fromVariant(newdoctor) ;

    QNetworkRequest newdoctorrequest( QUrl(QString ::fromStdString(meow)) );

    newdoctorrequest.setHeader(QNetworkRequest::ContentTypeHeader,QString("application.json"));
    m_networkManager->post(newdoctorrequest,jsondoc.toJson());
}




databasehandler::~databasehandler()
{
    m_networkManager->deleteLater();
}

void databasehandler::networkReplyReadyRead()
{
    qDebug() << m_networkReply->readAll();
}
