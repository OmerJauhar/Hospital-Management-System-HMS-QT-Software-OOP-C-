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

    float bill ;
    float arrears ;

    bool bill_status ;

    float total_amount ;

    std::string reference_doctor ;


public:

    patient();

    void set_name(std::string a);

    void set_medical_probelm(std::string a);

    patient(std::string a , std::string b , int c , int d , std::string e , float f , float g , bool i);

    void upload_data();

    void upload_bill(std::string a);

    void set_total_amount(float a);

    void set_arrears(float a) ;

    void set_bill(float a);

    void set_refernce_doctor(std::string a );


};

#endif // PATIENT_H
