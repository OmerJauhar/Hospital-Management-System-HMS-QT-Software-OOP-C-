#ifndef DOCTOR_H
#define DOCTOR_H
#include <string>
#include "credentials.h"
#include <databasehandler.h>
#include <QJsonDocument>
#include <QVariantMap>
#include <QDebug>




class doctor : public credentials , public databasehandler
{

protected:

    std::string specilization;

    int st ; /*st stands for start time*/
    int et ; /*et stands for end time */

public:

    doctor();

    doctor(std::string a , std::string b , int c , int d , std::string  e , int f , int g );

    void set_doctor_specilization(std::string a);

    void set_start_time(int a);

    void set_end_time(int a);

    void upload_data();


};

#endif // DOCTOR_H
