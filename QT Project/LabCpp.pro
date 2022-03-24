TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt
QMAKE_CXXFLAGS += -fexec-charset=cp852

SOURCES += \
    generatorlosowy.cpp \
        main.cpp \
    mieszkaniec.cpp \
    nisza.cpp \
    osobniki.cpp \
    sasiedztwo.cpp \
    srodowisko.cpp \
    zlab02.cpp \
    zlab03.cpp \
    organizm.cpp \
    zlab06.cpp \
    zlab09.cpp \
    zlab10.cpp

HEADERS += \
    generatorlosowy.h \
    mieszkaniec.h \
    nisza.h \
    osobniki.h \
    sasiedztwo.h \
    srodowisko.h \
    ustawienia.h \
    zlab02.h \
    zlab03.h \
    organizm.h \
    zlab06.h \
    zlab09.h \
    zlab10.h
