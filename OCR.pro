QT       += core gui
QT += axcontainer

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Custom/CustomListView.cpp \
    DataFile.cpp \
    Error_info_view.cpp \
    Messgae_pass.cpp \
    Settings.cpp \
    main.cpp \
    MainWindow.cpp

HEADERS += \
    CPU/CpuDetails.h \
    Custom/CustomListView.h \
    DataFile.h \
    Error_info_view.h \
    MainWindow.h \
    Messgae_pass.h \
    Settings.h

FORMS += \
    Error_info_view.ui \
    MainWindow.ui \
    Settings.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    icons.qrc
