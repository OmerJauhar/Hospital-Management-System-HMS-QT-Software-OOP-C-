#ifndef ICU_H
#define ICU_H
#include <string>
#include "hospital.h"
#include "room.h"


class icu  : public room
{
protected:
    double room_Cost ;
    std::string room_type ;
    hospital a ;
public:
    icu();
    void set_icu(std::string a, int b, int c, int d, int e, int g, int h) ;
    void upload_Data() override ;
};

#endif // ICU_H
