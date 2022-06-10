#ifndef SHARED_H
#define SHARED_H
#include "room.h"
#include "hospital.h"

class shared : public room
{
protected:
    double room_Cost ;
    std::string room_type ;
    hospital a ;
public:
    shared();
    void set_shared(std::string a , int b , int c, int d , int e  , int g , int h ) ;
    void upload_Data() override ;
};

#endif // SHARED_H
