/********************************************************************************
** Form generated from reading UI file 'crudcareer.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CRUDCAREER_H
#define UI_CRUDCAREER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CrudCareer
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tbInsert;
    QLabel *lbIdCareer;
    QLabel *lbCareer;
    QLabel *lbTitle;
    QLineEdit *lneIdCareer;
    QLineEdit *lneCareer;
    QPushButton *pbInsert;
    QPushButton *pbExit;
    QWidget *tbQuery;
    QLabel *lbSearch;
    QLineEdit *lneCritery;
    QComboBox *cboCritery;
    QTableView *tvQuery;
    QWidget *tbUpdate;
    QGroupBox *gbIdCareer;
    QLineEdit *lneIdQuery;
    QLabel *lbIdQuery;
    QPushButton *pbSearch;
    QGroupBox *gbCareer;
    QLabel *lbCareerQuery;
    QLineEdit *lneCareerQuery;
    QPushButton *pbExit2;
    QPushButton *pbUpdate;

    void setupUi(QMainWindow *CrudCareer)
    {
        if (CrudCareer->objectName().isEmpty())
            CrudCareer->setObjectName(QStringLiteral("CrudCareer"));
        CrudCareer->resize(684, 306);
        CrudCareer->setMinimumSize(QSize(684, 306));
        CrudCareer->setMaximumSize(QSize(684, 306));
        QIcon icon;
        icon.addFile(QStringLiteral(":/book-flat.ico"), QSize(), QIcon::Normal, QIcon::Off);
        CrudCareer->setWindowIcon(icon);
        CrudCareer->setStyleSheet(QLatin1String("background-color: rgb(65, 91, 118);\n"
""));
        centralwidget = new QWidget(CrudCareer);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(20, 20, 651, 261));
        QFont font;
        font.setFamily(QStringLiteral("Raleway"));
        font.setPointSize(9);
        tabWidget->setFont(font);
        tabWidget->setStyleSheet(QStringLiteral("background-color: rgb(238, 244, 242); color: rgb(35, 54, 86);"));
        tbInsert = new QWidget();
        tbInsert->setObjectName(QStringLiteral("tbInsert"));
        lbIdCareer = new QLabel(tbInsert);
        lbIdCareer->setObjectName(QStringLiteral("lbIdCareer"));
        lbIdCareer->setGeometry(QRect(35, 92, 71, 16));
        QFont font1;
        font1.setFamily(QStringLiteral("Raleway"));
        font1.setBold(true);
        font1.setWeight(75);
        lbIdCareer->setFont(font1);
        lbCareer = new QLabel(tbInsert);
        lbCareer->setObjectName(QStringLiteral("lbCareer"));
        lbCareer->setGeometry(QRect(35, 122, 55, 16));
        lbCareer->setFont(font1);
        lbTitle = new QLabel(tbInsert);
        lbTitle->setObjectName(QStringLiteral("lbTitle"));
        lbTitle->setGeometry(QRect(190, 10, 261, 20));
        lbTitle->setMaximumSize(QSize(16777215, 20));
        QFont font2;
        font2.setFamily(QStringLiteral("Raleway"));
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        lbTitle->setFont(font2);
        lbTitle->setStyleSheet(QStringLiteral("color: rgb(35, 54, 86);"));
        lneIdCareer = new QLineEdit(tbInsert);
        lneIdCareer->setObjectName(QStringLiteral("lneIdCareer"));
        lneIdCareer->setEnabled(false);
        lneIdCareer->setGeometry(QRect(100, 90, 91, 22));
        QFont font3;
        font3.setFamily(QStringLiteral("Raleway"));
        lneIdCareer->setFont(font3);
        lneIdCareer->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lneCareer = new QLineEdit(tbInsert);
        lneCareer->setObjectName(QStringLiteral("lneCareer"));
        lneCareer->setGeometry(QRect(100, 120, 201, 22));
        lneCareer->setFont(font3);
        lneCareer->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        pbInsert = new QPushButton(tbInsert);
        pbInsert->setObjectName(QStringLiteral("pbInsert"));
        pbInsert->setGeometry(QRect(340, 60, 291, 61));
        pbInsert->setFont(font1);
        pbInsert->setStyleSheet(QLatin1String("QPushButton#pbInsert {\n"
"background-color: rgb(123, 155, 166);\n"
"color:  rgb(255, 255, 255);\n"
"border-radius: 5px;\n"
" }\n"
"\n"
" QPushButton#pbInsert:hover {\n"
"background-color: rgb(65, 91, 118);\n"
"color:  rgb(255, 255, 255);\n"
" }"));
        pbExit = new QPushButton(tbInsert);
        pbExit->setObjectName(QStringLiteral("pbExit"));
        pbExit->setGeometry(QRect(340, 130, 291, 61));
        pbExit->setFont(font1);
        pbExit->setStyleSheet(QLatin1String("QPushButton#pbExit {\n"
"background-color: rgb(123, 155, 166);\n"
"color:  rgb(255, 255, 255);\n"
"border-radius: 5px;\n"
" }\n"
"\n"
" QPushButton#pbExit:hover {\n"
"background-color: rgb(65, 91, 118);\n"
"color:  rgb(255, 255, 255);\n"
" }"));
        tabWidget->addTab(tbInsert, QString());
        tbQuery = new QWidget();
        tbQuery->setObjectName(QStringLiteral("tbQuery"));
        lbSearch = new QLabel(tbQuery);
        lbSearch->setObjectName(QStringLiteral("lbSearch"));
        lbSearch->setGeometry(QRect(10, 14, 81, 16));
        QFont font4;
        font4.setFamily(QStringLiteral("Raleway"));
        font4.setPointSize(9);
        font4.setBold(true);
        font4.setWeight(75);
        lbSearch->setFont(font4);
        lneCritery = new QLineEdit(tbQuery);
        lneCritery->setObjectName(QStringLiteral("lneCritery"));
        lneCritery->setGeometry(QRect(93, 12, 321, 22));
        lneCritery->setFont(font);
        lneCritery->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        cboCritery = new QComboBox(tbQuery);
        cboCritery->setObjectName(QStringLiteral("cboCritery"));
        cboCritery->setGeometry(QRect(430, 12, 201, 22));
        cboCritery->setFont(font3);
        cboCritery->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        tvQuery = new QTableView(tbQuery);
        tvQuery->setObjectName(QStringLiteral("tvQuery"));
        tvQuery->setGeometry(QRect(10, 50, 621, 171));
        tabWidget->addTab(tbQuery, QString());
        tbUpdate = new QWidget();
        tbUpdate->setObjectName(QStringLiteral("tbUpdate"));
        gbIdCareer = new QGroupBox(tbUpdate);
        gbIdCareer->setObjectName(QStringLiteral("gbIdCareer"));
        gbIdCareer->setGeometry(QRect(10, 10, 381, 51));
        lneIdQuery = new QLineEdit(gbIdCareer);
        lneIdQuery->setObjectName(QStringLiteral("lneIdQuery"));
        lneIdQuery->setGeometry(QRect(77, 13, 151, 22));
        lneIdQuery->setFont(font3);
        lneIdQuery->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lbIdQuery = new QLabel(gbIdCareer);
        lbIdQuery->setObjectName(QStringLiteral("lbIdQuery"));
        lbIdQuery->setGeometry(QRect(8, 15, 61, 16));
        lbIdQuery->setFont(font1);
        pbSearch = new QPushButton(gbIdCareer);
        pbSearch->setObjectName(QStringLiteral("pbSearch"));
        pbSearch->setGeometry(QRect(240, 10, 121, 28));
        pbSearch->setStyleSheet(QLatin1String("QPushButton#pbSearch {\n"
"background-color: rgb(123, 155, 166);\n"
"color:  rgb(255, 255, 255);\n"
"border-radius: 5px;\n"
" }\n"
"\n"
" QPushButton#pbSearch:hover {\n"
"background-color: rgb(65, 91, 118);\n"
"color:  rgb(255, 255, 255);\n"
" }"));
        gbCareer = new QGroupBox(tbUpdate);
        gbCareer->setObjectName(QStringLiteral("gbCareer"));
        gbCareer->setEnabled(false);
        gbCareer->setGeometry(QRect(10, 70, 621, 151));
        lbCareerQuery = new QLabel(gbCareer);
        lbCareerQuery->setObjectName(QStringLiteral("lbCareerQuery"));
        lbCareerQuery->setGeometry(QRect(10, 67, 51, 16));
        lbCareerQuery->setFont(font1);
        lneCareerQuery = new QLineEdit(gbCareer);
        lneCareerQuery->setObjectName(QStringLiteral("lneCareerQuery"));
        lneCareerQuery->setGeometry(QRect(60, 65, 231, 22));
        lneCareerQuery->setFont(font3);
        lneCareerQuery->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        pbExit2 = new QPushButton(gbCareer);
        pbExit2->setObjectName(QStringLiteral("pbExit2"));
        pbExit2->setGeometry(QRect(310, 80, 291, 61));
        pbExit2->setFont(font1);
        pbExit2->setStyleSheet(QLatin1String("QPushButton#pbExit2 {\n"
"background-color: rgb(123, 155, 166);\n"
"color:  rgb(255, 255, 255);\n"
"border-radius: 5px;\n"
" }\n"
"\n"
" QPushButton#pbExit2:hover {\n"
"background-color: rgb(65, 91, 118);\n"
"color:  rgb(255, 255, 255);\n"
" }"));
        pbUpdate = new QPushButton(gbCareer);
        pbUpdate->setObjectName(QStringLiteral("pbUpdate"));
        pbUpdate->setGeometry(QRect(310, 10, 291, 61));
        pbUpdate->setFont(font1);
        pbUpdate->setStyleSheet(QLatin1String("QPushButton#pbUpdate {\n"
"background-color: rgb(123, 155, 166);\n"
"color:  rgb(255, 255, 255);\n"
"border-radius: 5px;\n"
" }\n"
"\n"
" QPushButton#pbUpdate:hover {\n"
"background-color: rgb(65, 91, 118);\n"
"color:  rgb(255, 255, 255);\n"
" }"));
        tabWidget->addTab(tbUpdate, QString());
        CrudCareer->setCentralWidget(centralwidget);

        retranslateUi(CrudCareer);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(CrudCareer);
    } // setupUi

    void retranslateUi(QMainWindow *CrudCareer)
    {
        CrudCareer->setWindowTitle(QApplication::translate("CrudCareer", "MainWindow", nullptr));
        lbIdCareer->setText(QApplication::translate("CrudCareer", "Id carrera", nullptr));
        lbCareer->setText(QApplication::translate("CrudCareer", "Carrera", nullptr));
        lbTitle->setText(QApplication::translate("CrudCareer", "Administraci\303\263n de carreras", nullptr));
        pbInsert->setText(QApplication::translate("CrudCareer", "Insertar carrera", nullptr));
        pbExit->setText(QApplication::translate("CrudCareer", "Salir al men\303\272 principal", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tbInsert), QApplication::translate("CrudCareer", "Agregar carrera", nullptr));
        lbSearch->setText(QApplication::translate("CrudCareer", "Busqueda:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tbQuery), QApplication::translate("CrudCareer", "Buscar carrera", nullptr));
        gbIdCareer->setTitle(QString());
        lbIdQuery->setText(QApplication::translate("CrudCareer", "Id carrera", nullptr));
        pbSearch->setText(QApplication::translate("CrudCareer", "Buscar", nullptr));
        gbCareer->setTitle(QString());
        lbCareerQuery->setText(QApplication::translate("CrudCareer", "Carrera", nullptr));
        lneCareerQuery->setText(QString());
        pbExit2->setText(QApplication::translate("CrudCareer", "Salir al men\303\272 principal", nullptr));
        pbUpdate->setText(QApplication::translate("CrudCareer", "Actualizar carrera", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tbUpdate), QApplication::translate("CrudCareer", "Modificar carrera", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CrudCareer: public Ui_CrudCareer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CRUDCAREER_H
