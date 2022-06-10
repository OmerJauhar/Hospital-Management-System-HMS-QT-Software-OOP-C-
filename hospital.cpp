#include "hospital.h"
double hospital :: single_room_cost = 2000.0 ;
double hospital :: shared_room_cost = 1000.0 ;
double hospital :: icu_cost = 5000.0 ;


hospital::hospital()
{
    this->hospital_name  = " " ;
    this->hospital_location = " " ;
    this->hospital_type = " " ;
    this->bed_capacity = 0 ;
}

hospital::hospital(std::string a, std::string b, int c, std::string d)
{
    this->hospital_name  = a ;
    this->hospital_location = b ;
    this->hospital_type = d ;
    this->bed_capacity = c ;
}

void hospital::set_single_room_cost(double a)
{
    this->hospital::single_room_cost = a;
}

void hospital::set_shared_room_cost(double a)
{
    this->hospital::shared_room_cost = a ;
}
void hospital::set_icu_cost(double a)
{
    this->hospital::icu_cost = a ;
}

double hospital::get_single_room_cost()
{
    return this->hospital::single_room_cost ;
}

double hospital::get_shared_room_cost()
{
    return this->hospital::single_room_cost ;
}

double hospital::get_icu_cost()
{
    return this->hospital::icu_cost ;
}
