#ifndef CREDENTIALS_H
#define CREDENTIALS_H

#include<string>


class credentials
{
protected:

    std::string name ;
    std::string gender ;

    long int phone_number ;
    long int cnic ;

    int age ;

    static int hospital_id ;


public:
    credentials();

    credentials(std::string a , std::string b , long int c , long int d);

    void set_name(std::string a);

    void set_gender(std::string a);

    void set_cnic(int a);

    void set_age(int a );

    void set_phone_number(int a);

};

#endif // CREDENTIALS_H
