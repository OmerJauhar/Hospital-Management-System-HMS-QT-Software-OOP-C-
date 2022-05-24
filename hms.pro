QT       += core gui
QT += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    admitted.cpp \
    credentials.cpp \
    databasehandler.cpp \
    dialogadmitted.cpp \
    dialogappointment.cpp \
    dialogbill.cpp \
    dialogdoctor.cpp \
    dialogemployee.cpp \
    dialogpatient.cpp \
    doctor.cpp \
    emlpoyee.cpp \
    main.cpp \
    mainwindow.cpp \
    patient.cpp \
    single.cpp

HEADERS += \
    admitted.h \
    credentials.h \
    databasehandler.h \
    dialogadmitted.h \
    dialogappointment.h \
    dialogbill.h \
    dialogdoctor.h \
    dialogemployee.h \
    dialogpatient.h \
    doctor.h \
    emlpoyee.h \
    mainwindow.h \
    patient.h \
    single.h

FORMS += \
    dialogadmitted.ui \
    dialogappointment.ui \
    dialogbill.ui \
    dialogdoctor.ui \
    dialogemployee.ui \
    dialogpatient.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    myresource.qrc
