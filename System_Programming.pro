QT       += core gui multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    door.cpp \
    endscreen.cpp \
    main.cpp \
    mainwindow.cpp \
    painting.cpp \
    puzzle.cpp \
    puzzle2.cpp \
    story.cpp  \
    table.cpp \
    wall.cpp

HEADERS += \
    door.h \
    endscreen.h \
    mainwindow.h \
    painting.h \
    puzzle.h \
    puzzle2.h \
    story.h \
    table.h \
    wall.h

FORMS += \
    door.ui \
    endscreen.ui \
    mainwindow.ui \
    painting.ui \
    puzzle.ui \
    puzzle2.ui \
    story.ui \
    table.ui \
    wall.ui

TRANSLATIONS += \
    System_Programming_en_IN.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources.qrc
