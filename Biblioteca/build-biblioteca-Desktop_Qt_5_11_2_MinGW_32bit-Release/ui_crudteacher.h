/********************************************************************************
** Form generated from reading UI file 'crudteacher.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CRUDTEACHER_H
#define UI_CRUDTEACHER_H

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

class Ui_CrudTeacher
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tbInsert;
    QGroupBox *gbSecundary;
    QLabel *label;
    QLineEdit *lnePostalCode;
    QLineEdit *lneCellphone;
    QLabel *lbPostalCode;
    QLabel *lbCellphone;
    QLabel *lbFatherLastName;
    QLabel *lbName;
    QLineEdit *lneMotherLastName;
    QLineEdit *lneFirsName;
    QLineEdit *lneFatherLastName;
    QLabel *lbMotherLastName;
    QLineEdit *lneCity;
    QLabel *lbStreet;
    QLineEdit *lneColony;
    QLineEdit *lneStreet;
    QLabel *lbCity;
    QLabel *lbColony;
    QLabel *lbStreetNumber;
    QLineEdit *lneStreetNumber;
    QPushButton *pbInsert;
    QLineEdit *lneConfirmPassword;
    QLabel *lbPassword;
    QLabel *lbConfirmPassword;
    QLineEdit *lnePassword;
    QPushButton *pbExitThis;
    QWidget *tbQuery;
    QGroupBox *gbSearch;
    QTableView *tvQuery;
    QComboBox *cboCriteries;
    QLabel *lbCriteries;
    QLineEdit *lneSearch;
    QLabel *lbSearch;
    QWidget *tbUpdate;
    QGroupBox *gbSecundaryUdpate;
    QLabel *label_2;
    QGroupBox *gbUpdate;
    QLineEdit *lneMotherLastNameUdpate;
    QLabel *lbPostalCodeUdpate;
    QLineEdit *lneStreetUdpate;
    QLineEdit *lneFirsNameUdpate;
    QLabel *lbFatherLastNameUdpate;
    QLineEdit *lneColonyUdpate;
    QLineEdit *lneCityUdpate;
    QLabel *lbStreetNumberUdpate;
    QLabel *lbCellphoneUdpate;
    QLineEdit *lneStreetNumberUdpate;
    QLabel *lbMotherLastNameUdpate;
    QLabel *lbStreetUdpate;
    QPushButton *pbInsertUdpate;
    QLineEdit *lnePostalCodeUdpate;
    QLabel *lbCityUdpate;
    QLabel *lbColonyUdpate;
    QLabel *lbNameUdpate;
    QLineEdit *lneCellphoneUdpate;
    QLineEdit *lneFatherLastNameUdpate;
    QGroupBox *gbId;
    QLineEdit *lneIdUdpate;
    QLabel *lbIdUdpate;
    QPushButton *pbUpdate;

    void setupUi(QMainWindow *CrudTeacher)
    {
        if (CrudTeacher->objectName().isEmpty())
            CrudTeacher->setObjectName(QStringLiteral("CrudTeacher"));
        CrudTeacher->setWindowModality(Qt::WindowModal);
        CrudTeacher->resize(910, 369);
        QIcon icon;
        icon.addFile(QStringLiteral(":/book-flat.ico"), QSize(), QIcon::Normal, QIcon::Off);
        CrudTeacher->setWindowIcon(icon);
        CrudTeacher->setStyleSheet(QLatin1String("background-color: rgb(65, 91, 118);\n"
""));
        centralwidget = new QWidget(CrudTeacher);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 20, 891, 331));
        QFont font;
        font.setFamily(QStringLiteral("Raleway"));
        font.setPointSize(9);
        tabWidget->setFont(font);
        tabWidget->setStyleSheet(QStringLiteral("background-color: rgb(238, 244, 242);"));
        tbInsert = new QWidget();
        tbInsert->setObjectName(QStringLiteral("tbInsert"));
        gbSecundary = new QGroupBox(tbInsert);
        gbSecundary->setObjectName(QStringLiteral("gbSecundary"));
        gbSecundary->setGeometry(QRect(30, 20, 831, 241));
        gbSecundary->setStyleSheet(QStringLiteral("background-color: rgb(238, 244, 242);"));
        label = new QLabel(gbSecundary);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(220, 20, 431, 20));
        label->setMaximumSize(QSize(16777215, 20));
        QFont font1;
        font1.setFamily(QStringLiteral("Raleway"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setStyleSheet(QStringLiteral("color: rgb(35, 54, 86);"));
        lnePostalCode = new QLineEdit(gbSecundary);
        lnePostalCode->setObjectName(QStringLiteral("lnePostalCode"));
        lnePostalCode->setGeometry(QRect(107, 120, 121, 17));
        QFont font2;
        font2.setFamily(QStringLiteral("Raleway"));
        lnePostalCode->setFont(font2);
        lnePostalCode->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lnePostalCode->setMaxLength(6);
        lneCellphone = new QLineEdit(gbSecundary);
        lneCellphone->setObjectName(QStringLiteral("lneCellphone"));
        lneCellphone->setGeometry(QRect(290, 120, 111, 17));
        lneCellphone->setFont(font2);
        lneCellphone->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lneCellphone->setMaxLength(10);
        lbPostalCode = new QLabel(gbSecundary);
        lbPostalCode->setObjectName(QStringLiteral("lbPostalCode"));
        lbPostalCode->setGeometry(QRect(13, 120, 85, 18));
        QFont font3;
        font3.setFamily(QStringLiteral("Raleway"));
        font3.setBold(true);
        font3.setWeight(75);
        lbPostalCode->setFont(font3);
        lbPostalCode->setStyleSheet(QStringLiteral("color: rgb(35, 54, 86);"));
        lbCellphone = new QLabel(gbSecundary);
        lbCellphone->setObjectName(QStringLiteral("lbCellphone"));
        lbCellphone->setGeometry(QRect(238, 120, 45, 18));
        lbCellphone->setFont(font3);
        lbCellphone->setStyleSheet(QStringLiteral("color: rgb(35, 54, 86);"));
        lbFatherLastName = new QLabel(gbSecundary);
        lbFatherLastName->setObjectName(QStringLiteral("lbFatherLastName"));
        lbFatherLastName->setGeometry(QRect(519, 60, 108, 18));
        lbFatherLastName->setFont(font3);
        lbFatherLastName->setStyleSheet(QStringLiteral("color: rgb(35, 54, 86);"));
        lbName = new QLabel(gbSecundary);
        lbName->setObjectName(QStringLiteral("lbName"));
        lbName->setGeometry(QRect(13, 60, 51, 18));
        lbName->setFont(font3);
        lbName->setStyleSheet(QStringLiteral("color: rgb(35, 54, 86);"));
        lneMotherLastName = new QLineEdit(gbSecundary);
        lneMotherLastName->setObjectName(QStringLiteral("lneMotherLastName"));
        lneMotherLastName->setGeometry(QRect(634, 60, 171, 17));
        lneMotherLastName->setFont(font2);
        lneMotherLastName->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lneMotherLastName->setMaxLength(55);
        lneFirsName = new QLineEdit(gbSecundary);
        lneFirsName->setObjectName(QStringLiteral("lneFirsName"));
        lneFirsName->setGeometry(QRect(71, 60, 162, 17));
        lneFirsName->setFont(font2);
        lneFirsName->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lneFirsName->setMaxLength(55);
        lneFatherLastName = new QLineEdit(gbSecundary);
        lneFatherLastName->setObjectName(QStringLiteral("lneFatherLastName"));
        lneFatherLastName->setGeometry(QRect(351, 60, 161, 17));
        lneFatherLastName->setFont(font2);
        lneFatherLastName->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lneFatherLastName->setMaxLength(55);
        lbMotherLastName = new QLabel(gbSecundary);
        lbMotherLastName->setObjectName(QStringLiteral("lbMotherLastName"));
        lbMotherLastName->setGeometry(QRect(240, 60, 104, 18));
        lbMotherLastName->setFont(font3);
        lbMotherLastName->setStyleSheet(QStringLiteral("color: rgb(35, 54, 86);"));
        lneCity = new QLineEdit(gbSecundary);
        lneCity->setObjectName(QStringLiteral("lneCity"));
        lneCity->setGeometry(QRect(655, 90, 151, 17));
        lneCity->setFont(font2);
        lneCity->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lbStreet = new QLabel(gbSecundary);
        lbStreet->setObjectName(QStringLiteral("lbStreet"));
        lbStreet->setGeometry(QRect(13, 90, 32, 18));
        lbStreet->setFont(font3);
        lbStreet->setStyleSheet(QStringLiteral("color: rgb(35, 54, 86);"));
        lneColony = new QLineEdit(gbSecundary);
        lneColony->setObjectName(QStringLiteral("lneColony"));
        lneColony->setGeometry(QRect(451, 90, 147, 17));
        lneColony->setFont(font2);
        lneColony->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lneColony->setMaxLength(55);
        lneStreet = new QLineEdit(gbSecundary);
        lneStreet->setObjectName(QStringLiteral("lneStreet"));
        lneStreet->setGeometry(QRect(57, 90, 146, 17));
        lneStreet->setFont(font2);
        lneStreet->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lneStreet->setMaxLength(110);
        lbCity = new QLabel(gbSecundary);
        lbCity->setObjectName(QStringLiteral("lbCity"));
        lbCity->setGeometry(QRect(605, 90, 43, 18));
        lbCity->setFont(font3);
        lbCity->setStyleSheet(QStringLiteral("color: rgb(35, 54, 86);"));
        lbColony = new QLabel(gbSecundary);
        lbColony->setObjectName(QStringLiteral("lbColony"));
        lbColony->setGeometry(QRect(397, 90, 47, 18));
        lbColony->setFont(font3);
        lbColony->setStyleSheet(QStringLiteral("color: rgb(35, 54, 86);"));
        lbStreetNumber = new QLabel(gbSecundary);
        lbStreetNumber->setObjectName(QStringLiteral("lbStreetNumber"));
        lbStreetNumber->setGeometry(QRect(210, 90, 103, 18));
        lbStreetNumber->setFont(font3);
        lbStreetNumber->setStyleSheet(QStringLiteral("color: rgb(35, 54, 86);"));
        lneStreetNumber = new QLineEdit(gbSecundary);
        lneStreetNumber->setObjectName(QStringLiteral("lneStreetNumber"));
        lneStreetNumber->setGeometry(QRect(320, 90, 70, 17));
        lneStreetNumber->setMaximumSize(QSize(70, 16777215));
        lneStreetNumber->setFont(font2);
        lneStreetNumber->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lneStreetNumber->setMaxLength(6);
        pbInsert = new QPushButton(gbSecundary);
        pbInsert->setObjectName(QStringLiteral("pbInsert"));
        pbInsert->setGeometry(QRect(10, 170, 300, 40));
        pbInsert->setMinimumSize(QSize(300, 40));
        pbInsert->setMaximumSize(QSize(150, 100));
        pbInsert->setFont(font3);
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
        lneConfirmPassword = new QLineEdit(gbSecundary);
        lneConfirmPassword->setObjectName(QStringLiteral("lneConfirmPassword"));
        lneConfirmPassword->setGeometry(QRect(670, 120, 136, 17));
        lneConfirmPassword->setFont(font2);
        lneConfirmPassword->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lneConfirmPassword->setMaxLength(16);
        lneConfirmPassword->setEchoMode(QLineEdit::Password);
        lbPassword = new QLabel(gbSecundary);
        lbPassword->setObjectName(QStringLiteral("lbPassword"));
        lbPassword->setGeometry(QRect(405, 120, 85, 18));
        lbPassword->setFont(font3);
        lbPassword->setStyleSheet(QStringLiteral("color: rgb(35, 54, 86);"));
        lbConfirmPassword = new QLabel(gbSecundary);
        lbConfirmPassword->setObjectName(QStringLiteral("lbConfirmPassword"));
        lbConfirmPassword->setGeometry(QRect(604, 120, 61, 20));
        lbConfirmPassword->setFont(font3);
        lbConfirmPassword->setStyleSheet(QStringLiteral("color: rgb(35, 54, 86);"));
        lnePassword = new QLineEdit(gbSecundary);
        lnePassword->setObjectName(QStringLiteral("lnePassword"));
        lnePassword->setGeometry(QRect(480, 120, 121, 17));
        lnePassword->setFont(font2);
        lnePassword->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lnePassword->setMaxLength(16);
        lnePassword->setEchoMode(QLineEdit::Password);
        pbExitThis = new QPushButton(gbSecundary);
        pbExitThis->setObjectName(QStringLiteral("pbExitThis"));
        pbExitThis->setGeometry(QRect(510, 170, 300, 40));
        pbExitThis->setMinimumSize(QSize(300, 40));
        pbExitThis->setMaximumSize(QSize(150, 100));
        pbExitThis->setFont(font3);
        pbExitThis->setStyleSheet(QLatin1String("QPushButton#pbExitThis {\n"
"background-color: rgb(123, 155, 166);\n"
"border-radius: 5px;\n"
" }\n"
"\n"
" QPushButton#pbExitThis:hover {\n"
"background-color: rgb(65, 91, 118);\n"
"color:  rgb(255, 255, 255);\n"
" }"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/door_out.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pbExitThis->setIcon(icon2);
        pbExitThis->setIconSize(QSize(50, 40));
        tabWidget->addTab(tbInsert, QString());
        tbQuery = new QWidget();
        tbQuery->setObjectName(QStringLiteral("tbQuery"));
        gbSearch = new QGroupBox(tbQuery);
        gbSearch->setObjectName(QStringLiteral("gbSearch"));
        gbSearch->setGeometry(QRect(20, 20, 843, 267));
        gbSearch->setStyleSheet(QStringLiteral("background-color: rgb(238, 244, 242);"));
        tvQuery = new QTableView(gbSearch);
        tvQuery->setObjectName(QStringLiteral("tvQuery"));
        tvQuery->setGeometry(QRect(10, 60, 821, 192));
        tvQuery->setFont(font2);
        tvQuery->setStyleSheet(QLatin1String("TableView#tvQuery {\n"
"	background-color: rgb(255, 255, 255);\n"
"	}"));
        cboCriteries = new QComboBox(gbSearch);
        cboCriteries->setObjectName(QStringLiteral("cboCriteries"));
        cboCriteries->setGeometry(QRect(560, 20, 271, 21));
        cboCriteries->setMinimumSize(QSize(250, 0));
        cboCriteries->setFont(font2);
        cboCriteries->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lbCriteries = new QLabel(gbSearch);
        lbCriteries->setObjectName(QStringLiteral("lbCriteries"));
        lbCriteries->setGeometry(QRect(507, 20, 46, 21));
        lbCriteries->setFont(font3);
        lbCriteries->setStyleSheet(QStringLiteral(""));
        lneSearch = new QLineEdit(gbSearch);
        lneSearch->setObjectName(QStringLiteral("lneSearch"));
        lneSearch->setGeometry(QRect(64, 20, 436, 21));
        lneSearch->setMinimumSize(QSize(0, 0));
        lneSearch->setFont(font2);
        lneSearch->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255)"));
        lbSearch = new QLabel(gbSearch);
        lbSearch->setObjectName(QStringLiteral("lbSearch"));
        lbSearch->setGeometry(QRect(15, 20, 42, 21));
        lbSearch->setFont(font3);
        lbSearch->setStyleSheet(QStringLiteral(""));
        tabWidget->addTab(tbQuery, QString());
        tbUpdate = new QWidget();
        tbUpdate->setObjectName(QStringLiteral("tbUpdate"));
        gbSecundaryUdpate = new QGroupBox(tbUpdate);
        gbSecundaryUdpate->setObjectName(QStringLiteral("gbSecundaryUdpate"));
        gbSecundaryUdpate->setGeometry(QRect(10, 10, 861, 281));
        QFont font4;
        font4.setFamily(QStringLiteral("Raleway"));
        font4.setPointSize(10);
        gbSecundaryUdpate->setFont(font4);
        gbSecundaryUdpate->setStyleSheet(QStringLiteral("background-color: rgb(238, 244, 242);"));
        label_2 = new QLabel(gbSecundaryUdpate);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(220, 10, 431, 20));
        label_2->setMaximumSize(QSize(16777215, 20));
        label_2->setFont(font1);
        label_2->setStyleSheet(QStringLiteral("color: rgb(35, 54, 86);"));
        gbUpdate = new QGroupBox(gbSecundaryUdpate);
        gbUpdate->setObjectName(QStringLiteral("gbUpdate"));
        gbUpdate->setEnabled(false);
        gbUpdate->setGeometry(QRect(20, 90, 821, 181));
        lneMotherLastNameUdpate = new QLineEdit(gbUpdate);
        lneMotherLastNameUdpate->setObjectName(QStringLiteral("lneMotherLastNameUdpate"));
        lneMotherLastNameUdpate->setGeometry(QRect(630, 40, 171, 17));
        lneMotherLastNameUdpate->setFont(font2);
        lneMotherLastNameUdpate->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lneMotherLastNameUdpate->setMaxLength(55);
        lbPostalCodeUdpate = new QLabel(gbUpdate);
        lbPostalCodeUdpate->setObjectName(QStringLiteral("lbPostalCodeUdpate"));
        lbPostalCodeUdpate->setGeometry(QRect(9, 100, 85, 18));
        lbPostalCodeUdpate->setFont(font3);
        lbPostalCodeUdpate->setStyleSheet(QStringLiteral("color: rgb(35, 54, 86);"));
        lneStreetUdpate = new QLineEdit(gbUpdate);
        lneStreetUdpate->setObjectName(QStringLiteral("lneStreetUdpate"));
        lneStreetUdpate->setGeometry(QRect(53, 70, 146, 17));
        lneStreetUdpate->setFont(font2);
        lneStreetUdpate->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lneStreetUdpate->setMaxLength(110);
        lneFirsNameUdpate = new QLineEdit(gbUpdate);
        lneFirsNameUdpate->setObjectName(QStringLiteral("lneFirsNameUdpate"));
        lneFirsNameUdpate->setGeometry(QRect(67, 40, 162, 17));
        lneFirsNameUdpate->setFont(font2);
        lneFirsNameUdpate->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lneFirsNameUdpate->setMaxLength(55);
        lbFatherLastNameUdpate = new QLabel(gbUpdate);
        lbFatherLastNameUdpate->setObjectName(QStringLiteral("lbFatherLastNameUdpate"));
        lbFatherLastNameUdpate->setGeometry(QRect(515, 40, 108, 18));
        lbFatherLastNameUdpate->setFont(font3);
        lbFatherLastNameUdpate->setStyleSheet(QStringLiteral("color: rgb(35, 54, 86);"));
        lneColonyUdpate = new QLineEdit(gbUpdate);
        lneColonyUdpate->setObjectName(QStringLiteral("lneColonyUdpate"));
        lneColonyUdpate->setGeometry(QRect(447, 70, 147, 17));
        lneColonyUdpate->setFont(font2);
        lneColonyUdpate->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lneColonyUdpate->setMaxLength(55);
        lneCityUdpate = new QLineEdit(gbUpdate);
        lneCityUdpate->setObjectName(QStringLiteral("lneCityUdpate"));
        lneCityUdpate->setGeometry(QRect(651, 70, 151, 17));
        lneCityUdpate->setFont(font2);
        lneCityUdpate->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lbStreetNumberUdpate = new QLabel(gbUpdate);
        lbStreetNumberUdpate->setObjectName(QStringLiteral("lbStreetNumberUdpate"));
        lbStreetNumberUdpate->setGeometry(QRect(206, 70, 103, 18));
        lbStreetNumberUdpate->setFont(font3);
        lbStreetNumberUdpate->setStyleSheet(QStringLiteral("color: rgb(35, 54, 86);"));
        lbCellphoneUdpate = new QLabel(gbUpdate);
        lbCellphoneUdpate->setObjectName(QStringLiteral("lbCellphoneUdpate"));
        lbCellphoneUdpate->setGeometry(QRect(234, 100, 45, 18));
        lbCellphoneUdpate->setFont(font3);
        lbCellphoneUdpate->setStyleSheet(QStringLiteral("color: rgb(35, 54, 86);"));
        lneStreetNumberUdpate = new QLineEdit(gbUpdate);
        lneStreetNumberUdpate->setObjectName(QStringLiteral("lneStreetNumberUdpate"));
        lneStreetNumberUdpate->setGeometry(QRect(316, 70, 70, 17));
        lneStreetNumberUdpate->setMaximumSize(QSize(70, 16777215));
        lneStreetNumberUdpate->setFont(font2);
        lneStreetNumberUdpate->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lneStreetNumberUdpate->setMaxLength(6);
        lbMotherLastNameUdpate = new QLabel(gbUpdate);
        lbMotherLastNameUdpate->setObjectName(QStringLiteral("lbMotherLastNameUdpate"));
        lbMotherLastNameUdpate->setGeometry(QRect(236, 40, 104, 18));
        lbMotherLastNameUdpate->setFont(font3);
        lbMotherLastNameUdpate->setStyleSheet(QStringLiteral("color: rgb(35, 54, 86);"));
        lbStreetUdpate = new QLabel(gbUpdate);
        lbStreetUdpate->setObjectName(QStringLiteral("lbStreetUdpate"));
        lbStreetUdpate->setGeometry(QRect(9, 70, 32, 18));
        lbStreetUdpate->setFont(font3);
        lbStreetUdpate->setStyleSheet(QStringLiteral("color: rgb(35, 54, 86);"));
        pbInsertUdpate = new QPushButton(gbUpdate);
        pbInsertUdpate->setObjectName(QStringLiteral("pbInsertUdpate"));
        pbInsertUdpate->setGeometry(QRect(510, 120, 300, 40));
        pbInsertUdpate->setMinimumSize(QSize(300, 40));
        pbInsertUdpate->setMaximumSize(QSize(150, 100));
        pbInsertUdpate->setFont(font3);
        pbInsertUdpate->setStyleSheet(QLatin1String("QPushButton#pbInsertUdpate {\n"
"background-color: rgb(123, 155, 166);\n"
"border-radius: 5px;\n"
" }\n"
"\n"
" QPushButton#pbInsertUdpate:hover {\n"
"background-color: rgb(65, 91, 118);\n"
"color:  rgb(255, 255, 255);\n"
" }"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/update_contact_info.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pbInsertUdpate->setIcon(icon3);
        pbInsertUdpate->setIconSize(QSize(50, 40));
        lnePostalCodeUdpate = new QLineEdit(gbUpdate);
        lnePostalCodeUdpate->setObjectName(QStringLiteral("lnePostalCodeUdpate"));
        lnePostalCodeUdpate->setGeometry(QRect(103, 100, 121, 17));
        lnePostalCodeUdpate->setFont(font2);
        lnePostalCodeUdpate->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lnePostalCodeUdpate->setMaxLength(6);
        lbCityUdpate = new QLabel(gbUpdate);
        lbCityUdpate->setObjectName(QStringLiteral("lbCityUdpate"));
        lbCityUdpate->setGeometry(QRect(601, 70, 43, 18));
        lbCityUdpate->setFont(font3);
        lbCityUdpate->setStyleSheet(QStringLiteral("color: rgb(35, 54, 86);"));
        lbColonyUdpate = new QLabel(gbUpdate);
        lbColonyUdpate->setObjectName(QStringLiteral("lbColonyUdpate"));
        lbColonyUdpate->setGeometry(QRect(393, 70, 47, 18));
        lbColonyUdpate->setFont(font3);
        lbColonyUdpate->setStyleSheet(QStringLiteral("color: rgb(35, 54, 86);"));
        lbNameUdpate = new QLabel(gbUpdate);
        lbNameUdpate->setObjectName(QStringLiteral("lbNameUdpate"));
        lbNameUdpate->setGeometry(QRect(9, 40, 51, 18));
        lbNameUdpate->setFont(font3);
        lbNameUdpate->setStyleSheet(QStringLiteral("color: rgb(35, 54, 86);"));
        lneCellphoneUdpate = new QLineEdit(gbUpdate);
        lneCellphoneUdpate->setObjectName(QStringLiteral("lneCellphoneUdpate"));
        lneCellphoneUdpate->setGeometry(QRect(286, 100, 111, 17));
        lneCellphoneUdpate->setFont(font2);
        lneCellphoneUdpate->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lneCellphoneUdpate->setMaxLength(10);
        lneFatherLastNameUdpate = new QLineEdit(gbUpdate);
        lneFatherLastNameUdpate->setObjectName(QStringLiteral("lneFatherLastNameUdpate"));
        lneFatherLastNameUdpate->setGeometry(QRect(347, 40, 161, 17));
        lneFatherLastNameUdpate->setFont(font2);
        lneFatherLastNameUdpate->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lneFatherLastNameUdpate->setMaxLength(55);
        gbId = new QGroupBox(gbSecundaryUdpate);
        gbId->setObjectName(QStringLiteral("gbId"));
        gbId->setGeometry(QRect(20, 40, 311, 41));
        lneIdUdpate = new QLineEdit(gbId);
        lneIdUdpate->setObjectName(QStringLiteral("lneIdUdpate"));
        lneIdUdpate->setGeometry(QRect(41, 10, 151, 20));
        lneIdUdpate->setFont(font2);
        lneIdUdpate->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lneIdUdpate->setMaxLength(55);
        lbIdUdpate = new QLabel(gbId);
        lbIdUdpate->setObjectName(QStringLiteral("lbIdUdpate"));
        lbIdUdpate->setGeometry(QRect(12, 10, 21, 18));
        lbIdUdpate->setFont(font3);
        lbIdUdpate->setStyleSheet(QStringLiteral("color: rgb(35, 54, 86);"));
        pbUpdate = new QPushButton(gbId);
        pbUpdate->setObjectName(QStringLiteral("pbUpdate"));
        pbUpdate->setGeometry(QRect(200, 5, 93, 28));
        tabWidget->addTab(tbUpdate, QString());
        CrudTeacher->setCentralWidget(centralwidget);
        QWidget::setTabOrder(lneFirsName, lneFatherLastName);
        QWidget::setTabOrder(lneFatherLastName, lneMotherLastName);
        QWidget::setTabOrder(lneMotherLastName, lneStreet);
        QWidget::setTabOrder(lneStreet, lneStreetNumber);
        QWidget::setTabOrder(lneStreetNumber, lneColony);
        QWidget::setTabOrder(lneColony, lneCity);
        QWidget::setTabOrder(lneCity, lnePostalCode);
        QWidget::setTabOrder(lnePostalCode, lneCellphone);
        QWidget::setTabOrder(lneCellphone, lnePassword);
        QWidget::setTabOrder(lnePassword, lneConfirmPassword);
        QWidget::setTabOrder(lneConfirmPassword, lneIdUdpate);
        QWidget::setTabOrder(lneIdUdpate, lneFirsNameUdpate);
        QWidget::setTabOrder(lneFirsNameUdpate, lneFatherLastNameUdpate);
        QWidget::setTabOrder(lneFatherLastNameUdpate, lneMotherLastNameUdpate);
        QWidget::setTabOrder(lneMotherLastNameUdpate, lneStreetUdpate);
        QWidget::setTabOrder(lneStreetUdpate, lneStreetNumberUdpate);
        QWidget::setTabOrder(lneStreetNumberUdpate, lneColonyUdpate);
        QWidget::setTabOrder(lneColonyUdpate, lneCityUdpate);
        QWidget::setTabOrder(lneCityUdpate, lnePostalCodeUdpate);
        QWidget::setTabOrder(lnePostalCodeUdpate, lneCellphoneUdpate);
        QWidget::setTabOrder(lneCellphoneUdpate, lneSearch);
        QWidget::setTabOrder(lneSearch, tvQuery);
        QWidget::setTabOrder(tvQuery, cboCriteries);
        QWidget::setTabOrder(cboCriteries, pbInsert);
        QWidget::setTabOrder(pbInsert, pbInsertUdpate);
        QWidget::setTabOrder(pbInsertUdpate, tabWidget);
        QWidget::setTabOrder(tabWidget, pbUpdate);

        retranslateUi(CrudTeacher);
        QObject::connect(pbExitThis, SIGNAL(clicked()), CrudTeacher, SLOT(close()));
        QObject::connect(lneFirsNameUdpate, SIGNAL(returnPressed()), lneFatherLastNameUdpate, SLOT(setFocus()));
        QObject::connect(lneFatherLastNameUdpate, SIGNAL(returnPressed()), lneMotherLastNameUdpate, SLOT(setFocus()));
        QObject::connect(lneMotherLastNameUdpate, SIGNAL(returnPressed()), lneStreetUdpate, SLOT(setFocus()));
        QObject::connect(lneStreetUdpate, SIGNAL(returnPressed()), lneStreetNumberUdpate, SLOT(setFocus()));
        QObject::connect(lneStreetNumberUdpate, SIGNAL(returnPressed()), lneColonyUdpate, SLOT(setFocus()));
        QObject::connect(lneColonyUdpate, SIGNAL(returnPressed()), lneCityUdpate, SLOT(setFocus()));
        QObject::connect(lnePostalCodeUdpate, SIGNAL(returnPressed()), lneCellphoneUdpate, SLOT(setFocus()));
        QObject::connect(lneCityUdpate, SIGNAL(returnPressed()), lnePostalCodeUdpate, SLOT(setFocus()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(CrudTeacher);
    } // setupUi

    void retranslateUi(QMainWindow *CrudTeacher)
    {
        CrudTeacher->setWindowTitle(QApplication::translate("CrudTeacher", "Administraci\303\263n de profesores y administradores", nullptr));
        gbSecundary->setTitle(QString());
        label->setText(QApplication::translate("CrudTeacher", "Administraci\303\263n de maestros o bibliotecarios", nullptr));
        lbPostalCode->setText(QApplication::translate("CrudTeacher", "C\303\263digo postal", nullptr));
        lbCellphone->setText(QApplication::translate("CrudTeacher", "Celular", nullptr));
        lbFatherLastName->setText(QApplication::translate("CrudTeacher", "Apellido materno", nullptr));
        lbName->setText(QApplication::translate("CrudTeacher", "Nombre", nullptr));
        lbMotherLastName->setText(QApplication::translate("CrudTeacher", "Apellido Paterno", nullptr));
        lbStreet->setText(QApplication::translate("CrudTeacher", "Calle", nullptr));
        lbCity->setText(QApplication::translate("CrudTeacher", "Ciudad", nullptr));
        lbColony->setText(QApplication::translate("CrudTeacher", "Colonia", nullptr));
        lbStreetNumber->setText(QApplication::translate("CrudTeacher", "N\303\272mero de calle", nullptr));
        pbInsert->setText(QApplication::translate("CrudTeacher", "   Agregar", nullptr));
        lbPassword->setText(QApplication::translate("CrudTeacher", "Contrase\303\261a", nullptr));
        lbConfirmPassword->setText(QApplication::translate("CrudTeacher", "Confirmar", nullptr));
        pbExitThis->setText(QApplication::translate("CrudTeacher", "  Salir", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tbInsert), QApplication::translate("CrudTeacher", "Insertar", nullptr));
        gbSearch->setTitle(QString());
        lbCriteries->setText(QApplication::translate("CrudTeacher", "Criterio", nullptr));
        lbSearch->setText(QApplication::translate("CrudTeacher", "Buscar", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tbQuery), QApplication::translate("CrudTeacher", "Buscar", nullptr));
        gbSecundaryUdpate->setTitle(QString());
        label_2->setText(QApplication::translate("CrudTeacher", "Administraci\303\263n de maestros o bibliotecarios", nullptr));
        gbUpdate->setTitle(QString());
        lbPostalCodeUdpate->setText(QApplication::translate("CrudTeacher", "C\303\263digo postal", nullptr));
        lbFatherLastNameUdpate->setText(QApplication::translate("CrudTeacher", "Apellido materno", nullptr));
        lbStreetNumberUdpate->setText(QApplication::translate("CrudTeacher", "N\303\272mero de calle", nullptr));
        lbCellphoneUdpate->setText(QApplication::translate("CrudTeacher", "Celular", nullptr));
        lbMotherLastNameUdpate->setText(QApplication::translate("CrudTeacher", "Apellido Paterno", nullptr));
        lbStreetUdpate->setText(QApplication::translate("CrudTeacher", "Calle", nullptr));
        pbInsertUdpate->setText(QApplication::translate("CrudTeacher", "Modificar datos", nullptr));
        lbCityUdpate->setText(QApplication::translate("CrudTeacher", "Ciudad", nullptr));
        lbColonyUdpate->setText(QApplication::translate("CrudTeacher", "Colonia", nullptr));
        lbNameUdpate->setText(QApplication::translate("CrudTeacher", "Nombre", nullptr));
        gbId->setTitle(QString());
        lbIdUdpate->setText(QApplication::translate("CrudTeacher", "Id", nullptr));
        pbUpdate->setText(QApplication::translate("CrudTeacher", "Buscar", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tbUpdate), QApplication::translate("CrudTeacher", "Actualizar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CrudTeacher: public Ui_CrudTeacher {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CRUDTEACHER_H
