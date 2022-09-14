TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

CONFIG += c++17
QMAKE_CXXFLAGS += -std=c++17

# High warning levels
QMAKE_CXXFLAGS += -Wall -Wextra -Wshadow -Wnon-virtual-dtor -pedantic

# Debug and release settings
CONFIG += debug_and_release
CONFIG(release, debug|release) {
  DEFINES += NDEBUG
}
CONFIG(debug, debug|release) {
  # A warning is an error, only in debug mode
  QMAKE_CXXFLAGS += -Werror
}

LIBS += -lmlpack

SOURCES += \
        main.cpp

QMAKE_CXXFLAGS += -fopenmp
