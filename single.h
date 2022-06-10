#ifndef SINGLE_H
#define SINGLE_H
#include "room.h"
#include "hospital.h"


class single :public room
{
protected :
    double room_Cost ;
    std::string room_type ;
    hospital a ;

public:
    single();
    void set_single(std::string a , int b , int c, int d , int e  , int g , int h ) ;
    void upload_Data() override ;
};

#endif // SINGLE_H
