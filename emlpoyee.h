#ifndef EMLPOYEE_H
#define EMLPOYEE_H
#include <credentials.h>
#include <databasehandler.h>>
#include <string >
#include <QJsonDocument>
#include <QVariantMap>
#include <QDebug>


class emlpoyee :public credentials, databasehandler
{
protected:

    std::string category  ;

public:
    emlpoyee();

    void set_category(std::string a );

    void upload_data();
};

#endif // EMLPOYEE_H
