/********************************************************************************
** Form generated from reading UI file 'crudpublishers.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CRUDPUBLISHERS_H
#define UI_CRUDPUBLISHERS_H

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

class Ui_CrudPublishers
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tbInsert;
    QLabel *lbIdPublishers;
    QLabel *lbPublishers;
    QLabel *lbTitle;
    QLineEdit *lneIdPublishers;
    QLineEdit *lnePublishers;
    QPushButton *pbInsert;
    QPushButton *pbExit;
    QWidget *tbQuery;
    QLabel *lbSearch;
    QLineEdit *lneCritery;
    QComboBox *cboCritery;
    QTableView *tvQuery;
    QWidget *tbUpdate;
    QGroupBox *gbIdCareer;
    QLineEdit *lneIdPublishersUpdate;
    QLabel *lbIdPublishersUpdate;
    QPushButton *pbSearch;
    QGroupBox *gbCareer;
    QLabel *lbPublishersUpdate;
    QLineEdit *lnePublishersUpdate;
    QPushButton *pbExit2;
    QPushButton *pbUpdate;
    QLabel *label;

    void setupUi(QMainWindow *CrudPublishers)
    {
        if (CrudPublishers->objectName().isEmpty())
            CrudPublishers->setObjectName(QStringLiteral("CrudPublishers"));
        CrudPublishers->resize(673, 283);
        CrudPublishers->setMinimumSize(QSize(673, 283));
        CrudPublishers->setMaximumSize(QSize(673, 283));
        QIcon icon;
        icon.addFile(QStringLiteral(":/book-flat.ico"), QSize(), QIcon::Normal, QIcon::Off);
        CrudPublishers->setWindowIcon(icon);
        CrudPublishers->setStyleSheet(QStringLiteral(""));
        centralwidget = new QWidget(CrudPublishers);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 651, 261));
        QFont font;
        font.setFamily(QStringLiteral("Raleway"));
        font.setPointSize(9);
        tabWidget->setFont(font);
        tabWidget->setStyleSheet(QStringLiteral("background-color: rgb(238, 244, 242); color: rgb(35, 54, 86);"));
        tbInsert = new QWidget();
        tbInsert->setObjectName(QStringLiteral("tbInsert"));
        lbIdPublishers = new QLabel(tbInsert);
        lbIdPublishers->setObjectName(QStringLiteral("lbIdPublishers"));
        lbIdPublishers->setGeometry(QRect(20, 92, 91, 16));
        QFont font1;
        font1.setFamily(QStringLiteral("Raleway"));
        font1.setBold(true);
        font1.setWeight(75);
        lbIdPublishers->setFont(font1);
        lbPublishers = new QLabel(tbInsert);
        lbPublishers->setObjectName(QStringLiteral("lbPublishers"));
        lbPublishers->setGeometry(QRect(30, 122, 71, 16));
        lbPublishers->setFont(font1);
        lbTitle = new QLabel(tbInsert);
        lbTitle->setObjectName(QStringLiteral("lbTitle"));
        lbTitle->setGeometry(QRect(180, 10, 291, 20));
        lbTitle->setMaximumSize(QSize(16777215, 20));
        QFont font2;
        font2.setFamily(QStringLiteral("Raleway"));
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        lbTitle->setFont(font2);
        lbTitle->setStyleSheet(QStringLiteral("color: rgb(35, 54, 86);"));
        lneIdPublishers = new QLineEdit(tbInsert);
        lneIdPublishers->setObjectName(QStringLiteral("lneIdPublishers"));
        lneIdPublishers->setEnabled(false);
        lneIdPublishers->setGeometry(QRect(110, 90, 91, 22));
        QFont font3;
        font3.setFamily(QStringLiteral("Raleway"));
        lneIdPublishers->setFont(font3);
        lneIdPublishers->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lnePublishers = new QLineEdit(tbInsert);
        lnePublishers->setObjectName(QStringLiteral("lnePublishers"));
        lnePublishers->setGeometry(QRect(110, 120, 201, 22));
        lnePublishers->setFont(font3);
        lnePublishers->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lnePublishers->setMaxLength(55);
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
        lneIdPublishersUpdate = new QLineEdit(gbIdCareer);
        lneIdPublishersUpdate->setObjectName(QStringLiteral("lneIdPublishersUpdate"));
        lneIdPublishersUpdate->setGeometry(QRect(80, 13, 141, 22));
        lneIdPublishersUpdate->setFont(font3);
        lneIdPublishersUpdate->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lneIdPublishersUpdate->setMaxLength(10);
        lbIdPublishersUpdate = new QLabel(gbIdCareer);
        lbIdPublishersUpdate->setObjectName(QStringLiteral("lbIdPublishersUpdate"));
        lbIdPublishersUpdate->setGeometry(QRect(8, 15, 71, 16));
        lbIdPublishersUpdate->setFont(font1);
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
        lbPublishersUpdate = new QLabel(gbCareer);
        lbPublishersUpdate->setObjectName(QStringLiteral("lbPublishersUpdate"));
        lbPublishersUpdate->setGeometry(QRect(10, 67, 51, 16));
        lbPublishersUpdate->setFont(font1);
        lnePublishersUpdate = new QLineEdit(gbCareer);
        lnePublishersUpdate->setObjectName(QStringLiteral("lnePublishersUpdate"));
        lnePublishersUpdate->setGeometry(QRect(70, 65, 221, 22));
        lnePublishersUpdate->setFont(font3);
        lnePublishersUpdate->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lnePublishersUpdate->setMaxLength(55);
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
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(-6, -5, 691, 321));
        label->setStyleSheet(QLatin1String("background-color: rgb(65, 91, 118);\n"
""));
        CrudPublishers->setCentralWidget(centralwidget);
        label->raise();
        tabWidget->raise();

        retranslateUi(CrudPublishers);
        QObject::connect(pbExit, SIGNAL(clicked()), CrudPublishers, SLOT(close()));
        QObject::connect(lneIdPublishers, SIGNAL(returnPressed()), lnePublishers, SLOT(setFocus()));
        QObject::connect(pbExit2, SIGNAL(clicked()), CrudPublishers, SLOT(close()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(CrudPublishers);
    } // setupUi

    void retranslateUi(QMainWindow *CrudPublishers)
    {
        CrudPublishers->setWindowTitle(QApplication::translate("CrudPublishers", "Administraci\303\263n de editoriales", nullptr));
        lbIdPublishers->setText(QApplication::translate("CrudPublishers", "Id editoriales", nullptr));
        lbPublishers->setText(QApplication::translate("CrudPublishers", "Editoriales", nullptr));
        lbTitle->setText(QApplication::translate("CrudPublishers", "Administraci\303\263n de editoriales", nullptr));
        pbInsert->setText(QApplication::translate("CrudPublishers", "Insertar editoriales", nullptr));
        pbExit->setText(QApplication::translate("CrudPublishers", "Salir al men\303\272 principal", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tbInsert), QApplication::translate("CrudPublishers", "Agregar editorial", nullptr));
        lbSearch->setText(QApplication::translate("CrudPublishers", "Busqueda:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tbQuery), QApplication::translate("CrudPublishers", "Buscar editorial", nullptr));
        gbIdCareer->setTitle(QString());
        lbIdPublishersUpdate->setText(QApplication::translate("CrudPublishers", "Id editorial", nullptr));
        pbSearch->setText(QApplication::translate("CrudPublishers", "Buscar", nullptr));
        gbCareer->setTitle(QString());
        lbPublishersUpdate->setText(QApplication::translate("CrudPublishers", "Editorial", nullptr));
        lnePublishersUpdate->setText(QString());
        pbExit2->setText(QApplication::translate("CrudPublishers", "Salir al men\303\272 principal", nullptr));
        pbUpdate->setText(QApplication::translate("CrudPublishers", "Actualizar editorial", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tbUpdate), QApplication::translate("CrudPublishers", "Modificar editorial", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CrudPublishers: public Ui_CrudPublishers {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CRUDPUBLISHERS_H
