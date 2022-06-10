#ifndef HOSPITAL_H
#define HOSPITAL_H
#include <string>
class hospital
{
    static double single_room_cost ;
    static double shared_room_cost ;
    static double icu_cost ;

    std::string hospital_name  ;
    std::string hospital_location ;
    int bed_capacity ;
    std::string hospital_type ;


public:
    hospital();
    hospital(std::string a , std::string b, int c, std::string d);
    void set_single_room_cost(double a ) ;
    void set_shared_room_cost(double b) ;
    void set_icu_cost(double c );
    double get_single_room_cost() ;
    double get_shared_room_cost() ;
    double get_icu_cost();
};

#endif // HOSPITAL_H
