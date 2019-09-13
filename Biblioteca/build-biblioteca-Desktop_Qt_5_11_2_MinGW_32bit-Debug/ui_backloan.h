/********************************************************************************
** Form generated from reading UI file 'backloan.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BACKLOAN_H
#define UI_BACKLOAN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BackLoan
{
public:
    QWidget *centralwidget;
    QGroupBox *gbMain;
    QGroupBox *gbInformation;
    QLabel *lbStudentCode;
    QLineEdit *lneStudentCode;
    QLabel *lbName;
    QLineEdit *lneName;
    QLabel *lbCellphone;
    QLineEdit *lneCellphone;
    QLabel *lbExistence;
    QLabel *lbTitle;
    QLabel *lbISBN;
    QLabel *lbSecondDate;
    QLabel *lbGenero;
    QLabel *lbFirstDate;
    QLabel *lbFormate;
    QLabel *lbPublisher;
    QLineEdit *lneExistence;
    QLineEdit *lneISBN;
    QLineEdit *lneTitle;
    QLineEdit *lnePublisher;
    QLineEdit *lneGenero;
    QLineEdit *lneFormate;
    QLineEdit *lneFirstDate;
    QLineEdit *lneSecondDate;
    QPushButton *pbAcept;
    QPushButton *pbExit;
    QGroupBox *gbId;
    QHBoxLayout *horizontalLayout;
    QLabel *lbId;
    QLineEdit *lneIdLoan;
    QPushButton *pbSearch;
    QLabel *label;

    void setupUi(QMainWindow *BackLoan)
    {
        if (BackLoan->objectName().isEmpty())
            BackLoan->setObjectName(QStringLiteral("BackLoan"));
        BackLoan->resize(960, 336);
        BackLoan->setMinimumSize(QSize(960, 336));
        BackLoan->setMaximumSize(QSize(960, 336));
        QFont font;
        font.setFamily(QStringLiteral("Raleway"));
        BackLoan->setFont(font);
        QIcon icon;
        icon.addFile(QStringLiteral(":/book-flat.ico"), QSize(), QIcon::Normal, QIcon::Off);
        BackLoan->setWindowIcon(icon);
        BackLoan->setStyleSheet(QStringLiteral(""));
        centralwidget = new QWidget(BackLoan);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gbMain = new QGroupBox(centralwidget);
        gbMain->setObjectName(QStringLiteral("gbMain"));
        gbMain->setGeometry(QRect(10, 80, 941, 241));
        gbMain->setStyleSheet(QStringLiteral("background-color: rgb(238, 244, 242); color: rgb(35, 54, 86);"));
        gbInformation = new QGroupBox(gbMain);
        gbInformation->setObjectName(QStringLiteral("gbInformation"));
        gbInformation->setEnabled(false);
        gbInformation->setGeometry(QRect(10, 10, 921, 151));
        QFont font1;
        font1.setFamily(QStringLiteral("Raleway"));
        font1.setPointSize(10);
        gbInformation->setFont(font1);
        lbStudentCode = new QLabel(gbInformation);
        lbStudentCode->setObjectName(QStringLiteral("lbStudentCode"));
        lbStudentCode->setGeometry(QRect(10, 30, 121, 16));
        QFont font2;
        font2.setFamily(QStringLiteral("Raleway"));
        font2.setBold(true);
        font2.setWeight(75);
        lbStudentCode->setFont(font2);
        lneStudentCode = new QLineEdit(gbInformation);
        lneStudentCode->setObjectName(QStringLiteral("lneStudentCode"));
        lneStudentCode->setGeometry(QRect(130, 28, 113, 22));
        lneStudentCode->setFont(font);
        lneStudentCode->setStyleSheet(QStringLiteral("background-color: rgb(255,255,255);"));
        lbName = new QLabel(gbInformation);
        lbName->setObjectName(QStringLiteral("lbName"));
        lbName->setGeometry(QRect(247, 30, 131, 16));
        lbName->setFont(font2);
        lneName = new QLineEdit(gbInformation);
        lneName->setObjectName(QStringLiteral("lneName"));
        lneName->setGeometry(QRect(377, 28, 291, 22));
        lneName->setFont(font);
        lneName->setStyleSheet(QStringLiteral("background-color: rgb(255,255,255);"));
        lbCellphone = new QLabel(gbInformation);
        lbCellphone->setObjectName(QStringLiteral("lbCellphone"));
        lbCellphone->setGeometry(QRect(677, 32, 61, 16));
        lbCellphone->setFont(font2);
        lneCellphone = new QLineEdit(gbInformation);
        lneCellphone->setObjectName(QStringLiteral("lneCellphone"));
        lneCellphone->setGeometry(QRect(740, 30, 171, 22));
        lneCellphone->setFont(font);
        lneCellphone->setStyleSheet(QStringLiteral("background-color: rgb(255,255,255);"));
        lbExistence = new QLabel(gbInformation);
        lbExistence->setObjectName(QStringLiteral("lbExistence"));
        lbExistence->setGeometry(QRect(10, 62, 55, 16));
        lbExistence->setFont(font2);
        lbTitle = new QLabel(gbInformation);
        lbTitle->setObjectName(QStringLiteral("lbTitle"));
        lbTitle->setGeometry(QRect(370, 62, 41, 16));
        lbTitle->setFont(font2);
        lbISBN = new QLabel(gbInformation);
        lbISBN->setObjectName(QStringLiteral("lbISBN"));
        lbISBN->setGeometry(QRect(135, 62, 31, 16));
        lbISBN->setFont(font2);
        lbSecondDate = new QLabel(gbInformation);
        lbSecondDate->setObjectName(QStringLiteral("lbSecondDate"));
        lbSecondDate->setGeometry(QRect(170, 122, 81, 16));
        lbSecondDate->setFont(font2);
        lbGenero = new QLabel(gbInformation);
        lbGenero->setObjectName(QStringLiteral("lbGenero"));
        lbGenero->setGeometry(QRect(10, 92, 51, 16));
        lbGenero->setFont(font2);
        lbFirstDate = new QLabel(gbInformation);
        lbFirstDate->setObjectName(QStringLiteral("lbFirstDate"));
        lbFirstDate->setGeometry(QRect(410, 122, 91, 16));
        lbFirstDate->setFont(font2);
        lbFormate = new QLabel(gbInformation);
        lbFormate->setObjectName(QStringLiteral("lbFormate"));
        lbFormate->setGeometry(QRect(300, 92, 55, 16));
        lbFormate->setFont(font2);
        lbPublisher = new QLabel(gbInformation);
        lbPublisher->setObjectName(QStringLiteral("lbPublisher"));
        lbPublisher->setGeometry(QRect(640, 90, 55, 16));
        lbPublisher->setFont(font2);
        lneExistence = new QLineEdit(gbInformation);
        lneExistence->setObjectName(QStringLiteral("lneExistence"));
        lneExistence->setGeometry(QRect(70, 60, 61, 22));
        lneExistence->setFont(font);
        lneExistence->setStyleSheet(QStringLiteral("background-color: rgb(255,255,255);"));
        lneISBN = new QLineEdit(gbInformation);
        lneISBN->setObjectName(QStringLiteral("lneISBN"));
        lneISBN->setGeometry(QRect(173, 60, 191, 22));
        lneISBN->setFont(font);
        lneISBN->setStyleSheet(QStringLiteral("background-color: rgb(255,255,255);"));
        lneTitle = new QLineEdit(gbInformation);
        lneTitle->setObjectName(QStringLiteral("lneTitle"));
        lneTitle->setGeometry(QRect(410, 60, 501, 22));
        lneTitle->setFont(font);
        lneTitle->setStyleSheet(QStringLiteral("background-color: rgb(255,255,255);"));
        lnePublisher = new QLineEdit(gbInformation);
        lnePublisher->setObjectName(QStringLiteral("lnePublisher"));
        lnePublisher->setGeometry(QRect(700, 88, 211, 22));
        lnePublisher->setFont(font);
        lnePublisher->setStyleSheet(QStringLiteral("background-color: rgb(255,255,255);"));
        lneGenero = new QLineEdit(gbInformation);
        lneGenero->setObjectName(QStringLiteral("lneGenero"));
        lneGenero->setGeometry(QRect(70, 90, 221, 22));
        lneGenero->setFont(font);
        lneGenero->setStyleSheet(QStringLiteral("background-color: rgb(255,255,255);"));
        lneFormate = new QLineEdit(gbInformation);
        lneFormate->setObjectName(QStringLiteral("lneFormate"));
        lneFormate->setGeometry(QRect(355, 90, 271, 22));
        lneFormate->setFont(font);
        lneFormate->setStyleSheet(QStringLiteral("background-color: rgb(255,255,255);"));
        lneFirstDate = new QLineEdit(gbInformation);
        lneFirstDate->setObjectName(QStringLiteral("lneFirstDate"));
        lneFirstDate->setGeometry(QRect(510, 120, 161, 22));
        lneFirstDate->setFont(font);
        lneFirstDate->setStyleSheet(QStringLiteral("background-color: rgb(255,255,255);"));
        lneSecondDate = new QLineEdit(gbInformation);
        lneSecondDate->setObjectName(QStringLiteral("lneSecondDate"));
        lneSecondDate->setGeometry(QRect(250, 120, 145, 22));
        lneSecondDate->setFont(font);
        lneSecondDate->setStyleSheet(QStringLiteral("background-color: rgb(255,255,255);"));
        lbStudentCode->raise();
        lneStudentCode->raise();
        lbName->raise();
        lneName->raise();
        lbCellphone->raise();
        lneCellphone->raise();
        lbExistence->raise();
        lbTitle->raise();
        lbISBN->raise();
        lbSecondDate->raise();
        lbGenero->raise();
        lbFirstDate->raise();
        lbFormate->raise();
        lbPublisher->raise();
        lneExistence->raise();
        lneISBN->raise();
        lneTitle->raise();
        lnePublisher->raise();
        lneFirstDate->raise();
        lneGenero->raise();
        lneFormate->raise();
        lneSecondDate->raise();
        pbAcept = new QPushButton(gbMain);
        pbAcept->setObjectName(QStringLiteral("pbAcept"));
        pbAcept->setEnabled(false);
        pbAcept->setGeometry(QRect(10, 170, 231, 61));
        QFont font3;
        font3.setFamily(QStringLiteral("Raleway"));
        font3.setPointSize(10);
        font3.setBold(true);
        font3.setWeight(75);
        pbAcept->setFont(font3);
        pbAcept->setStyleSheet(QLatin1String("QPushButton#pbAcept {\n"
"background-color: rgb(123, 155, 166);\n"
"color:  rgb(255, 255, 255);\n"
"border-radius: 5px;\n"
" }\n"
"\n"
" QPushButton#pbAcept:hover {\n"
"background-color: rgb(65, 91, 118);\n"
"color:  rgb(255, 255, 255);\n"
" }"));
        pbExit = new QPushButton(gbMain);
        pbExit->setObjectName(QStringLiteral("pbExit"));
        pbExit->setGeometry(QRect(700, 170, 231, 61));
        pbExit->setFont(font3);
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
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/door_out.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pbExit->setIcon(icon1);
        pbExit->setIconSize(QSize(60, 60));
        gbId = new QGroupBox(centralwidget);
        gbId->setObjectName(QStringLiteral("gbId"));
        gbId->setGeometry(QRect(10, 10, 941, 52));
        gbId->setStyleSheet(QStringLiteral("background-color: rgb(238, 244, 242); color: rgb(35, 54, 86);"));
        horizontalLayout = new QHBoxLayout(gbId);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lbId = new QLabel(gbId);
        lbId->setObjectName(QStringLiteral("lbId"));
        lbId->setFont(font2);

        horizontalLayout->addWidget(lbId);

        lneIdLoan = new QLineEdit(gbId);
        lneIdLoan->setObjectName(QStringLiteral("lneIdLoan"));
        lneIdLoan->setFont(font);
        lneIdLoan->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lneIdLoan->setMaxLength(10);

        horizontalLayout->addWidget(lneIdLoan);

        pbSearch = new QPushButton(gbId);
        pbSearch->setObjectName(QStringLiteral("pbSearch"));
        pbSearch->setMinimumSize(QSize(150, 30));
        pbSearch->setFont(font2);
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

        horizontalLayout->addWidget(pbSearch);

        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(-6, -5, 971, 351));
        label->setStyleSheet(QLatin1String("background-color: rgb(65, 91, 118);\n"
""));
        BackLoan->setCentralWidget(centralwidget);
        label->raise();
        gbMain->raise();
        gbId->raise();

        retranslateUi(BackLoan);
        QObject::connect(pbExit, SIGNAL(clicked()), BackLoan, SLOT(close()));

        QMetaObject::connectSlotsByName(BackLoan);
    } // setupUi

    void retranslateUi(QMainWindow *BackLoan)
    {
        BackLoan->setWindowTitle(QApplication::translate("BackLoan", "Devoluci\303\263n del prestamo", nullptr));
        gbMain->setTitle(QString());
        gbInformation->setTitle(QApplication::translate("BackLoan", "Informaci\303\263n del prestamo", nullptr));
        lbStudentCode->setText(QApplication::translate("BackLoan", "C\303\263digo del alumno", nullptr));
        lbName->setText(QApplication::translate("BackLoan", "Nombre del alumno", nullptr));
        lbCellphone->setText(QApplication::translate("BackLoan", "Telefono", nullptr));
        lneCellphone->setText(QString());
        lbExistence->setText(QApplication::translate("BackLoan", "Ejemplar", nullptr));
        lbTitle->setText(QApplication::translate("BackLoan", "Titulo", nullptr));
        lbISBN->setText(QApplication::translate("BackLoan", "ISBN", nullptr));
        lbSecondDate->setText(QApplication::translate("BackLoan", "Fecha de fin", nullptr));
        lbGenero->setText(QApplication::translate("BackLoan", "Genero", nullptr));
        lbFirstDate->setText(QApplication::translate("BackLoan", "Fecha de inicio", nullptr));
        lbFormate->setText(QApplication::translate("BackLoan", "Formato", nullptr));
        lbPublisher->setText(QApplication::translate("BackLoan", "Editorial", nullptr));
        pbAcept->setText(QApplication::translate("BackLoan", "Aceptar devoluci\303\263n", nullptr));
        pbExit->setText(QApplication::translate("BackLoan", "   Salir", nullptr));
        gbId->setTitle(QString());
        lbId->setText(QApplication::translate("BackLoan", "ID DEL PRESTAMO", nullptr));
        pbSearch->setText(QApplication::translate("BackLoan", "Buscar", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class BackLoan: public Ui_BackLoan {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BACKLOAN_H
