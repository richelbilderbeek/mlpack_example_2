TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

LIBS += -lmlpack

SOURCES += \
        main.cpp

QMAKE_CXXFLAGS += -fopenmp
