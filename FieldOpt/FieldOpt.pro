TEMPLATE = subdirs
CONFIG += c++11

SUBDIRS = \
    ERTWrapper \
    Library \
    Console \
    GTest \
    Model \
    Utilities \
    Optimization \
    Simulation

Library.depends = ERTWrapper
GTest.depends = ERTWrapper Utilities Model
Model.depends = ERTWrapper Utilities
Optimization.depends = Model Utilities
Simulation.depends = Model Utilities
Console.depends = ERTWrapper Library

OTHER_FILES += \
    defaults.pri \
    ../examples/MRST/compass/driver.dat \
    ../examples/MRST/compass/driver_kongull.dat
