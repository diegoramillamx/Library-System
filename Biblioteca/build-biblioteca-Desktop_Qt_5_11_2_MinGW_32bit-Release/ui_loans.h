/********************************************************************************
** Form generated from reading UI file 'loans.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOANS_H
#define UI_LOANS_H

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
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Loans
{
public:
    QWidget *centralwidget;
    QGroupBox *gbMain;
    QGroupBox *gbStudent;
    QLabel *lbCode;
    QLabel *lbName;
    QLabel *lbFatherLast;
    QLabel *lbMotherLast;
    QLabel *lbCity;
    QLabel *lbCellphone;
    QLabel *lbCareer;
    QLineEdit *lneCode;
    QLineEdit *lneName;
    QLineEdit *lneFatherLast;
    QLineEdit *lneMotherLast;
    QLineEdit *lneCity;
    QLineEdit *lneCellphone;
    QLineEdit *lneCareer;
    QGroupBox *gbBook;
    QLabel *lbBook;
    QComboBox *cboBook;
    QLineEdit *lneBook;
    QComboBox *cboExistence;
    QLabel *lbExistence;
    QPushButton *pbPushExistence;
    QTableWidget *twBook;
    QPushButton *pbInsertLoan;

    void setupUi(QMainWindow *Loans)
    {
        if (Loans->objectName().isEmpty())
            Loans->setObjectName(QStringLiteral("Loans"));
        Loans->resize(1065, 521);
        QIcon icon;
        icon.addFile(QStringLiteral(":/book-flat.ico"), QSize(), QIcon::Normal, QIcon::Off);
        Loans->setWindowIcon(icon);
        Loans->setStyleSheet(QLatin1String("background-color: rgb(65, 91, 118);\n"
""));
        centralwidget = new QWidget(Loans);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gbMain = new QGroupBox(centralwidget);
        gbMain->setObjectName(QStringLiteral("gbMain"));
        gbMain->setGeometry(QRect(10, 10, 1041, 501));
        gbMain->setStyleSheet(QStringLiteral("background-color: rgb(238, 244, 242);"));
        gbStudent = new QGroupBox(gbMain);
        gbStudent->setObjectName(QStringLiteral("gbStudent"));
        gbStudent->setGeometry(QRect(10, 20, 451, 211));
        QFont font;
        font.setFamily(QStringLiteral("Raleway"));
        font.setPointSize(10);
        gbStudent->setFont(font);
        lbCode = new QLabel(gbStudent);
        lbCode->setObjectName(QStringLiteral("lbCode"));
        lbCode->setGeometry(QRect(10, 30, 55, 16));
        QFont font1;
        font1.setFamily(QStringLiteral("Raleway"));
        font1.setBold(true);
        font1.setWeight(75);
        lbCode->setFont(font1);
        lbName = new QLabel(gbStudent);
        lbName->setObjectName(QStringLiteral("lbName"));
        lbName->setGeometry(QRect(180, 30, 55, 16));
        lbName->setFont(font1);
        lbFatherLast = new QLabel(gbStudent);
        lbFatherLast->setObjectName(QStringLiteral("lbFatherLast"));
        lbFatherLast->setGeometry(QRect(10, 60, 111, 16));
        lbFatherLast->setFont(font1);
        lbMotherLast = new QLabel(gbStudent);
        lbMotherLast->setObjectName(QStringLiteral("lbMotherLast"));
        lbMotherLast->setGeometry(QRect(10, 90, 111, 16));
        lbMotherLast->setFont(font1);
        lbCity = new QLabel(gbStudent);
        lbCity->setObjectName(QStringLiteral("lbCity"));
        lbCity->setGeometry(QRect(10, 120, 55, 16));
        lbCity->setFont(font1);
        lbCellphone = new QLabel(gbStudent);
        lbCellphone->setObjectName(QStringLiteral("lbCellphone"));
        lbCellphone->setGeometry(QRect(10, 150, 55, 16));
        lbCellphone->setFont(font1);
        lbCareer = new QLabel(gbStudent);
        lbCareer->setObjectName(QStringLiteral("lbCareer"));
        lbCareer->setGeometry(QRect(10, 180, 55, 16));
        lbCareer->setFont(font1);
        lneCode = new QLineEdit(gbStudent);
        lneCode->setObjectName(QStringLiteral("lneCode"));
        lneCode->setGeometry(QRect(60, 28, 111, 22));
        lneCode->setFont(font1);
        lneCode->setStyleSheet(QStringLiteral("background-color: rgb(255,255,255);"));
        lneName = new QLineEdit(gbStudent);
        lneName->setObjectName(QStringLiteral("lneName"));
        lneName->setEnabled(false);
        lneName->setGeometry(QRect(240, 28, 201, 22));
        lneName->setFont(font1);
        lneName->setStyleSheet(QStringLiteral("background-color: rgb(255,255,255);"));
        lneFatherLast = new QLineEdit(gbStudent);
        lneFatherLast->setObjectName(QStringLiteral("lneFatherLast"));
        lneFatherLast->setEnabled(false);
        lneFatherLast->setGeometry(QRect(120, 58, 321, 22));
        lneFatherLast->setFont(font1);
        lneFatherLast->setStyleSheet(QStringLiteral("background-color: rgb(255,255,255);"));
        lneMotherLast = new QLineEdit(gbStudent);
        lneMotherLast->setObjectName(QStringLiteral("lneMotherLast"));
        lneMotherLast->setEnabled(false);
        lneMotherLast->setGeometry(QRect(120, 88, 321, 22));
        lneMotherLast->setFont(font1);
        lneMotherLast->setStyleSheet(QStringLiteral("background-color: rgb(255,255,255);"));
        lneCity = new QLineEdit(gbStudent);
        lneCity->setObjectName(QStringLiteral("lneCity"));
        lneCity->setEnabled(false);
        lneCity->setGeometry(QRect(70, 118, 371, 22));
        lneCity->setFont(font1);
        lneCity->setStyleSheet(QStringLiteral("background-color: rgb(255,255,255);"));
        lneCellphone = new QLineEdit(gbStudent);
        lneCellphone->setObjectName(QStringLiteral("lneCellphone"));
        lneCellphone->setEnabled(false);
        lneCellphone->setGeometry(QRect(70, 148, 371, 22));
        lneCellphone->setFont(font1);
        lneCellphone->setStyleSheet(QStringLiteral("background-color: rgb(255,255,255);"));
        lneCareer = new QLineEdit(gbStudent);
        lneCareer->setObjectName(QStringLiteral("lneCareer"));
        lneCareer->setEnabled(false);
        lneCareer->setGeometry(QRect(70, 178, 371, 22));
        lneCareer->setFont(font1);
        lneCareer->setStyleSheet(QStringLiteral("background-color: rgb(255,255,255);"));
        gbBook = new QGroupBox(gbMain);
        gbBook->setObjectName(QStringLiteral("gbBook"));
        gbBook->setEnabled(false);
        gbBook->setGeometry(QRect(470, 20, 561, 211));
        gbBook->setFont(font);
        lbBook = new QLabel(gbBook);
        lbBook->setObjectName(QStringLiteral("lbBook"));
        lbBook->setGeometry(QRect(10, 30, 55, 16));
        lbBook->setFont(font1);
        cboBook = new QComboBox(gbBook);
        cboBook->setObjectName(QStringLiteral("cboBook"));
        cboBook->setGeometry(QRect(44, 27, 251, 22));
        QFont font2;
        font2.setFamily(QStringLiteral("Raleway"));
        cboBook->setFont(font2);
        cboBook->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lneBook = new QLineEdit(gbBook);
        lneBook->setObjectName(QStringLiteral("lneBook"));
        lneBook->setGeometry(QRect(300, 27, 251, 22));
        lneBook->setFont(font2);
        lneBook->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        cboExistence = new QComboBox(gbBook);
        cboExistence->setObjectName(QStringLiteral("cboExistence"));
        cboExistence->setGeometry(QRect(70, 57, 225, 22));
        cboExistence->setFont(font2);
        cboExistence->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lbExistence = new QLabel(gbBook);
        lbExistence->setObjectName(QStringLiteral("lbExistence"));
        lbExistence->setGeometry(QRect(10, 60, 55, 16));
        lbExistence->setFont(font1);
        pbPushExistence = new QPushButton(gbBook);
        pbPushExistence->setObjectName(QStringLiteral("pbPushExistence"));
        pbPushExistence->setGeometry(QRect(160, 100, 271, 81));
        QFont font3;
        font3.setFamily(QStringLiteral("Raleway"));
        font3.setPointSize(10);
        font3.setBold(true);
        font3.setWeight(75);
        pbPushExistence->setFont(font3);
        pbPushExistence->setStyleSheet(QLatin1String("QPushButton#pbPushExistence {\n"
"background-color: rgb(123, 155, 166);\n"
"border-radius: 5px;\n"
" }\n"
"\n"
" QPushButton#pbPushExistence:hover {\n"
"background-color: rgb(65, 91, 118);\n"
"color:  rgb(255, 255, 255);\n"
" }"));
        lbBook->raise();
        cboBook->raise();
        lneBook->raise();
        lbExistence->raise();
        cboExistence->raise();
        pbPushExistence->raise();
        twBook = new QTableWidget(gbMain);
        twBook->setObjectName(QStringLiteral("twBook"));
        twBook->setGeometry(QRect(10, 240, 671, 251));
        QFont font4;
        font4.setFamily(QStringLiteral("Raleway"));
        font4.setPointSize(9);
        twBook->setFont(font4);
        pbInsertLoan = new QPushButton(gbMain);
        pbInsertLoan->setObjectName(QStringLiteral("pbInsertLoan"));
        pbInsertLoan->setGeometry(QRect(720, 320, 271, 81));
        pbInsertLoan->setFont(font3);
        pbInsertLoan->setStyleSheet(QLatin1String("QPushButton#pbInsertLoan {\n"
"background-color: rgb(123, 155, 166);\n"
"border-radius: 5px;\n"
" }\n"
"\n"
" QPushButton#pbInsertLoan:hover {\n"
"background-color: rgb(65, 91, 118);\n"
"color:  rgb(255, 255, 255);\n"
" }"));
        Loans->setCentralWidget(centralwidget);

        retranslateUi(Loans);

        QMetaObject::connectSlotsByName(Loans);
    } // setupUi

    void retranslateUi(QMainWindow *Loans)
    {
        Loans->setWindowTitle(QApplication::translate("Loans", "Administraci\303\263n de prestamos", nullptr));
        gbMain->setTitle(QString());
        gbStudent->setTitle(QApplication::translate("Loans", "Informaci\303\263n del alumno", nullptr));
        lbCode->setText(QApplication::translate("Loans", "C\303\263digo", nullptr));
        lbName->setText(QApplication::translate("Loans", "Nombre", nullptr));
        lbFatherLast->setText(QApplication::translate("Loans", "Apellido paterno", nullptr));
        lbMotherLast->setText(QApplication::translate("Loans", "Apellido materno", nullptr));
        lbCity->setText(QApplication::translate("Loans", "Ciudad", nullptr));
        lbCellphone->setText(QApplication::translate("Loans", "Telefono", nullptr));
        lbCareer->setText(QApplication::translate("Loans", "Carrera", nullptr));
        gbBook->setTitle(QApplication::translate("Loans", "Informaci\303\263n del libro", nullptr));
        lbBook->setText(QApplication::translate("Loans", "Libro", nullptr));
        lbExistence->setText(QApplication::translate("Loans", "Ejemplar", nullptr));
        pbPushExistence->setText(QApplication::translate("Loans", "Agregar ese ejemplar", nullptr));
        pbInsertLoan->setText(QApplication::translate("Loans", "Guardar el prestamo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Loans: public Ui_Loans {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOANS_H
