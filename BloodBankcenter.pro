QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11 sql

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    adminpage.cpp \
    donation.cpp \
    finalpage.cpp \
    main.cpp \
    mainwindow.cpp \
    regisiter.cpp \
    secdialog.cpp \
    signedin.cpp \
    transfusion.cpp \
    user.cpp \
    userdonation.cpp \
    usertransfution.cpp

HEADERS += \
    adminpage.h \
    donation.h \
    finalpage.h \
    mainwindow.h \
    regisiter.h \
    secdialog.h \
    signedin.h \
    transfusion.h \
    user.h \
    userdonation.h \
    usertransfution.h

FORMS += \
    adminpage.ui \
    donation.ui \
    finalpage.ui \
    mainwindow.ui \
    regisiter.ui \
    secdialog.ui \
    signedin.ui \
    transfusion.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources.qrc
