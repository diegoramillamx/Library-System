/********************************************************************************
** Form generated from reading UI file 'crudbook.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CRUDBOOK_H
#define UI_CRUDBOOK_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CrudBook
{
public:
    QWidget *centralwidget;
    QGroupBox *gbMain;
    QLabel *lbISBN;
    QLabel *lbTitle;
    QLabel *lbPageNumber;
    QLineEdit *lneISBN;
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
    QListView *lvWriter;
    QListView *lvWriterSelect;
    QSpinBox *sbCopiesNumber;
    QLabel *lbCopiesNumber;
    QPushButton *pbPush;
    QPushButton *pbPop;
    QSpinBox *sbEdition;
    QLabel *lbPageNumber_2;
    QLineEdit *lneWriter;
    QGroupBox *gbActions;
    QPushButton *pbActive;
    QPushButton *pbInsert;
    QPushButton *pbExit;
    QLabel *label;

    void setupUi(QMainWindow *CrudBook)
    {
        if (CrudBook->objectName().isEmpty())
            CrudBook->setObjectName(QStringLiteral("CrudBook"));
        CrudBook->resize(999, 484);
        CrudBook->setMinimumSize(QSize(999, 484));
        CrudBook->setMaximumSize(QSize(999, 1000));
        QIcon icon;
        icon.addFile(QStringLiteral(":/book-flat.ico"), QSize(), QIcon::Normal, QIcon::Off);
        CrudBook->setWindowIcon(icon);
        CrudBook->setStyleSheet(QStringLiteral(""));
        centralwidget = new QWidget(CrudBook);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gbMain = new QGroupBox(centralwidget);
        gbMain->setObjectName(QStringLiteral("gbMain"));
        gbMain->setEnabled(false);
        gbMain->setGeometry(QRect(10, 10, 671, 461));
        QFont font;
        font.setFamily(QStringLiteral("Raleway"));
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        gbMain->setFont(font);
        gbMain->setStyleSheet(QStringLiteral("background-color: rgb(238, 244, 242); color: rgb(35, 54, 86);"));
        lbISBN = new QLabel(gbMain);
        lbISBN->setObjectName(QStringLiteral("lbISBN"));
        lbISBN->setGeometry(QRect(10, 30, 55, 16));
        QFont font1;
        font1.setFamily(QStringLiteral("Raleway"));
        font1.setBold(true);
        font1.setWeight(75);
        lbISBN->setFont(font1);
        lbTitle = new QLabel(gbMain);
        lbTitle->setObjectName(QStringLiteral("lbTitle"));
        lbTitle->setGeometry(QRect(210, 30, 41, 16));
        lbTitle->setFont(font1);
        lbPageNumber = new QLabel(gbMain);
        lbPageNumber->setObjectName(QStringLiteral("lbPageNumber"));
        lbPageNumber->setGeometry(QRect(470, 30, 121, 16));
        lbPageNumber->setFont(font1);
        lneISBN = new QLineEdit(gbMain);
        lneISBN->setObjectName(QStringLiteral("lneISBN"));
        lneISBN->setGeometry(QRect(43, 28, 161, 22));
        QFont font2;
        font2.setFamily(QStringLiteral("Raleway"));
        lneISBN->setFont(font2);
        lneISBN->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lneISBN->setMaxLength(30);
        lneTitle = new QLineEdit(gbMain);
        lneTitle->setObjectName(QStringLiteral("lneTitle"));
        lneTitle->setGeometry(QRect(250, 28, 211, 22));
        lneTitle->setFont(font2);
        lneTitle->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lneTitle->setMaxLength(110);
        sbPageNumber = new QSpinBox(gbMain);
        sbPageNumber->setObjectName(QStringLiteral("sbPageNumber"));
        sbPageNumber->setGeometry(QRect(600, 28, 51, 22));
        sbPageNumber->setFont(font2);
        sbPageNumber->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        sbPageNumber->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        sbPageNumber->setMaximum(10000);
        sbPageNumber->setSingleStep(100);
        lbGenero = new QLabel(gbMain);
        lbGenero->setObjectName(QStringLiteral("lbGenero"));
        lbGenero->setGeometry(QRect(10, 94, 55, 16));
        lbGenero->setFont(font1);
        lneGenero = new QLineEdit(gbMain);
        lneGenero->setObjectName(QStringLiteral("lneGenero"));
        lneGenero->setGeometry(QRect(340, 92, 311, 22));
        lneGenero->setFont(font2);
        lneGenero->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lneGenero->setMaxLength(100);
        cboGenero = new QComboBox(gbMain);
        cboGenero->setObjectName(QStringLiteral("cboGenero"));
        cboGenero->setGeometry(QRect(70, 91, 261, 22));
        cboGenero->setFont(font2);
        cboGenero->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        cboPublisher = new QComboBox(gbMain);
        cboPublisher->setObjectName(QStringLiteral("cboPublisher"));
        cboPublisher->setGeometry(QRect(70, 119, 261, 22));
        cboPublisher->setFont(font2);
        cboPublisher->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lnePublisher = new QLineEdit(gbMain);
        lnePublisher->setObjectName(QStringLiteral("lnePublisher"));
        lnePublisher->setGeometry(QRect(340, 120, 311, 22));
        lnePublisher->setFont(font2);
        lnePublisher->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lnePublisher->setMaxLength(100);
        lbPublisher = new QLabel(gbMain);
        lbPublisher->setObjectName(QStringLiteral("lbPublisher"));
        lbPublisher->setGeometry(QRect(10, 122, 55, 16));
        lbPublisher->setFont(font1);
        cboFormate = new QComboBox(gbMain);
        cboFormate->setObjectName(QStringLiteral("cboFormate"));
        cboFormate->setGeometry(QRect(70, 149, 261, 22));
        cboFormate->setFont(font2);
        cboFormate->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lbFormate = new QLabel(gbMain);
        lbFormate->setObjectName(QStringLiteral("lbFormate"));
        lbFormate->setGeometry(QRect(10, 152, 55, 16));
        lbFormate->setFont(font1);
        lneFormate = new QLineEdit(gbMain);
        lneFormate->setObjectName(QStringLiteral("lneFormate"));
        lneFormate->setGeometry(QRect(340, 150, 311, 22));
        lneFormate->setFont(font2);
        lneFormate->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lneFormate->setMaxLength(100);
        lvWriter = new QListView(gbMain);
        lvWriter->setObjectName(QStringLiteral("lvWriter"));
        lvWriter->setGeometry(QRect(10, 180, 241, 192));
        lvWriter->setFont(font1);
        lvWriter->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lvWriterSelect = new QListView(gbMain);
        lvWriterSelect->setObjectName(QStringLiteral("lvWriterSelect"));
        lvWriterSelect->setGeometry(QRect(430, 180, 221, 192));
        lvWriterSelect->setFont(font1);
        lvWriterSelect->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        sbCopiesNumber = new QSpinBox(gbMain);
        sbCopiesNumber->setObjectName(QStringLiteral("sbCopiesNumber"));
        sbCopiesNumber->setGeometry(QRect(160, 427, 51, 22));
        sbCopiesNumber->setFont(font2);
        sbCopiesNumber->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        sbCopiesNumber->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        sbCopiesNumber->setMinimum(1);
        sbCopiesNumber->setMaximum(100);
        sbCopiesNumber->setSingleStep(1);
        lbCopiesNumber = new QLabel(gbMain);
        lbCopiesNumber->setObjectName(QStringLiteral("lbCopiesNumber"));
        lbCopiesNumber->setGeometry(QRect(10, 430, 147, 16));
        lbCopiesNumber->setFont(font1);
        pbPush = new QPushButton(gbMain);
        pbPush->setObjectName(QStringLiteral("pbPush"));
        pbPush->setGeometry(QRect(290, 240, 93, 28));
        pbPush->setStyleSheet(QLatin1String("QPushButton#pbPush {\n"
"background-color: rgb(123, 155, 166);\n"
"color:  rgb(255, 255, 255);\n"
"border-radius: 5px;\n"
" }\n"
"\n"
" QPushButton#pbPush:hover {\n"
"background-color: rgb(65, 91, 118);\n"
"color:  rgb(255, 255, 255);\n"
" }"));
        pbPop = new QPushButton(gbMain);
        pbPop->setObjectName(QStringLiteral("pbPop"));
        pbPop->setGeometry(QRect(290, 280, 93, 28));
        pbPop->setStyleSheet(QLatin1String("QPushButton#pbPop {\n"
"background-color: rgb(123, 155, 166);\n"
"color:  rgb(255, 255, 255);\n"
"border-radius: 5px;\n"
" }\n"
"\n"
" QPushButton#pbPop:hover {\n"
"background-color: rgb(65, 91, 118);\n"
"color:  rgb(255, 255, 255);\n"
" }"));
        sbEdition = new QSpinBox(gbMain);
        sbEdition->setObjectName(QStringLiteral("sbEdition"));
        sbEdition->setGeometry(QRect(240, 58, 51, 22));
        sbEdition->setFont(font2);
        sbEdition->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        sbEdition->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        sbEdition->setMinimum(1);
        sbEdition->setMaximum(15);
        sbEdition->setSingleStep(1);
        lbPageNumber_2 = new QLabel(gbMain);
        lbPageNumber_2->setObjectName(QStringLiteral("lbPageNumber_2"));
        lbPageNumber_2->setGeometry(QRect(180, 60, 51, 16));
        lbPageNumber_2->setFont(font1);
        lneWriter = new QLineEdit(gbMain);
        lneWriter->setObjectName(QStringLiteral("lneWriter"));
        lneWriter->setGeometry(QRect(10, 380, 241, 22));
        lneWriter->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lneWriter->setMaxLength(100);
        gbActions = new QGroupBox(centralwidget);
        gbActions->setObjectName(QStringLiteral("gbActions"));
        gbActions->setGeometry(QRect(700, 10, 291, 461));
        gbActions->setFont(font);
        gbActions->setStyleSheet(QStringLiteral("background-color: rgb(238, 244, 242); color: rgb(35, 54, 86);"));
        pbActive = new QPushButton(gbActions);
        pbActive->setObjectName(QStringLiteral("pbActive"));
        pbActive->setGeometry(QRect(20, 30, 251, 61));
        pbActive->setFont(font);
        pbActive->setStyleSheet(QLatin1String("QPushButton#pbActive {\n"
"background-color: rgb(123, 155, 166);\n"
"color:  rgb(255, 255, 255);\n"
"border-radius: 5px;\n"
" }\n"
"\n"
" QPushButton#pbActive:hover {\n"
"background-color: rgb(65, 91, 118);\n"
"color:  rgb(255, 255, 255);\n"
" }"));
        pbInsert = new QPushButton(gbActions);
        pbInsert->setObjectName(QStringLiteral("pbInsert"));
        pbInsert->setEnabled(false);
        pbInsert->setGeometry(QRect(20, 110, 251, 61));
        pbInsert->setFont(font);
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
        pbExit = new QPushButton(gbActions);
        pbExit->setObjectName(QStringLiteral("pbExit"));
        pbExit->setGeometry(QRect(20, 370, 251, 61));
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
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/door_out.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pbExit->setIcon(icon1);
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(-16, -5, 1051, 541));
        label->setStyleSheet(QLatin1String("background-color: rgb(65, 91, 118);\n"
""));
        CrudBook->setCentralWidget(centralwidget);
        label->raise();
        gbMain->raise();
        gbActions->raise();

        retranslateUi(CrudBook);
        QObject::connect(pbExit, SIGNAL(clicked()), CrudBook, SLOT(close()));
        QObject::connect(pbExit, SIGNAL(clicked()), CrudBook, SLOT(close()));

        QMetaObject::connectSlotsByName(CrudBook);
    } // setupUi

    void retranslateUi(QMainWindow *CrudBook)
    {
        CrudBook->setWindowTitle(QApplication::translate("CrudBook", "Administraci\303\263n de libros", nullptr));
        gbMain->setTitle(QApplication::translate("CrudBook", "Libros", nullptr));
        lbISBN->setText(QApplication::translate("CrudBook", "ISBN", nullptr));
        lbTitle->setText(QApplication::translate("CrudBook", "T\303\255tulo", nullptr));
        lbPageNumber->setText(QApplication::translate("CrudBook", "N\303\272mero de p\303\241ginas", nullptr));
        lbGenero->setText(QApplication::translate("CrudBook", "Genero", nullptr));
        lbPublisher->setText(QApplication::translate("CrudBook", "Editorial", nullptr));
        lbFormate->setText(QApplication::translate("CrudBook", "Formato", nullptr));
        lbCopiesNumber->setText(QApplication::translate("CrudBook", "N\303\272mero de ejemplares", nullptr));
        pbPush->setText(QApplication::translate("CrudBook", ">", nullptr));
        pbPop->setText(QApplication::translate("CrudBook", "x", nullptr));
        lbPageNumber_2->setText(QApplication::translate("CrudBook", "Edici\303\263n", nullptr));
        gbActions->setTitle(QApplication::translate("CrudBook", "Acciones", nullptr));
        pbActive->setText(QApplication::translate("CrudBook", "Activar registro", nullptr));
        pbInsert->setText(QApplication::translate("CrudBook", "Registrar", nullptr));
        pbExit->setText(QApplication::translate("CrudBook", "   Salir", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CrudBook: public Ui_CrudBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CRUDBOOK_H
