#ifndef DATABASEHANDLER_H
#define DATABASEHANDLER_H

#include <QObject>
#include<QNetworkAccessManager>
#include<QNetworkReply>


class databasehandler : public QObject
{
    Q_OBJECT
public:
    explicit databasehandler(QObject *parent = nullptr);
    void upload_patient(std::string a , std::string b , int c, int d , int e, std::string f );
    databasehandler(std::string a , std::string b , int c, int d , int e, std::string f );
    databasehandler(std::string a , std::string b , int c , int d ,  int e  , std::string  f , int g , int h );
    ~databasehandler();

public slots:
    void networkReplyReadyRead();

signals:

public:
QNetworkAccessManager * m_networkManager ;
QNetworkReply * m_networkReply ;


};

#endif // DATABASEHANDLER_H
