#include "credentials.h"
int credentials::hospital_id = 0 ;


credentials::credentials()
{
   hospital_id ++ ;
}

credentials::credentials(std::string a , std::string b , long int c, long int d )
{
    hospital_id ++ ;

    this->name = a ;
    this->gender = b ;
    this->phone_number = c ;
    this->cnic = d ;
}

void credentials::set_name(std::string a)
{
    this->name = a ;
}

void credentials::set_gender(std::string a)
{
    this->gender = a ;
}

void credentials::set_cnic(int a)
{
    this->cnic = a ;
}

void credentials::set_age(int a)
{
    this->age = a ;
}

void credentials::set_phone_number(int a)
{
    this->phone_number = a ;
}
