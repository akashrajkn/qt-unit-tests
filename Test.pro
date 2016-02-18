
QT += testlib
#QT -= gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Test
CONFIG += console
CONFIG -= app_bundle
TEMPLATE = app
SOURCES += main.cpp \
    test1.cpp \
    test2.cpp \
    test3.cpp \
    test4.cpp
HEADERS += \
    test1.h \
    test2.h \
    test3.h \
    AutomatedTests.h \
    test4.h

#INCLUDEPATH += /opt/Qt/5.3/Src/qtbase/include/QtWidgets

#target.path = $$[QT_INSTALL_EXAMPLES]/qtestlib/tutorial3
#INSTALLS += target
