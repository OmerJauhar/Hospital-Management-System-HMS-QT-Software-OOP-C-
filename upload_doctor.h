#ifndef UPLOAD_DOCTOR_H
#define UPLOAD_DOCTOR_H

#include <QObject>
#include<QNetworkAccessManager>
#include<QNetworkReply>

class upload_doctor : public QObject
{
    Q_OBJECT
public:
    explicit upload_doctor(QObject *parent = nullptr);

signals:
private:
    QNetworkAccessManager * m_networkManager ;
    QNetworkReply * m_networkReply ;


};

#endif // UPLOAD_DOCTOR_H
