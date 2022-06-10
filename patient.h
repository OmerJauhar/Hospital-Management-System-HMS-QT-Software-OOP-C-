#ifndef PATIENT_H
#define PATIENT_H
#include<databasehandler.h>>
#include<string>
#include<QNetworkRequest>
#include <QJsonDocument>
#include <QVariantMap>
#include <QDebug>


#include "credentials.h"


class patient : public credentials , public databasehandler
{    
protected:

    std::string medical_problem ;

    double bill ;
    double arrears ;

    bool bill_status ;

    double  total_amount ;

    std::string reference_doctor ;


public:

    patient();

    void set_name(std::string a);

    void set_medical_probelm(std::string a);

    patient(std::string a , std::string b , int c , int d , std::string e , double f , double g , bool i);

    void upload_data();

    void upload_bill(std::string a);

    void set_total_amount(double a);

    void set_arrears(double a) ;

    void set_bill(double a);

    void set_refernce_doctor(std::string a );


};

#endif // PATIENT_H
