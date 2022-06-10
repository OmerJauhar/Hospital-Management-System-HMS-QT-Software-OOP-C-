#include "room.h"

room::room()
{

}

room::room(float a, int b, int c)
{
    this->cost = a ;
    this->floor = b ;
    this->room_number = c ;
}

room::room(std::string a, std::string b, int c, int d, float e, int f, int g):credentials(a,b,c,d)
{
    this->cost = e ;
    this->floor = f ;
    this->room_number = g ;
}

void room::operator ++()
{
    this->number_of_room_booked ++ ;

}

