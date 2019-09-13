/********************************************************************************
** Form generated from reading UI file 'mainmenu.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINMENU_H
#define UI_MAINMENU_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainMenu
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_7;
    QGroupBox *gbButtons;
    QHBoxLayout *horizontalLayout;
    QPushButton *pbHelp;
    QPushButton *pbExit;
    QTabWidget *tbMain;
    QWidget *tab;
    QGridLayout *gridLayout_2;
    QLabel *lbTitle;
    QLabel *lbContent;
    QLabel *lbContent2;
    QLabel *lbContent3;
    QLabel *lbFirm;
    QWidget *tabUser;
    QGridLayout *gridLayout_5;
    QGroupBox *gbStudent;
    QGridLayout *gridLayout_3;
    QPushButton *pbStudent;
    QPushButton *pbCareer;
    QPushButton *pbTeacher;
    QGroupBox *gbTeacher;
    QGridLayout *gridLayout_4;
    QPushButton *pbEmail;
    QWidget *tabBook;
    QGroupBox *groupBox;
    QPushButton *pbAuthor;
    QPushButton *pbBook;
    QPushButton *pbPublisher;
    QPushButton *pbSearchBook;
    QPushButton *pbModifyBook;
    QWidget *tabPrestamos;
    QPushButton *pbPrestamos;
    QPushButton *pbPrestamos_2;

    void setupUi(QMainWindow *MainMenu)
    {
        if (MainMenu->objectName().isEmpty())
            MainMenu->setObjectName(QStringLiteral("MainMenu"));
        MainMenu->resize(724, 443);
        MainMenu->setMinimumSize(QSize(724, 443));
        MainMenu->setMaximumSize(QSize(724, 443));
        QFont font;
        font.setFamily(QStringLiteral("Raleway"));
        MainMenu->setFont(font);
        QIcon icon;
        icon.addFile(QStringLiteral(":/book-flat.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainMenu->setWindowIcon(icon);
        MainMenu->setStyleSheet(QLatin1String("background-color: rgb(65, 91, 118);\n"
""));
        centralwidget = new QWidget(MainMenu);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout_7 = new QGridLayout(centralwidget);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        gbButtons = new QGroupBox(centralwidget);
        gbButtons->setObjectName(QStringLiteral("gbButtons"));
        gbButtons->setStyleSheet(QStringLiteral("background-color: rgb(238, 244, 242);"));
        horizontalLayout = new QHBoxLayout(gbButtons);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pbHelp = new QPushButton(gbButtons);
        pbHelp->setObjectName(QStringLiteral("pbHelp"));
        pbHelp->setStyleSheet(QLatin1String("QPushButton#pbHelp {\n"
"background-color: rgb(123, 155, 166);\n"
"border-radius: 5px;\n"
" }\n"
"\n"
" QPushButton#pbHelp:hover {\n"
"background-color: rgb(65, 91, 118);\n"
"color:  rgb(255, 255, 255);\n"
" }"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/help.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pbHelp->setIcon(icon1);
        pbHelp->setIconSize(QSize(50, 50));

        horizontalLayout->addWidget(pbHelp, 0, Qt::AlignLeft);

        pbExit = new QPushButton(gbButtons);
        pbExit->setObjectName(QStringLiteral("pbExit"));
        pbExit->setLayoutDirection(Qt::LeftToRight);
        pbExit->setStyleSheet(QLatin1String("QPushButton#pbExit {\n"
"background-color: rgb(123, 155, 166);\n"
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
        pbExit->setIconSize(QSize(50, 50));

        horizontalLayout->addWidget(pbExit, 0, Qt::AlignRight);


        gridLayout_7->addWidget(gbButtons, 1, 0, 1, 2);

        tbMain = new QTabWidget(centralwidget);
        tbMain->setObjectName(QStringLiteral("tbMain"));
        QFont font1;
        font1.setFamily(QStringLiteral("Raleway"));
        font1.setPointSize(9);
        tbMain->setFont(font1);
        tbMain->setStyleSheet(QStringLiteral("background-color: rgb(238, 244, 242);"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout_2 = new QGridLayout(tab);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        lbTitle = new QLabel(tab);
        lbTitle->setObjectName(QStringLiteral("lbTitle"));
        QFont font2;
        font2.setFamily(QStringLiteral("Raleway"));
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        lbTitle->setFont(font2);
        lbTitle->setStyleSheet(QStringLiteral("color: rgb(35, 54, 86);"));

        gridLayout_2->addWidget(lbTitle, 0, 0, 1, 1, Qt::AlignHCenter);

        lbContent = new QLabel(tab);
        lbContent->setObjectName(QStringLiteral("lbContent"));
        QFont font3;
        font3.setFamily(QStringLiteral("Raleway"));
        font3.setPointSize(10);
        lbContent->setFont(font3);
        lbContent->setStyleSheet(QStringLiteral("color: rgb(35, 54, 86);"));

        gridLayout_2->addWidget(lbContent, 1, 0, 1, 1);

        lbContent2 = new QLabel(tab);
        lbContent2->setObjectName(QStringLiteral("lbContent2"));
        lbContent2->setFont(font3);
        lbContent2->setStyleSheet(QStringLiteral("color: rgb(35, 54, 86);"));

        gridLayout_2->addWidget(lbContent2, 2, 0, 1, 1);

        lbContent3 = new QLabel(tab);
        lbContent3->setObjectName(QStringLiteral("lbContent3"));
        lbContent3->setFont(font3);
        lbContent3->setStyleSheet(QStringLiteral("color: rgb(35, 54, 86);"));

        gridLayout_2->addWidget(lbContent3, 3, 0, 1, 1);

        lbFirm = new QLabel(tab);
        lbFirm->setObjectName(QStringLiteral("lbFirm"));
        QFont font4;
        font4.setFamily(QStringLiteral("Raleway"));
        font4.setPointSize(9);
        font4.setBold(true);
        font4.setWeight(75);
        lbFirm->setFont(font4);
        lbFirm->setStyleSheet(QStringLiteral("color: rgb(35, 54, 86);"));

        gridLayout_2->addWidget(lbFirm, 4, 0, 1, 1, Qt::AlignRight);

        tbMain->addTab(tab, QString());
        tabUser = new QWidget();
        tabUser->setObjectName(QStringLiteral("tabUser"));
        gridLayout_5 = new QGridLayout(tabUser);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gbStudent = new QGroupBox(tabUser);
        gbStudent->setObjectName(QStringLiteral("gbStudent"));
        QFont font5;
        font5.setFamily(QStringLiteral("Raleway"));
        font5.setPointSize(9);
        font5.setBold(false);
        font5.setWeight(50);
        gbStudent->setFont(font5);
        gridLayout_3 = new QGridLayout(gbStudent);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        pbStudent = new QPushButton(gbStudent);
        pbStudent->setObjectName(QStringLiteral("pbStudent"));
        QFont font6;
        font6.setFamily(QStringLiteral("Raleway"));
        font6.setPointSize(9);
        font6.setBold(true);
        font6.setWeight(75);
        font6.setKerning(true);
        pbStudent->setFont(font6);
        pbStudent->setLayoutDirection(Qt::LeftToRight);
        pbStudent->setStyleSheet(QLatin1String("QPushButton#pbStudent {\n"
"background-color: rgb(123, 155, 166);\n"
"border-radius: 5px;\n"
" }\n"
"\n"
" QPushButton#pbStudent:hover {\n"
"background-color: rgb(65, 91, 118);\n"
"color:  rgb(255, 255, 255);\n"
" }"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/user_student.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pbStudent->setIcon(icon3);
        pbStudent->setIconSize(QSize(60, 60));
        pbStudent->setCheckable(false);
        pbStudent->setAutoRepeat(false);

        gridLayout_3->addWidget(pbStudent, 0, 0, 1, 1);

        pbCareer = new QPushButton(gbStudent);
        pbCareer->setObjectName(QStringLiteral("pbCareer"));
        pbCareer->setFont(font4);
        pbCareer->setStyleSheet(QLatin1String("QPushButton#pbCareer {\n"
"background-color: rgb(123, 155, 166);\n"
"border-radius: 5px;\n"
" }\n"
"\n"
" QPushButton#pbCareer:hover {\n"
"background-color: rgb(65, 91, 118);\n"
"color:  rgb(255, 255, 255);\n"
" }"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/icono_index-05-1.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pbCareer->setIcon(icon4);
        pbCareer->setIconSize(QSize(60, 60));

        gridLayout_3->addWidget(pbCareer, 1, 0, 1, 1);

        pbTeacher = new QPushButton(gbStudent);
        pbTeacher->setObjectName(QStringLiteral("pbTeacher"));
        pbTeacher->setFont(font4);
        pbTeacher->setStyleSheet(QLatin1String("QPushButton#pbTeacher {\n"
"background-color: rgb(123, 155, 166);\n"
"border-radius: 5px;\n"
" }\n"
"\n"
" QPushButton#pbTeacher:hover {\n"
"background-color: rgb(65, 91, 118);\n"
"color:  rgb(255, 255, 255);\n"
" }"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/Teacher-Icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pbTeacher->setIcon(icon5);
        pbTeacher->setIconSize(QSize(60, 70));

        gridLayout_3->addWidget(pbTeacher, 2, 0, 1, 1);


        gridLayout_5->addWidget(gbStudent, 0, 0, 1, 1);

        gbTeacher = new QGroupBox(tabUser);
        gbTeacher->setObjectName(QStringLiteral("gbTeacher"));
        gbTeacher->setFont(font5);
        gridLayout_4 = new QGridLayout(gbTeacher);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        pbEmail = new QPushButton(gbTeacher);
        pbEmail->setObjectName(QStringLiteral("pbEmail"));
        pbEmail->setMinimumSize(QSize(310, 60));
        pbEmail->setMaximumSize(QSize(310, 60));
        pbEmail->setFont(font4);
        pbEmail->setStyleSheet(QLatin1String("QPushButton#pbEmail {\n"
"background-color: rgb(123, 155, 166);\n"
"border-radius: 5px;\n"
" }\n"
"\n"
" QPushButton#pbEmail:hover {\n"
"background-color: rgb(65, 91, 118);\n"
"color:  rgb(255, 255, 255);\n"
" }"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/emails_stack.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pbEmail->setIcon(icon6);
        pbEmail->setIconSize(QSize(60, 60));

        gridLayout_4->addWidget(pbEmail, 0, 0, 1, 1);


        gridLayout_5->addWidget(gbTeacher, 0, 1, 1, 1);

        tbMain->addTab(tabUser, QString());
        tabBook = new QWidget();
        tabBook->setObjectName(QStringLiteral("tabBook"));
        groupBox = new QGroupBox(tabBook);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 681, 281));
        groupBox->setFont(font5);
        pbAuthor = new QPushButton(groupBox);
        pbAuthor->setObjectName(QStringLiteral("pbAuthor"));
        pbAuthor->setGeometry(QRect(20, 150, 310, 60));
        pbAuthor->setFont(font6);
        pbAuthor->setLayoutDirection(Qt::LeftToRight);
        pbAuthor->setStyleSheet(QLatin1String("QPushButton#pbAuthor {\n"
"background-color: rgb(123, 155, 166);\n"
"border-radius: 5px;\n"
" }\n"
"\n"
" QPushButton#pbAuthor:hover {\n"
"background-color: rgb(65, 91, 118);\n"
"color:  rgb(255, 255, 255);\n"
" }"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/pencil.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pbAuthor->setIcon(icon7);
        pbAuthor->setIconSize(QSize(60, 60));
        pbAuthor->setCheckable(false);
        pbAuthor->setAutoRepeat(false);
        pbBook = new QPushButton(groupBox);
        pbBook->setObjectName(QStringLiteral("pbBook"));
        pbBook->setGeometry(QRect(350, 30, 310, 60));
        pbBook->setFont(font6);
        pbBook->setLayoutDirection(Qt::LeftToRight);
        pbBook->setStyleSheet(QLatin1String("QPushButton#pbBook {\n"
"background-color: rgb(123, 155, 166);\n"
"border-radius: 5px;\n"
" }\n"
"\n"
" QPushButton#pbBook:hover {\n"
"background-color: rgb(65, 91, 118);\n"
"color:  rgb(255, 255, 255);\n"
" }"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/book_add.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pbBook->setIcon(icon8);
        pbBook->setIconSize(QSize(60, 60));
        pbBook->setCheckable(false);
        pbBook->setAutoRepeat(false);
        pbPublisher = new QPushButton(groupBox);
        pbPublisher->setObjectName(QStringLiteral("pbPublisher"));
        pbPublisher->setGeometry(QRect(20, 60, 310, 60));
        pbPublisher->setFont(font6);
        pbPublisher->setLayoutDirection(Qt::LeftToRight);
        pbPublisher->setStyleSheet(QLatin1String("QPushButton#pbPublisher {\n"
"background-color: rgb(123, 155, 166);\n"
"border-radius: 5px;\n"
" }\n"
"\n"
" QPushButton#pbPublisher:hover {\n"
"background-color: rgb(65, 91, 118);\n"
"color:  rgb(255, 255, 255);\n"
" }"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/publisher_bookmark.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pbPublisher->setIcon(icon9);
        pbPublisher->setIconSize(QSize(60, 60));
        pbPublisher->setCheckable(false);
        pbPublisher->setAutoRepeat(false);
        pbSearchBook = new QPushButton(groupBox);
        pbSearchBook->setObjectName(QStringLiteral("pbSearchBook"));
        pbSearchBook->setGeometry(QRect(350, 100, 310, 60));
        pbSearchBook->setFont(font6);
        pbSearchBook->setLayoutDirection(Qt::LeftToRight);
        pbSearchBook->setStyleSheet(QLatin1String("QPushButton#pbSearchBook {\n"
"background-color: rgb(123, 155, 166);\n"
"border-radius: 5px;\n"
" }\n"
"\n"
" QPushButton#pbSearchBook:hover {\n"
"background-color: rgb(65, 91, 118);\n"
"color:  rgb(255, 255, 255);\n"
" }"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/book.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pbSearchBook->setIcon(icon10);
        pbSearchBook->setIconSize(QSize(60, 60));
        pbSearchBook->setCheckable(false);
        pbSearchBook->setAutoRepeat(false);
        pbModifyBook = new QPushButton(groupBox);
        pbModifyBook->setObjectName(QStringLiteral("pbModifyBook"));
        pbModifyBook->setGeometry(QRect(350, 170, 310, 60));
        pbModifyBook->setFont(font6);
        pbModifyBook->setLayoutDirection(Qt::LeftToRight);
        pbModifyBook->setStyleSheet(QLatin1String("QPushButton#pbModifyBook {\n"
"background-color: rgb(123, 155, 166);\n"
"border-radius: 5px;\n"
" }\n"
"\n"
" QPushButton#pbModifyBook:hover {\n"
"background-color: rgb(65, 91, 118);\n"
"color:  rgb(255, 255, 255);\n"
" }"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/book_edit.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pbModifyBook->setIcon(icon11);
        pbModifyBook->setIconSize(QSize(60, 60));
        pbModifyBook->setCheckable(false);
        pbModifyBook->setAutoRepeat(false);
        tbMain->addTab(tabBook, QString());
        tabPrestamos = new QWidget();
        tabPrestamos->setObjectName(QStringLiteral("tabPrestamos"));
        tabPrestamos->setFont(font);
        pbPrestamos = new QPushButton(tabPrestamos);
        pbPrestamos->setObjectName(QStringLiteral("pbPrestamos"));
        pbPrestamos->setGeometry(QRect(30, 110, 291, 81));
        pbPrestamos->setFont(font4);
        pbPrestamos->setStyleSheet(QLatin1String("QPushButton#pbPrestamos {\n"
"background-color: rgb(123, 155, 166);\n"
"border-radius: 5px;\n"
" }\n"
"\n"
" QPushButton#pbPrestamos:hover {\n"
"background-color: rgb(65, 91, 118);\n"
"color:  rgb(255, 255, 255);\n"
" }"));
        pbPrestamos_2 = new QPushButton(tabPrestamos);
        pbPrestamos_2->setObjectName(QStringLiteral("pbPrestamos_2"));
        pbPrestamos_2->setGeometry(QRect(380, 110, 291, 81));
        pbPrestamos_2->setFont(font4);
        pbPrestamos_2->setStyleSheet(QLatin1String("QPushButton#pbPrestamos_2 {\n"
"background-color: rgb(123, 155, 166);\n"
"border-radius: 5px;\n"
" }\n"
"\n"
" QPushButton#pbPrestamos_2:hover {\n"
"background-color: rgb(65, 91, 118);\n"
"color:  rgb(255, 255, 255);\n"
" }"));
        tbMain->addTab(tabPrestamos, QString());

        gridLayout_7->addWidget(tbMain, 0, 0, 1, 2);

        MainMenu->setCentralWidget(centralwidget);

        retranslateUi(MainMenu);
        QObject::connect(pbExit, SIGNAL(clicked()), MainMenu, SLOT(close()));

        tbMain->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainMenu);
    } // setupUi

    void retranslateUi(QMainWindow *MainMenu)
    {
        MainMenu->setWindowTitle(QApplication::translate("MainMenu", "Men\303\272 principal", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        MainMenu->setAccessibleDescription(QApplication::translate("MainMenu", "Presione para salir", nullptr));
#endif // QT_NO_ACCESSIBILITY
        gbButtons->setTitle(QString());
        pbHelp->setText(QString());
#ifndef QT_NO_TOOLTIP
        pbExit->setToolTip(QApplication::translate("MainMenu", "<html><head/><body><p>Presione para salir</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        pbExit->setWhatsThis(QApplication::translate("MainMenu", "Presione para salir", nullptr));
#endif // QT_NO_WHATSTHIS
        pbExit->setText(QString());
#ifndef QT_NO_ACCESSIBILITY
        tbMain->setAccessibleDescription(QApplication::translate("MainMenu", "Presione para salir", nullptr));
#endif // QT_NO_ACCESSIBILITY
        lbTitle->setText(QApplication::translate("MainMenu", "BIENVENIDO AL SISTEMA DE GESTI\303\223N DE LIBRERIAS ", nullptr));
        lbContent->setText(QApplication::translate("MainMenu", "Dentro del sistema podr\303\241s administrar los usuarios, y los libros que est\303\251n dentro\n"
"de la librer\303\255a, as\303\255 como de hacer un control estricto sobre los prestamos que se hagan\n"
"d\303\255a con d\303\255a.", nullptr));
        lbContent2->setText(QApplication::translate("MainMenu", "Si necesitas ayuda puedes contactarnos a nuestro correo o n\303\272mero telefonico\n"
"que puedes encontrarlo en la secci\303\263n de ayuda.", nullptr));
        lbContent3->setText(QApplication::translate("MainMenu", "Esperamos que tengas una experencia satisfactoria.", nullptr));
        lbFirm->setText(QApplication::translate("MainMenu", "Atentamente:\n"
"Diego Ram\303\255rez", nullptr));
        tbMain->setTabText(tbMain->indexOf(tab), QApplication::translate("MainMenu", "Bienvenida", nullptr));
        gbStudent->setTitle(QApplication::translate("MainMenu", "Administraci\303\263n de personal", nullptr));
        pbStudent->setText(QApplication::translate("MainMenu", "    Administrar alumnos", nullptr));
        pbCareer->setText(QApplication::translate("MainMenu", "   Administrar carreras", nullptr));
        pbTeacher->setText(QApplication::translate("MainMenu", "   Administrar maestros", nullptr));
        gbTeacher->setTitle(QApplication::translate("MainMenu", "Contacto", nullptr));
        pbEmail->setText(QApplication::translate("MainMenu", "  Agregar correo", nullptr));
        tbMain->setTabText(tbMain->indexOf(tabUser), QApplication::translate("MainMenu", "Administraci\303\263n de usuarios", nullptr));
        groupBox->setTitle(QApplication::translate("MainMenu", "Administraci\303\263n de libros", nullptr));
        pbAuthor->setText(QApplication::translate("MainMenu", "  Administrar autores", nullptr));
        pbBook->setText(QApplication::translate("MainMenu", "   Agregar libro", nullptr));
        pbPublisher->setText(QApplication::translate("MainMenu", "  Administrar editoriales", nullptr));
        pbSearchBook->setText(QApplication::translate("MainMenu", "   Buscar libros", nullptr));
        pbModifyBook->setText(QApplication::translate("MainMenu", "   Modificar libro", nullptr));
        tbMain->setTabText(tbMain->indexOf(tabBook), QApplication::translate("MainMenu", "Administraci\303\263n de libros", nullptr));
        pbPrestamos->setText(QApplication::translate("MainMenu", "Administrar prestamos", nullptr));
        pbPrestamos_2->setText(QApplication::translate("MainMenu", "Reporte de prestamos", nullptr));
        tbMain->setTabText(tbMain->indexOf(tabPrestamos), QApplication::translate("MainMenu", "Administraci\303\263n de prestamos", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainMenu: public Ui_MainMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINMENU_H
