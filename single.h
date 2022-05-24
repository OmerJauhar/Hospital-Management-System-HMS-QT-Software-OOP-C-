#ifndef SINGLE_H
#define SINGLE_H

#include<admitted.h>
#include<string>


class single : public admitted
{
protected:
   std::string room_type = "Single";
public:
    single();
    single(int a , int b , int c , std::string d);
};

#endif // SINGLE_H
