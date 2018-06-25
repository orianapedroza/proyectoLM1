#-------------------------------------------------
#
# Project created by QtCreator 2018-06-24T09:42:27
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = omega
TEMPLATE = app


SOURCES += main.cpp\
        pres.cpp \
    actividades.cpp \
    apuntes.cpp \
    cronograma.cpp \
    fecha.cpp \
    hora.cpp \
    login.cpp \
    materia.cpp \
    menu.cpp \
    planificacion.cpp \
    planificar.cpp \
    usuario.cpp \
    registrar.cpp \
    modi.cpp \
    eliminar.cpp

HEADERS  += pres.h \
    actividades.h \
    apuntes.h \
    cronograma.h \
    fecha.h \
    hora.h \
    login.h \
    menu.h \
    planificacion.h \
    planificar.h \
    usuario.h \
    registrar.h \
    modi.h \
    eliminar.h

FORMS    += pres.ui \
    cronograma.ui \
    login.ui \
    menu.ui \
    planificar.ui \
    registrar.ui \
    modi.ui \
    eliminar.ui

RESOURCES += \
    icono.qrc
