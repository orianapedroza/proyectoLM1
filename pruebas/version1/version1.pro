#-------------------------------------------------
#
# Project created by QtCreator 2018-06-23T21:17:01
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = version1
TEMPLATE = app


SOURCES += main.cpp\
        login.cpp \
    menu.cpp \
    cronograma.cpp \
    planificar.cpp \
    actividades.cpp \
    apuntes.cpp \
    fecha.cpp \
    hora.cpp \
    materia.cpp \
    usuario.cpp

HEADERS  += login.h \
    menu.h \
    cronograma.h \
    planificar.h \
    actividades.h \
    apuntes.h \
    fecha.h \
    hora.h \
    materia.h \
    usuario.h

FORMS    += login.ui \
    menu.ui \
    cronograma.ui \
    planificar.ui
