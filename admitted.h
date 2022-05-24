#ifndef ADMITTED_H
#define ADMITTED_H
#include<credentials.h>
#include <string>
#include<databasehandler.h>


class admitted :public credentials , databasehandler
{
protected:
    int cost ;
    int reserve_days ;
    int floor_num ;
    int room ;

public:
    admitted();
    void set_balance(int a);
    void set_reserve_days(int a) ;
    void set_floor_num(int a)  ;
    void set_room( int a ) ;
    void upload_room_data();
};

#endif // ADMITTED_H
