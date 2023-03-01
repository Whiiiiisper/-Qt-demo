#-------------------------------------------------
#
# Project created by QtCreator 2014-07-12T11:34:48
#
#-------------------------------------------------

QT       += core gui quickwidgets

INCLUDEPATH += = ./util ./include

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = EzvizQtDemo
TEMPLATE = app

mac {
    QMAKE_INFO_PLIST = info.plist
    QMAKE_LFLAGS_SONAME  = -Wl,-install_name,@executable_path/../Frameworks/
}

CONFIG += c++11

SOURCES += main.cpp\
    mainwindow.cpp \
    cameramodel.cpp \
    opennetstream.cpp \
    qcalendarproxy.cpp \
    recordmodel.cpp \
    alarmmodel.cpp \
    localsetting.cpp \
    loginwindow.cpp \
    util/json/json_reader.cpp \
    util/json/json_value.cpp \
    util/json/json_writer.cpp \
    alarmmessagewindow.cpp \
    pushalarmmodel.cpp \
    loginthread.cpp \
    switchplat_dialog.cpp \
    singledevicelogin.cpp

HEADERS  += \
    mainwindow.h \
    cameramodel.h \
    opennetstream.h \
    opennetstream_p.h \
    qcalendarproxy.h \
    recordmodel.h \
    alarmmodel.h \
    localsetting.h \
    loginwindow.h \
    util/json/autolink.h \
    util/json/config.h \
    util/json/features.h \
    util/json/forwards.h \
    util/json/json.h \
    util/json/json_batchallocator.h \
    util/json/reader.h \
    util/json/value.h \
    util/json/writer.h \
    OpenNetStreamError.h \
    GeneratedFiles/ui_mainwindow.h \
    alarmmessagewindow.h \
    pushalarmmodel.h \
    include/OpenNetStreamInterFace.h \
    include/OpenNetStreamError.h \
    include/OpenNetStreamDefine.h \
    loginthread.h \
    switchplat_dialog.h \
    singledevicelogin.h

FORMS    += mainwindow.ui \

OTHER_FILES +=

RESOURCES += \
    resource.qrc

DESTDIR += \
    ../bin

TRANSLATIONS    += EzvizQtDemo_zh.ts
