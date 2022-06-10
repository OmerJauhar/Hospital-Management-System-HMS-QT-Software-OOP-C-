#ifndef ROOM_H
#define ROOM_H
#include "credentials.h"
#include "databasehandler.h"
#include "hospital.h"


class room : public credentials , public databasehandler
{
protected:
    float cost ;
    int floor ;
    int room_number ;
    int number_of_Days ;
    int number_of_room_booked ;
public:
    room();
    room(float a , int b , int c );
    room(std::string a , std::string b , int c , int d ,float e , int f , int g);
    virtual void upload_Data()  = 0 ;
    void operator ++() ;
};

#endif // ROOM_H
