#-------------------------------------------------
#
# Project created by QtCreator 2018-10-26T13:33:26
#
#-------------------------------------------------

QT       += core gui sql network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = biblioteca
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
        loginbiblioteca.cpp \
    mainmenu.cpp \
    loadingwindow.cpp \
    crudstudent.cpp \
    crudcareer.cpp \
    crudteacher.cpp \
    student.cpp \
    user.cpp \
    teacher.cpp \
    crudauthor.cpp \
    crudpublishers.cpp \
    crudbook.cpp \
    book.cpp \
    searchbook.cpp \
    updatebook.cpp \
    loans.cpp \
    loanreport.cpp \
    backloan.cpp \
    career.cpp \
    author.cpp \
    publisher.cpp \
    userlogin.cpp

HEADERS += \
        loginbiblioteca.h \
    mainmenu.h \
    loadingwindow.h \
    crudstudent.h \
    crudcareer.h \
    crudteacher.h \
    student.h \
    user.h \
    teacher.h \
    crudauthor.h \
    crudpublishers.h \
    crudbook.h \
    book.h \
    searchbook.h \
    updatebook.h \
    loans.h \
    loanreport.h \
    backloan.h \
    career.h \
    author.h \
    publisher.h \
    userlogin.h

FORMS += \
        loginbiblioteca.ui \
    mainmenu.ui \
    loadingwindow.ui \
    crudstudent.ui \
    crudcareer.ui \
    crudteacher.ui \
    crudauthor.ui \
    crudpublishers.ui \
    searchbook.ui \
    updatebook.ui \
    loans.ui \
    loanreport.ui \
    backloan.ui \
    crudbook.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES +=

RESOURCES += \
    images.qrc
