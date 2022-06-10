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
    dialog.cpp \
    dialogadmitted.cpp \
    dialogappointment.cpp \
    dialogbill1.cpp \
    dialogdoctor.cpp \
    dialogemployee.cpp \
    dialogpatient.cpp \
    doctor.cpp \
    emlpoyee.cpp \
    hospital.cpp \
    icu.cpp \
    main.cpp \
    mainwindow.cpp \
    patient.cpp \
    room.cpp \
    shared.cpp \
    single.cpp

HEADERS += \
    admitted.h \
    credentials.h \
    databasehandler.h \
    dialog.h \
    dialogadmitted.h \
    dialogappointment.h \
    dialogbill1.h \
    dialogdoctor.h \
    dialogemployee.h \
    dialogpatient.h \
    doctor.h \
    emlpoyee.h \
    hospital.h \
    icu.h \
    mainwindow.h \
    patient.h \
    room.h \
    shared.h \
    single.h

FORMS += \
    dialog.ui \
    dialogadmitted.ui \
    dialogappointment.ui \
    dialogbill1.ui \
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
