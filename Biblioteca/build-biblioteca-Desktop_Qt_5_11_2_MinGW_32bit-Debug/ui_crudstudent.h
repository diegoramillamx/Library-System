/********************************************************************************
** Form generated from reading UI file 'crudstudent.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CRUDSTUDENT_H
#define UI_CRUDSTUDENT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CrudStudent
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tbAltas;
    QGroupBox *gbSecundary;
    QGridLayout *gridLayout_3;
    QScrollArea *scrollArea;
    QWidget *areaContent1;
    QHBoxLayout *horizontalLayout;
    QLabel *lbName;
    QLineEdit *lneFirsName;
    QLabel *lbMotherLastName;
    QLineEdit *lneFatherLastName;
    QLabel *lbFatherLastName;
    QLineEdit *lneMotherLastName;
    QScrollArea *scrollArea_2;
    QWidget *areaContent2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lbStreet;
    QLineEdit *lneStreet;
    QLabel *lbStreetNumber;
    QLineEdit *lneStreetNumber;
    QLabel *lbColony;
    QLineEdit *lneColony;
    QLabel *lbCity;
    QLineEdit *lneCity;
    QScrollArea *scrollArea_3;
    QWidget *areaContent3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lbPostalCode;
    QLineEdit *lnePostalCode;
    QLabel *lbCellphone;
    QLineEdit *lneCellphone;
    QLabel *lbCareer;
    QComboBox *cboCareer;
    QLabel *label;
    QPushButton *pbInsert;
    QPushButton *pbExit_2;
    QWidget *tbConsultas;
    QGridLayout *gridLayout_2;
    QGroupBox *gbSearch;
    QGridLayout *gridLayout;
    QGroupBox *gbThings;
    QHBoxLayout *horizontalLayout_5;
    QLabel *lbSearch;
    QLineEdit *lneSearch;
    QLabel *lbCriteries;
    QComboBox *cboCriteries;
    QTableView *tvQuery;
    QWidget *tab;
    QGroupBox *gbSecundaryQuery;
    QScrollArea *scrollArea_4;
    QWidget *areaContent1_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *lbName_2;
    QLineEdit *lneFirsNameQuery;
    QLabel *lbMotherLastName_2;
    QLineEdit *lneFatherLastNameQuery;
    QLabel *lbFatherLastName_2;
    QLineEdit *lneMotherLastNameQuery;
    QScrollArea *scrollArea_5;
    QWidget *areaContent2_2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *lbStreetQuery;
    QLineEdit *lneStreetQuery;
    QLabel *lbStreetNumberQuery;
    QLineEdit *lneStreetNumberQuery;
    QLabel *lbColonyQuery;
    QLineEdit *lneColonyQuery;
    QScrollArea *scrollArea_6;
    QWidget *areaContent3_2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *lbCityQuery;
    QLineEdit *lneCityQuery;
    QLabel *lbPostalCodeQuery;
    QLineEdit *lnePostalCodeQuery;
    QLabel *lbCellphoneQuery;
    QLineEdit *lneCellphoneQuery;
    QPushButton *pbInsert_3;
    QPushButton *pbExit;
    QGroupBox *gbCodeQuery;
    QHBoxLayout *horizontalLayout_8;
    QLabel *lbCode;
    QLineEdit *lneCode;
    QPushButton *pbQuery;
    QLabel *label_2;

    void setupUi(QMainWindow *CrudStudent)
    {
        if (CrudStudent->objectName().isEmpty())
            CrudStudent->setObjectName(QStringLiteral("CrudStudent"));
        CrudStudent->resize(898, 350);
        CrudStudent->setMinimumSize(QSize(898, 350));
        CrudStudent->setMaximumSize(QSize(898, 350));
        CrudStudent->setSizeIncrement(QSize(898, 390));
        QIcon icon;
        icon.addFile(QStringLiteral(":/book-flat.ico"), QSize(), QIcon::Normal, QIcon::Off);
        CrudStudent->setWindowIcon(icon);
        CrudStudent->setStyleSheet(QStringLiteral(""));
        centralwidget = new QWidget(CrudStudent);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(11, 11, 871, 317));
        tabWidget->setMinimumSize(QSize(871, 317));
        tabWidget->setMaximumSize(QSize(871, 317));
        QFont font;
        font.setFamily(QStringLiteral("Raleway"));
        font.setBold(true);
        font.setWeight(75);
        tabWidget->setFont(font);
        tabWidget->setStyleSheet(QStringLiteral("background-color: rgb(238, 244, 242); color: rgb(35, 54, 86);"));
        tbAltas = new QWidget();
        tbAltas->setObjectName(QStringLiteral("tbAltas"));
        gbSecundary = new QGroupBox(tbAltas);
        gbSecundary->setObjectName(QStringLiteral("gbSecundary"));
        gbSecundary->setGeometry(QRect(16, 28, 829, 185));
        gbSecundary->setStyleSheet(QStringLiteral("background-color: rgb(238, 244, 242);"));
        gridLayout_3 = new QGridLayout(gbSecundary);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        scrollArea = new QScrollArea(gbSecundary);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setMaximumSize(QSize(16777215, 40));
        scrollArea->setStyleSheet(QStringLiteral("border: 0px;"));
        scrollArea->setWidgetResizable(true);
        areaContent1 = new QWidget();
        areaContent1->setObjectName(QStringLiteral("areaContent1"));
        areaContent1->setGeometry(QRect(0, 0, 805, 40));
        horizontalLayout = new QHBoxLayout(areaContent1);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lbName = new QLabel(areaContent1);
        lbName->setObjectName(QStringLiteral("lbName"));
        lbName->setFont(font);
        lbName->setStyleSheet(QStringLiteral("color: rgb(35, 54, 86);"));

        horizontalLayout->addWidget(lbName);

        lneFirsName = new QLineEdit(areaContent1);
        lneFirsName->setObjectName(QStringLiteral("lneFirsName"));
        QFont font1;
        font1.setFamily(QStringLiteral("Raleway"));
        lneFirsName->setFont(font1);
        lneFirsName->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lneFirsName->setMaxLength(55);

        horizontalLayout->addWidget(lneFirsName);

        lbMotherLastName = new QLabel(areaContent1);
        lbMotherLastName->setObjectName(QStringLiteral("lbMotherLastName"));
        lbMotherLastName->setFont(font);
        lbMotherLastName->setStyleSheet(QStringLiteral("color: rgb(35, 54, 86);"));

        horizontalLayout->addWidget(lbMotherLastName);

        lneFatherLastName = new QLineEdit(areaContent1);
        lneFatherLastName->setObjectName(QStringLiteral("lneFatherLastName"));
        lneFatherLastName->setFont(font1);
        lneFatherLastName->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lneFatherLastName->setMaxLength(55);

        horizontalLayout->addWidget(lneFatherLastName);

        lbFatherLastName = new QLabel(areaContent1);
        lbFatherLastName->setObjectName(QStringLiteral("lbFatherLastName"));
        lbFatherLastName->setFont(font);
        lbFatherLastName->setStyleSheet(QStringLiteral("color: rgb(35, 54, 86);"));

        horizontalLayout->addWidget(lbFatherLastName);

        lneMotherLastName = new QLineEdit(areaContent1);
        lneMotherLastName->setObjectName(QStringLiteral("lneMotherLastName"));
        lneMotherLastName->setFont(font1);
        lneMotherLastName->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lneMotherLastName->setMaxLength(55);

        horizontalLayout->addWidget(lneMotherLastName);

        scrollArea->setWidget(areaContent1);

        gridLayout_3->addWidget(scrollArea, 1, 0, 1, 1);

        scrollArea_2 = new QScrollArea(gbSecundary);
        scrollArea_2->setObjectName(QStringLiteral("scrollArea_2"));
        scrollArea_2->setMaximumSize(QSize(16777215, 40));
        scrollArea_2->setStyleSheet(QStringLiteral("border: 0px;"));
        scrollArea_2->setWidgetResizable(true);
        areaContent2 = new QWidget();
        areaContent2->setObjectName(QStringLiteral("areaContent2"));
        areaContent2->setGeometry(QRect(0, 0, 805, 40));
        horizontalLayout_2 = new QHBoxLayout(areaContent2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        lbStreet = new QLabel(areaContent2);
        lbStreet->setObjectName(QStringLiteral("lbStreet"));
        lbStreet->setFont(font);
        lbStreet->setStyleSheet(QStringLiteral("color: rgb(35, 54, 86);"));

        horizontalLayout_2->addWidget(lbStreet);

        lneStreet = new QLineEdit(areaContent2);
        lneStreet->setObjectName(QStringLiteral("lneStreet"));
        lneStreet->setFont(font1);
        lneStreet->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lneStreet->setMaxLength(110);

        horizontalLayout_2->addWidget(lneStreet);

        lbStreetNumber = new QLabel(areaContent2);
        lbStreetNumber->setObjectName(QStringLiteral("lbStreetNumber"));
        lbStreetNumber->setFont(font);
        lbStreetNumber->setStyleSheet(QStringLiteral("color: rgb(35, 54, 86);"));

        horizontalLayout_2->addWidget(lbStreetNumber);

        lneStreetNumber = new QLineEdit(areaContent2);
        lneStreetNumber->setObjectName(QStringLiteral("lneStreetNumber"));
        lneStreetNumber->setMaximumSize(QSize(70, 16777215));
        lneStreetNumber->setFont(font1);
        lneStreetNumber->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lneStreetNumber->setMaxLength(6);

        horizontalLayout_2->addWidget(lneStreetNumber);

        lbColony = new QLabel(areaContent2);
        lbColony->setObjectName(QStringLiteral("lbColony"));
        lbColony->setFont(font);
        lbColony->setStyleSheet(QStringLiteral("color: rgb(35, 54, 86);"));

        horizontalLayout_2->addWidget(lbColony);

        lneColony = new QLineEdit(areaContent2);
        lneColony->setObjectName(QStringLiteral("lneColony"));
        lneColony->setFont(font1);
        lneColony->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lneColony->setMaxLength(55);

        horizontalLayout_2->addWidget(lneColony);

        lbCity = new QLabel(areaContent2);
        lbCity->setObjectName(QStringLiteral("lbCity"));
        lbCity->setFont(font);
        lbCity->setStyleSheet(QStringLiteral("color: rgb(35, 54, 86);"));

        horizontalLayout_2->addWidget(lbCity);

        lneCity = new QLineEdit(areaContent2);
        lneCity->setObjectName(QStringLiteral("lneCity"));
        lneCity->setFont(font1);
        lneCity->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lneCity->setMaxLength(60);

        horizontalLayout_2->addWidget(lneCity);

        scrollArea_2->setWidget(areaContent2);

        gridLayout_3->addWidget(scrollArea_2, 2, 0, 1, 1);

        scrollArea_3 = new QScrollArea(gbSecundary);
        scrollArea_3->setObjectName(QStringLiteral("scrollArea_3"));
        scrollArea_3->setMaximumSize(QSize(16777215, 40));
        scrollArea_3->setStyleSheet(QStringLiteral("border: 0px;"));
        scrollArea_3->setWidgetResizable(true);
        areaContent3 = new QWidget();
        areaContent3->setObjectName(QStringLiteral("areaContent3"));
        areaContent3->setGeometry(QRect(0, 0, 805, 40));
        horizontalLayout_3 = new QHBoxLayout(areaContent3);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        lbPostalCode = new QLabel(areaContent3);
        lbPostalCode->setObjectName(QStringLiteral("lbPostalCode"));
        lbPostalCode->setFont(font);
        lbPostalCode->setStyleSheet(QStringLiteral("color: rgb(35, 54, 86);"));

        horizontalLayout_3->addWidget(lbPostalCode);

        lnePostalCode = new QLineEdit(areaContent3);
        lnePostalCode->setObjectName(QStringLiteral("lnePostalCode"));
        lnePostalCode->setFont(font1);
        lnePostalCode->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lnePostalCode->setMaxLength(6);

        horizontalLayout_3->addWidget(lnePostalCode);

        lbCellphone = new QLabel(areaContent3);
        lbCellphone->setObjectName(QStringLiteral("lbCellphone"));
        lbCellphone->setFont(font);
        lbCellphone->setStyleSheet(QStringLiteral("color: rgb(35, 54, 86);"));

        horizontalLayout_3->addWidget(lbCellphone);

        lneCellphone = new QLineEdit(areaContent3);
        lneCellphone->setObjectName(QStringLiteral("lneCellphone"));
        lneCellphone->setFont(font1);
        lneCellphone->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lneCellphone->setMaxLength(10);

        horizontalLayout_3->addWidget(lneCellphone);

        lbCareer = new QLabel(areaContent3);
        lbCareer->setObjectName(QStringLiteral("lbCareer"));
        lbCareer->setFont(font);
        lbCareer->setStyleSheet(QStringLiteral("color: rgb(35, 54, 86);"));

        horizontalLayout_3->addWidget(lbCareer);

        cboCareer = new QComboBox(areaContent3);
        cboCareer->setObjectName(QStringLiteral("cboCareer"));
        cboCareer->setMinimumSize(QSize(200, 0));
        cboCareer->setFont(font1);
        cboCareer->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout_3->addWidget(cboCareer);

        scrollArea_3->setWidget(areaContent3);

        gridLayout_3->addWidget(scrollArea_3, 4, 0, 1, 1);

        label = new QLabel(gbSecundary);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(16777215, 20));
        QFont font2;
        font2.setFamily(QStringLiteral("Raleway"));
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        label->setFont(font2);
        label->setStyleSheet(QStringLiteral("color: rgb(35, 54, 86);"));

        gridLayout_3->addWidget(label, 0, 0, 1, 1, Qt::AlignHCenter);

        pbInsert = new QPushButton(tbAltas);
        pbInsert->setObjectName(QStringLiteral("pbInsert"));
        pbInsert->setGeometry(QRect(20, 230, 300, 40));
        pbInsert->setMinimumSize(QSize(300, 40));
        pbInsert->setMaximumSize(QSize(150, 100));
        pbInsert->setFont(font);
        pbInsert->setStyleSheet(QLatin1String("QPushButton#pbInsert {\n"
"background-color: rgb(123, 155, 166);\n"
"border-radius: 5px;\n"
" }\n"
"\n"
" QPushButton#pbInsert:hover {\n"
"background-color: rgb(65, 91, 118);\n"
"color:  rgb(255, 255, 255);\n"
" }"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/user_add.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pbInsert->setIcon(icon1);
        pbInsert->setIconSize(QSize(50, 40));
        pbExit_2 = new QPushButton(tbAltas);
        pbExit_2->setObjectName(QStringLiteral("pbExit_2"));
        pbExit_2->setGeometry(QRect(550, 230, 300, 40));
        pbExit_2->setMinimumSize(QSize(300, 40));
        pbExit_2->setMaximumSize(QSize(150, 100));
        pbExit_2->setFont(font);
        pbExit_2->setStyleSheet(QLatin1String("QPushButton#pbExit_2 {\n"
"background-color: rgb(123, 155, 166);\n"
"border-radius: 5px;\n"
" }\n"
"\n"
" QPushButton#pbExit_2:hover {\n"
"background-color: rgb(65, 91, 118);\n"
"color:  rgb(255, 255, 255);\n"
" }"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/door_out.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pbExit_2->setIcon(icon2);
        pbExit_2->setIconSize(QSize(50, 40));
        tabWidget->addTab(tbAltas, QString());
        tbConsultas = new QWidget();
        tbConsultas->setObjectName(QStringLiteral("tbConsultas"));
        gridLayout_2 = new QGridLayout(tbConsultas);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gbSearch = new QGroupBox(tbConsultas);
        gbSearch->setObjectName(QStringLiteral("gbSearch"));
        gbSearch->setStyleSheet(QStringLiteral("background-color: rgb(238, 244, 242);"));
        gridLayout = new QGridLayout(gbSearch);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gbThings = new QGroupBox(gbSearch);
        gbThings->setObjectName(QStringLiteral("gbThings"));
        horizontalLayout_5 = new QHBoxLayout(gbThings);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        lbSearch = new QLabel(gbThings);
        lbSearch->setObjectName(QStringLiteral("lbSearch"));
        lbSearch->setFont(font);
        lbSearch->setStyleSheet(QStringLiteral(""));

        horizontalLayout_5->addWidget(lbSearch);

        lneSearch = new QLineEdit(gbThings);
        lneSearch->setObjectName(QStringLiteral("lneSearch"));
        lneSearch->setMinimumSize(QSize(0, 0));
        lneSearch->setFont(font1);
        lneSearch->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255)"));

        horizontalLayout_5->addWidget(lneSearch);

        lbCriteries = new QLabel(gbThings);
        lbCriteries->setObjectName(QStringLiteral("lbCriteries"));
        lbCriteries->setFont(font);
        lbCriteries->setStyleSheet(QStringLiteral(""));

        horizontalLayout_5->addWidget(lbCriteries);

        cboCriteries = new QComboBox(gbThings);
        cboCriteries->setObjectName(QStringLiteral("cboCriteries"));
        cboCriteries->setMinimumSize(QSize(250, 0));
        cboCriteries->setFont(font1);
        cboCriteries->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout_5->addWidget(cboCriteries);


        gridLayout->addWidget(gbThings, 0, 0, 1, 1);

        tvQuery = new QTableView(gbSearch);
        tvQuery->setObjectName(QStringLiteral("tvQuery"));
        tvQuery->setFont(font1);
        tvQuery->setStyleSheet(QLatin1String("TableView#tvQuery {\n"
"	background-color: rgb(255, 255, 255);\n"
"	}"));

        gridLayout->addWidget(tvQuery, 1, 0, 1, 1);


        gridLayout_2->addWidget(gbSearch, 0, 0, 1, 1);

        tabWidget->addTab(tbConsultas, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gbSecundaryQuery = new QGroupBox(tab);
        gbSecundaryQuery->setObjectName(QStringLiteral("gbSecundaryQuery"));
        gbSecundaryQuery->setEnabled(false);
        gbSecundaryQuery->setGeometry(QRect(20, 70, 829, 201));
        gbSecundaryQuery->setStyleSheet(QStringLiteral("background-color: rgb(238, 244, 242);"));
        scrollArea_4 = new QScrollArea(gbSecundaryQuery);
        scrollArea_4->setObjectName(QStringLiteral("scrollArea_4"));
        scrollArea_4->setGeometry(QRect(12, 12, 801, 39));
        scrollArea_4->setMaximumSize(QSize(16777215, 40));
        scrollArea_4->setStyleSheet(QStringLiteral("border: 0px;"));
        scrollArea_4->setWidgetResizable(true);
        areaContent1_2 = new QWidget();
        areaContent1_2->setObjectName(QStringLiteral("areaContent1_2"));
        areaContent1_2->setGeometry(QRect(0, 0, 801, 39));
        horizontalLayout_4 = new QHBoxLayout(areaContent1_2);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        lbName_2 = new QLabel(areaContent1_2);
        lbName_2->setObjectName(QStringLiteral("lbName_2"));
        lbName_2->setFont(font);

        horizontalLayout_4->addWidget(lbName_2);

        lneFirsNameQuery = new QLineEdit(areaContent1_2);
        lneFirsNameQuery->setObjectName(QStringLiteral("lneFirsNameQuery"));
        lneFirsNameQuery->setFont(font1);
        lneFirsNameQuery->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lneFirsNameQuery->setMaxLength(55);

        horizontalLayout_4->addWidget(lneFirsNameQuery);

        lbMotherLastName_2 = new QLabel(areaContent1_2);
        lbMotherLastName_2->setObjectName(QStringLiteral("lbMotherLastName_2"));
        lbMotherLastName_2->setFont(font);

        horizontalLayout_4->addWidget(lbMotherLastName_2);

        lneFatherLastNameQuery = new QLineEdit(areaContent1_2);
        lneFatherLastNameQuery->setObjectName(QStringLiteral("lneFatherLastNameQuery"));
        lneFatherLastNameQuery->setFont(font1);
        lneFatherLastNameQuery->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lneFatherLastNameQuery->setMaxLength(55);

        horizontalLayout_4->addWidget(lneFatherLastNameQuery);

        lbFatherLastName_2 = new QLabel(areaContent1_2);
        lbFatherLastName_2->setObjectName(QStringLiteral("lbFatherLastName_2"));
        lbFatherLastName_2->setFont(font);

        horizontalLayout_4->addWidget(lbFatherLastName_2);

        lneMotherLastNameQuery = new QLineEdit(areaContent1_2);
        lneMotherLastNameQuery->setObjectName(QStringLiteral("lneMotherLastNameQuery"));
        lneMotherLastNameQuery->setFont(font1);
        lneMotherLastNameQuery->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lneMotherLastNameQuery->setMaxLength(55);

        horizontalLayout_4->addWidget(lneMotherLastNameQuery);

        scrollArea_4->setWidget(areaContent1_2);
        lneFatherLastNameQuery->raise();
        lbName_2->raise();
        lneFirsNameQuery->raise();
        lbMotherLastName_2->raise();
        lbFatherLastName_2->raise();
        lneMotherLastNameQuery->raise();
        scrollArea_5 = new QScrollArea(gbSecundaryQuery);
        scrollArea_5->setObjectName(QStringLiteral("scrollArea_5"));
        scrollArea_5->setGeometry(QRect(12, 58, 801, 39));
        scrollArea_5->setMaximumSize(QSize(16777215, 40));
        scrollArea_5->setStyleSheet(QStringLiteral("border: 0px;"));
        scrollArea_5->setWidgetResizable(true);
        areaContent2_2 = new QWidget();
        areaContent2_2->setObjectName(QStringLiteral("areaContent2_2"));
        areaContent2_2->setGeometry(QRect(0, 0, 801, 39));
        horizontalLayout_6 = new QHBoxLayout(areaContent2_2);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        lbStreetQuery = new QLabel(areaContent2_2);
        lbStreetQuery->setObjectName(QStringLiteral("lbStreetQuery"));
        lbStreetQuery->setFont(font);

        horizontalLayout_6->addWidget(lbStreetQuery);

        lneStreetQuery = new QLineEdit(areaContent2_2);
        lneStreetQuery->setObjectName(QStringLiteral("lneStreetQuery"));
        lneStreetQuery->setFont(font1);
        lneStreetQuery->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lneStreetQuery->setMaxLength(110);

        horizontalLayout_6->addWidget(lneStreetQuery);

        lbStreetNumberQuery = new QLabel(areaContent2_2);
        lbStreetNumberQuery->setObjectName(QStringLiteral("lbStreetNumberQuery"));
        lbStreetNumberQuery->setFont(font);

        horizontalLayout_6->addWidget(lbStreetNumberQuery);

        lneStreetNumberQuery = new QLineEdit(areaContent2_2);
        lneStreetNumberQuery->setObjectName(QStringLiteral("lneStreetNumberQuery"));
        lneStreetNumberQuery->setMaximumSize(QSize(70, 16777215));
        lneStreetNumberQuery->setFont(font1);
        lneStreetNumberQuery->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lneStreetNumberQuery->setMaxLength(6);

        horizontalLayout_6->addWidget(lneStreetNumberQuery);

        lbColonyQuery = new QLabel(areaContent2_2);
        lbColonyQuery->setObjectName(QStringLiteral("lbColonyQuery"));
        lbColonyQuery->setFont(font);

        horizontalLayout_6->addWidget(lbColonyQuery);

        lneColonyQuery = new QLineEdit(areaContent2_2);
        lneColonyQuery->setObjectName(QStringLiteral("lneColonyQuery"));
        lneColonyQuery->setFont(font1);
        lneColonyQuery->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lneColonyQuery->setMaxLength(55);

        horizontalLayout_6->addWidget(lneColonyQuery);

        scrollArea_5->setWidget(areaContent2_2);
        scrollArea_6 = new QScrollArea(gbSecundaryQuery);
        scrollArea_6->setObjectName(QStringLiteral("scrollArea_6"));
        scrollArea_6->setGeometry(QRect(12, 104, 801, 39));
        scrollArea_6->setMaximumSize(QSize(16777215, 40));
        scrollArea_6->setStyleSheet(QStringLiteral("border: 0px;"));
        scrollArea_6->setWidgetResizable(true);
        areaContent3_2 = new QWidget();
        areaContent3_2->setObjectName(QStringLiteral("areaContent3_2"));
        areaContent3_2->setGeometry(QRect(0, 0, 801, 39));
        horizontalLayout_7 = new QHBoxLayout(areaContent3_2);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        lbCityQuery = new QLabel(areaContent3_2);
        lbCityQuery->setObjectName(QStringLiteral("lbCityQuery"));
        lbCityQuery->setFont(font);

        horizontalLayout_7->addWidget(lbCityQuery);

        lneCityQuery = new QLineEdit(areaContent3_2);
        lneCityQuery->setObjectName(QStringLiteral("lneCityQuery"));
        lneCityQuery->setFont(font1);
        lneCityQuery->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout_7->addWidget(lneCityQuery);

        lbPostalCodeQuery = new QLabel(areaContent3_2);
        lbPostalCodeQuery->setObjectName(QStringLiteral("lbPostalCodeQuery"));
        lbPostalCodeQuery->setFont(font);

        horizontalLayout_7->addWidget(lbPostalCodeQuery);

        lnePostalCodeQuery = new QLineEdit(areaContent3_2);
        lnePostalCodeQuery->setObjectName(QStringLiteral("lnePostalCodeQuery"));
        lnePostalCodeQuery->setFont(font1);
        lnePostalCodeQuery->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lnePostalCodeQuery->setMaxLength(6);

        horizontalLayout_7->addWidget(lnePostalCodeQuery);

        lbCellphoneQuery = new QLabel(areaContent3_2);
        lbCellphoneQuery->setObjectName(QStringLiteral("lbCellphoneQuery"));
        lbCellphoneQuery->setFont(font);

        horizontalLayout_7->addWidget(lbCellphoneQuery);

        lneCellphoneQuery = new QLineEdit(areaContent3_2);
        lneCellphoneQuery->setObjectName(QStringLiteral("lneCellphoneQuery"));
        lneCellphoneQuery->setFont(font1);
        lneCellphoneQuery->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lneCellphoneQuery->setMaxLength(10);

        horizontalLayout_7->addWidget(lneCellphoneQuery);

        scrollArea_6->setWidget(areaContent3_2);
        pbInsert_3 = new QPushButton(gbSecundaryQuery);
        pbInsert_3->setObjectName(QStringLiteral("pbInsert_3"));
        pbInsert_3->setGeometry(QRect(70, 150, 300, 40));
        pbInsert_3->setMinimumSize(QSize(300, 40));
        pbInsert_3->setMaximumSize(QSize(150, 100));
        pbInsert_3->setFont(font);
        pbInsert_3->setStyleSheet(QLatin1String("QPushButton#pbInsert_3 {\n"
"background-color: rgb(123, 155, 166);\n"
"border-radius: 5px;\n"
" }\n"
"\n"
" QPushButton#pbInsert_3:hover {\n"
"background-color: rgb(65, 91, 118);\n"
"color:  rgb(255, 255, 255);\n"
" }"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/update_contact_info.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pbInsert_3->setIcon(icon3);
        pbInsert_3->setIconSize(QSize(50, 40));
        pbExit = new QPushButton(gbSecundaryQuery);
        pbExit->setObjectName(QStringLiteral("pbExit"));
        pbExit->setGeometry(QRect(470, 150, 300, 40));
        pbExit->setMinimumSize(QSize(300, 40));
        pbExit->setMaximumSize(QSize(150, 100));
        pbExit->setFont(font);
        pbExit->setStyleSheet(QLatin1String("QPushButton#pbExit {\n"
"background-color: rgb(123, 155, 166);\n"
"border-radius: 5px;\n"
" }\n"
"\n"
" QPushButton#pbExit:hover {\n"
"background-color: rgb(65, 91, 118);\n"
"color:  rgb(255, 255, 255);\n"
" }"));
        pbExit->setIcon(icon2);
        pbExit->setIconSize(QSize(50, 40));
        gbCodeQuery = new QGroupBox(tab);
        gbCodeQuery->setObjectName(QStringLiteral("gbCodeQuery"));
        gbCodeQuery->setGeometry(QRect(20, 10, 831, 46));
        gbCodeQuery->setStyleSheet(QStringLiteral("background-color: rgb(238, 244, 242);"));
        horizontalLayout_8 = new QHBoxLayout(gbCodeQuery);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        lbCode = new QLabel(gbCodeQuery);
        lbCode->setObjectName(QStringLiteral("lbCode"));
        lbCode->setFont(font);

        horizontalLayout_8->addWidget(lbCode);

        lneCode = new QLineEdit(gbCodeQuery);
        lneCode->setObjectName(QStringLiteral("lneCode"));
        lneCode->setFont(font1);
        lneCode->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout_8->addWidget(lneCode);

        pbQuery = new QPushButton(gbCodeQuery);
        pbQuery->setObjectName(QStringLiteral("pbQuery"));
        pbQuery->setMinimumSize(QSize(150, 23));
        pbQuery->setFont(font);
        pbQuery->setStyleSheet(QLatin1String("QPushButton#pbQuery {\n"
"background-color: rgb(123, 155, 166);\n"
"border-radius: 5px;\n"
" }\n"
"\n"
" QPushButton#pbQuery:hover {\n"
"background-color: rgb(65, 91, 118);\n"
"color:  rgb(255, 255, 255);\n"
" }"));

        horizontalLayout_8->addWidget(pbQuery);

        tabWidget->addTab(tab, QString());
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(-26, -15, 931, 391));
        label_2->setStyleSheet(QLatin1String("background-color: rgb(65, 91, 118);\n"
""));
        CrudStudent->setCentralWidget(centralwidget);
        label_2->raise();
        tabWidget->raise();
        QWidget::setTabOrder(lneFirsName, lneFatherLastName);
        QWidget::setTabOrder(lneFatherLastName, lneMotherLastName);
        QWidget::setTabOrder(lneMotherLastName, lneStreet);
        QWidget::setTabOrder(lneStreet, lneStreetNumber);
        QWidget::setTabOrder(lneStreetNumber, lneColony);
        QWidget::setTabOrder(lneColony, lneCity);
        QWidget::setTabOrder(lneCity, lnePostalCode);
        QWidget::setTabOrder(lnePostalCode, lneCellphone);
        QWidget::setTabOrder(lneCellphone, cboCareer);
        QWidget::setTabOrder(cboCareer, scrollArea_2);
        QWidget::setTabOrder(scrollArea_2, scrollArea);
        QWidget::setTabOrder(scrollArea, scrollArea_3);

        retranslateUi(CrudStudent);
        QObject::connect(pbExit, SIGNAL(clicked()), CrudStudent, SLOT(close()));
        QObject::connect(pbExit_2, SIGNAL(clicked()), CrudStudent, SLOT(close()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(CrudStudent);
    } // setupUi

    void retranslateUi(QMainWindow *CrudStudent)
    {
        CrudStudent->setWindowTitle(QApplication::translate("CrudStudent", "Administraci\303\263n de alumnos", nullptr));
        gbSecundary->setTitle(QString());
        lbName->setText(QApplication::translate("CrudStudent", "Nombre", nullptr));
        lbMotherLastName->setText(QApplication::translate("CrudStudent", "Apellido Paterno", nullptr));
        lbFatherLastName->setText(QApplication::translate("CrudStudent", "Apellido materno", nullptr));
        lbStreet->setText(QApplication::translate("CrudStudent", "Calle", nullptr));
        lbStreetNumber->setText(QApplication::translate("CrudStudent", "N\303\272mero de calle", nullptr));
        lbColony->setText(QApplication::translate("CrudStudent", "Colonia", nullptr));
        lbCity->setText(QApplication::translate("CrudStudent", "Ciudad", nullptr));
        lbPostalCode->setText(QApplication::translate("CrudStudent", "C\303\263digo postal", nullptr));
        lbCellphone->setText(QApplication::translate("CrudStudent", "Celular", nullptr));
        lbCareer->setText(QApplication::translate("CrudStudent", "Carrera", nullptr));
        label->setText(QApplication::translate("CrudStudent", "Administraci\303\263n de alumnos", nullptr));
        pbInsert->setText(QApplication::translate("CrudStudent", "   Agregar", nullptr));
        pbExit_2->setText(QApplication::translate("CrudStudent", "   Agregar", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tbAltas), QApplication::translate("CrudStudent", "Altas", nullptr));
        gbSearch->setTitle(QString());
        gbThings->setTitle(QString());
        lbSearch->setText(QApplication::translate("CrudStudent", "Buscar", nullptr));
        lbCriteries->setText(QApplication::translate("CrudStudent", "Criterio", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tbConsultas), QApplication::translate("CrudStudent", "Consultas", nullptr));
        gbSecundaryQuery->setTitle(QString());
        lbName_2->setText(QApplication::translate("CrudStudent", "Nombre", nullptr));
        lbMotherLastName_2->setText(QApplication::translate("CrudStudent", "Apellido Paterno", nullptr));
        lbFatherLastName_2->setText(QApplication::translate("CrudStudent", "Apellido materno", nullptr));
        lbStreetQuery->setText(QApplication::translate("CrudStudent", "Calle", nullptr));
        lbStreetNumberQuery->setText(QApplication::translate("CrudStudent", "N\303\272mero de calle", nullptr));
        lbColonyQuery->setText(QApplication::translate("CrudStudent", "Colonia", nullptr));
        lbCityQuery->setText(QApplication::translate("CrudStudent", "Ciudad", nullptr));
        lbPostalCodeQuery->setText(QApplication::translate("CrudStudent", "C\303\263digo postal", nullptr));
        lbCellphoneQuery->setText(QApplication::translate("CrudStudent", "Celular", nullptr));
        pbInsert_3->setText(QApplication::translate("CrudStudent", "Modificar", nullptr));
        pbExit->setText(QApplication::translate("CrudStudent", "Salir sin guardar", nullptr));
        gbCodeQuery->setTitle(QString());
        lbCode->setText(QApplication::translate("CrudStudent", "C\303\263digo", nullptr));
        pbQuery->setText(QApplication::translate("CrudStudent", "Consultar", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("CrudStudent", "Modificar", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CrudStudent: public Ui_CrudStudent {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CRUDSTUDENT_H
