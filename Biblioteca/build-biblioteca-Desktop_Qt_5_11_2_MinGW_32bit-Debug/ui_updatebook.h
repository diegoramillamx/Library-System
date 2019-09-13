/********************************************************************************
** Form generated from reading UI file 'updatebook.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATEBOOK_H
#define UI_UPDATEBOOK_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UpdateBook
{
public:
    QWidget *centralwidget;
    QGroupBox *gbMain;
    QLabel *lbTitle;
    QLabel *lbPageNumber;
    QLineEdit *lneTitle;
    QSpinBox *sbPageNumber;
    QLabel *lbGenero;
    QLineEdit *lneGenero;
    QComboBox *cboGenero;
    QComboBox *cboPublisher;
    QLineEdit *lnePublisher;
    QLabel *lbPublisher;
    QComboBox *cboFormate;
    QLabel *lbFormate;
    QLineEdit *lneFormate;
    QSpinBox *sbCopiesNumber;
    QLabel *lbCopiesNumber;
    QSpinBox *sbEdition;
    QLabel *lbPageNumber_2;
    QGroupBox *gbActions;
    QPushButton *pbUpdate;
    QPushButton *pbExit;
    QGroupBox *gbISBN;
    QLabel *lbISBN;
    QLineEdit *lneISBN;
    QPushButton *pbSearch;
    QLabel *label;

    void setupUi(QMainWindow *UpdateBook)
    {
        if (UpdateBook->objectName().isEmpty())
            UpdateBook->setObjectName(QStringLiteral("UpdateBook"));
        UpdateBook->resize(990, 310);
        UpdateBook->setMinimumSize(QSize(990, 310));
        UpdateBook->setMaximumSize(QSize(990, 310));
        QIcon icon;
        icon.addFile(QStringLiteral(":/book-flat.ico"), QSize(), QIcon::Normal, QIcon::Off);
        UpdateBook->setWindowIcon(icon);
        UpdateBook->setStyleSheet(QStringLiteral(""));
        centralwidget = new QWidget(UpdateBook);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gbMain = new QGroupBox(centralwidget);
        gbMain->setObjectName(QStringLiteral("gbMain"));
        gbMain->setEnabled(false);
        gbMain->setGeometry(QRect(10, 90, 671, 211));
        QFont font;
        font.setFamily(QStringLiteral("Raleway"));
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        gbMain->setFont(font);
        gbMain->setStyleSheet(QStringLiteral("background-color: rgb(238, 244, 242); color: rgb(35, 54, 86);"));
        lbTitle = new QLabel(gbMain);
        lbTitle->setObjectName(QStringLiteral("lbTitle"));
        lbTitle->setGeometry(QRect(10, 30, 41, 16));
        QFont font1;
        font1.setFamily(QStringLiteral("Raleway"));
        font1.setBold(true);
        font1.setWeight(75);
        lbTitle->setFont(font1);
        lbPageNumber = new QLabel(gbMain);
        lbPageNumber->setObjectName(QStringLiteral("lbPageNumber"));
        lbPageNumber->setGeometry(QRect(340, 30, 121, 16));
        lbPageNumber->setFont(font1);
        lneTitle = new QLineEdit(gbMain);
        lneTitle->setObjectName(QStringLiteral("lneTitle"));
        lneTitle->setGeometry(QRect(50, 28, 281, 22));
        QFont font2;
        font2.setFamily(QStringLiteral("Raleway"));
        lneTitle->setFont(font2);
        lneTitle->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lneTitle->setMaxLength(110);
        sbPageNumber = new QSpinBox(gbMain);
        sbPageNumber->setObjectName(QStringLiteral("sbPageNumber"));
        sbPageNumber->setGeometry(QRect(470, 28, 51, 22));
        sbPageNumber->setFont(font2);
        sbPageNumber->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        sbPageNumber->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        sbPageNumber->setMaximum(10000);
        sbPageNumber->setSingleStep(100);
        lbGenero = new QLabel(gbMain);
        lbGenero->setObjectName(QStringLiteral("lbGenero"));
        lbGenero->setGeometry(QRect(10, 70, 55, 16));
        lbGenero->setFont(font1);
        lneGenero = new QLineEdit(gbMain);
        lneGenero->setObjectName(QStringLiteral("lneGenero"));
        lneGenero->setGeometry(QRect(340, 68, 311, 22));
        lneGenero->setFont(font2);
        lneGenero->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        cboGenero = new QComboBox(gbMain);
        cboGenero->setObjectName(QStringLiteral("cboGenero"));
        cboGenero->setGeometry(QRect(70, 67, 261, 22));
        cboGenero->setFont(font2);
        cboGenero->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        cboPublisher = new QComboBox(gbMain);
        cboPublisher->setObjectName(QStringLiteral("cboPublisher"));
        cboPublisher->setGeometry(QRect(70, 99, 261, 22));
        cboPublisher->setFont(font2);
        cboPublisher->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lnePublisher = new QLineEdit(gbMain);
        lnePublisher->setObjectName(QStringLiteral("lnePublisher"));
        lnePublisher->setGeometry(QRect(340, 100, 311, 22));
        lnePublisher->setFont(font2);
        lnePublisher->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lbPublisher = new QLabel(gbMain);
        lbPublisher->setObjectName(QStringLiteral("lbPublisher"));
        lbPublisher->setGeometry(QRect(10, 102, 55, 16));
        lbPublisher->setFont(font1);
        cboFormate = new QComboBox(gbMain);
        cboFormate->setObjectName(QStringLiteral("cboFormate"));
        cboFormate->setGeometry(QRect(70, 129, 261, 22));
        cboFormate->setFont(font2);
        cboFormate->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lbFormate = new QLabel(gbMain);
        lbFormate->setObjectName(QStringLiteral("lbFormate"));
        lbFormate->setGeometry(QRect(10, 132, 55, 16));
        lbFormate->setFont(font1);
        lneFormate = new QLineEdit(gbMain);
        lneFormate->setObjectName(QStringLiteral("lneFormate"));
        lneFormate->setGeometry(QRect(340, 130, 311, 22));
        lneFormate->setFont(font2);
        lneFormate->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        sbCopiesNumber = new QSpinBox(gbMain);
        sbCopiesNumber->setObjectName(QStringLiteral("sbCopiesNumber"));
        sbCopiesNumber->setGeometry(QRect(160, 167, 51, 22));
        sbCopiesNumber->setFont(font2);
        sbCopiesNumber->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        sbCopiesNumber->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        sbCopiesNumber->setMinimum(1);
        sbCopiesNumber->setMaximum(100);
        sbCopiesNumber->setSingleStep(100);
        lbCopiesNumber = new QLabel(gbMain);
        lbCopiesNumber->setObjectName(QStringLiteral("lbCopiesNumber"));
        lbCopiesNumber->setGeometry(QRect(10, 170, 147, 16));
        lbCopiesNumber->setFont(font1);
        sbEdition = new QSpinBox(gbMain);
        sbEdition->setObjectName(QStringLiteral("sbEdition"));
        sbEdition->setGeometry(QRect(590, 30, 51, 22));
        sbEdition->setFont(font2);
        sbEdition->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        sbEdition->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        sbEdition->setMinimum(1);
        sbEdition->setMaximum(15);
        sbEdition->setSingleStep(100);
        lbPageNumber_2 = new QLabel(gbMain);
        lbPageNumber_2->setObjectName(QStringLiteral("lbPageNumber_2"));
        lbPageNumber_2->setGeometry(QRect(530, 32, 51, 16));
        lbPageNumber_2->setFont(font1);
        gbActions = new QGroupBox(centralwidget);
        gbActions->setObjectName(QStringLiteral("gbActions"));
        gbActions->setGeometry(QRect(690, 20, 291, 281));
        gbActions->setFont(font);
        gbActions->setStyleSheet(QStringLiteral("background-color: rgb(238, 244, 242); color: rgb(35, 54, 86);"));
        pbUpdate = new QPushButton(gbActions);
        pbUpdate->setObjectName(QStringLiteral("pbUpdate"));
        pbUpdate->setEnabled(false);
        pbUpdate->setGeometry(QRect(20, 30, 251, 61));
        pbUpdate->setFont(font);
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
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/update_contact_info.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pbUpdate->setIcon(icon1);
        pbExit = new QPushButton(gbActions);
        pbExit->setObjectName(QStringLiteral("pbExit"));
        pbExit->setGeometry(QRect(20, 200, 251, 61));
        pbExit->setFont(font);
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
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/door_out.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pbExit->setIcon(icon2);
        gbISBN = new QGroupBox(centralwidget);
        gbISBN->setObjectName(QStringLiteral("gbISBN"));
        gbISBN->setGeometry(QRect(9, 20, 671, 61));
        gbISBN->setStyleSheet(QStringLiteral("background-color: rgb(238, 244, 242); color: rgb(35, 54, 86);"));
        lbISBN = new QLabel(gbISBN);
        lbISBN->setObjectName(QStringLiteral("lbISBN"));
        lbISBN->setGeometry(QRect(10, 22, 55, 16));
        lbISBN->setFont(font1);
        lneISBN = new QLineEdit(gbISBN);
        lneISBN->setObjectName(QStringLiteral("lneISBN"));
        lneISBN->setGeometry(QRect(43, 20, 441, 22));
        lneISBN->setFont(font2);
        lneISBN->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lneISBN->setMaxLength(30);
        pbSearch = new QPushButton(gbISBN);
        pbSearch->setObjectName(QStringLiteral("pbSearch"));
        pbSearch->setGeometry(QRect(490, 10, 171, 41));
        pbSearch->setFont(font1);
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
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(-16, -15, 1021, 471));
        label->setStyleSheet(QLatin1String("background-color: rgb(65, 91, 118);\n"
""));
        UpdateBook->setCentralWidget(centralwidget);
        label->raise();
        gbMain->raise();
        gbActions->raise();
        gbISBN->raise();

        retranslateUi(UpdateBook);
        QObject::connect(pbExit, SIGNAL(clicked()), UpdateBook, SLOT(close()));

        QMetaObject::connectSlotsByName(UpdateBook);
    } // setupUi

    void retranslateUi(QMainWindow *UpdateBook)
    {
        UpdateBook->setWindowTitle(QApplication::translate("UpdateBook", "Actualizaci\303\263n de alg\303\272n libro", nullptr));
        gbMain->setTitle(QApplication::translate("UpdateBook", "Informaci\303\263n", nullptr));
        lbTitle->setText(QApplication::translate("UpdateBook", "T\303\255tulo", nullptr));
        lbPageNumber->setText(QApplication::translate("UpdateBook", "N\303\272mero de p\303\241ginas", nullptr));
        lbGenero->setText(QApplication::translate("UpdateBook", "Genero", nullptr));
        lbPublisher->setText(QApplication::translate("UpdateBook", "Editorial", nullptr));
        lbFormate->setText(QApplication::translate("UpdateBook", "Formato", nullptr));
        lbCopiesNumber->setText(QApplication::translate("UpdateBook", "N\303\272mero de ejemplares", nullptr));
        lbPageNumber_2->setText(QApplication::translate("UpdateBook", "Edici\303\263n", nullptr));
        gbActions->setTitle(QApplication::translate("UpdateBook", "Acciones", nullptr));
        pbUpdate->setText(QApplication::translate("UpdateBook", "   Actualizar", nullptr));
        pbExit->setText(QApplication::translate("UpdateBook", "   Salir", nullptr));
        gbISBN->setTitle(QString());
        lbISBN->setText(QApplication::translate("UpdateBook", "ISBN", nullptr));
        pbSearch->setText(QApplication::translate("UpdateBook", "Buscar informaci\303\263n", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class UpdateBook: public Ui_UpdateBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATEBOOK_H
