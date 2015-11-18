include(../defaults.pri)

CONFIG   -= app_bundle
CONFIG += c++11

LIBS += -L../Model -lmodel

TEMPLATE = lib

TARGET = simulation

HEADERS += \
    simulator_interfaces/simulator.h \
    simulator_interfaces/eclsimulator.h \
    simulator_interfaces/simulator_exceptions.h \
    simulator_interfaces/driver_file_writers/ecldriverfilewriter.h \
    simulator_interfaces/driver_file_writers/driver_parts/ecl_driver_parts/welspecs.h \
    simulator_interfaces/driver_file_writers/driver_parts/driverpart.h \
    simulator_interfaces/driver_file_writers/driver_parts/ecl_driver_parts/ecldriverpart.h \
    simulator_interfaces/driver_file_writers/driver_parts/ecl_driver_parts/compdat.h \
    simulator_interfaces/driver_file_writers/driver_parts/ecl_driver_parts/wellcontrols.h \
    simulator_interfaces/driver_file_writers/driver_parts/ecl_driver_parts/grid_section.h \
    simulator_interfaces/driver_file_writers/driver_parts/ecl_driver_parts/runspec_section.h \
    simulator_interfaces/driver_file_writers/driver_parts/ecl_driver_parts/props_section.h \
    simulator_interfaces/driver_file_writers/driver_parts/ecl_driver_parts/solution_section.h \
    simulator_interfaces/driver_file_writers/driver_parts/ecl_driver_parts/summary_section.h

SOURCES += \
    simulator_interfaces/eclsimulator.cpp \
    simulator_interfaces/simulator.cpp \
    simulator_interfaces/driver_file_writers/ecldriverfilewriter.cpp \
    simulator_interfaces/driver_file_writers/driver_parts/driverpart.cpp \
    simulator_interfaces/driver_file_writers/driver_parts/ecl_driver_parts/welspecs.cpp \
    simulator_interfaces/driver_file_writers/driver_parts/ecl_driver_parts/ecldriverpart.cpp \
    simulator_interfaces/driver_file_writers/driver_parts/ecl_driver_parts/compdat.cpp \
    simulator_interfaces/driver_file_writers/driver_parts/ecl_driver_parts/wellcontrols.cpp \
    simulator_interfaces/driver_file_writers/driver_parts/ecl_driver_parts/grid_section.cpp \
    simulator_interfaces/driver_file_writers/driver_parts/ecl_driver_parts/runspec_section.cpp \
    simulator_interfaces/driver_file_writers/driver_parts/ecl_driver_parts/props_section.cpp \
    simulator_interfaces/driver_file_writers/driver_parts/ecl_driver_parts/solution_section.cpp \
    simulator_interfaces/driver_file_writers/driver_parts/ecl_driver_parts/summary_section.cpp
