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
    QGroupBox *gbButtons;
    QHBoxLayout *horizontalLayout;
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
    QGroupBox *gbTeacher;
    QGridLayout *gridLayout_4;
    QPushButton *pbTeacher;
    QWidget *tabBook;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QPushButton *pbPublisher;
    QPushButton *pbBook;
    QPushButton *pbAuthor;
    QPushButton *pbSearchBook;
    QPushButton *pbModifyBook;
    QWidget *tabPrestamos;
    QGridLayout *gridLayout_7;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_6;
    QPushButton *pbPrestamos;
    QPushButton *pbPrestamos_2;
    QPushButton *pbPrestamos_3;
    QLabel *label;

    void setupUi(QMainWindow *MainMenu)
    {
        if (MainMenu->objectName().isEmpty())
            MainMenu->setObjectName(QStringLiteral("MainMenu"));
        MainMenu->resize(890, 420);
        MainMenu->setMinimumSize(QSize(890, 420));
        MainMenu->setMaximumSize(QSize(890, 420));
        QFont font;
        font.setFamily(QStringLiteral("Raleway"));
        MainMenu->setFont(font);
        QIcon icon;
        icon.addFile(QStringLiteral(":/book-flat.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainMenu->setWindowIcon(icon);
        MainMenu->setStyleSheet(QStringLiteral(""));
        centralwidget = new QWidget(MainMenu);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gbButtons = new QGroupBox(centralwidget);
        gbButtons->setObjectName(QStringLiteral("gbButtons"));
        gbButtons->setGeometry(QRect(11, 330, 871, 74));
        gbButtons->setStyleSheet(QStringLiteral("background-color: rgb(238, 244, 242);"));
        horizontalLayout = new QHBoxLayout(gbButtons);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
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
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/door_out.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pbExit->setIcon(icon1);
        pbExit->setIconSize(QSize(50, 50));

        horizontalLayout->addWidget(pbExit, 0, Qt::AlignRight);

        tbMain = new QTabWidget(centralwidget);
        tbMain->setObjectName(QStringLiteral("tbMain"));
        tbMain->setGeometry(QRect(11, 11, 871, 311));
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
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/user_student.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pbStudent->setIcon(icon2);
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
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icono_index-05-1.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pbCareer->setIcon(icon3);
        pbCareer->setIconSize(QSize(60, 60));

        gridLayout_3->addWidget(pbCareer, 1, 0, 1, 1);


        gridLayout_5->addWidget(gbStudent, 0, 0, 1, 1);

        gbTeacher = new QGroupBox(tabUser);
        gbTeacher->setObjectName(QStringLiteral("gbTeacher"));
        gbTeacher->setFont(font5);
        gridLayout_4 = new QGridLayout(gbTeacher);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        pbTeacher = new QPushButton(gbTeacher);
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
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/Teacher-Icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pbTeacher->setIcon(icon4);
        pbTeacher->setIconSize(QSize(60, 70));

        gridLayout_4->addWidget(pbTeacher, 0, 0, 1, 1);


        gridLayout_5->addWidget(gbTeacher, 0, 1, 1, 1);

        tbMain->addTab(tabUser, QString());
        tabBook = new QWidget();
        tabBook->setObjectName(QStringLiteral("tabBook"));
        groupBox = new QGroupBox(tabBook);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 851, 261));
        groupBox->setFont(font5);
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pbPublisher = new QPushButton(groupBox);
        pbPublisher->setObjectName(QStringLiteral("pbPublisher"));
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
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/publisher_bookmark.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pbPublisher->setIcon(icon5);
        pbPublisher->setIconSize(QSize(60, 60));
        pbPublisher->setCheckable(false);
        pbPublisher->setAutoRepeat(false);

        gridLayout->addWidget(pbPublisher, 0, 0, 2, 1);

        pbBook = new QPushButton(groupBox);
        pbBook->setObjectName(QStringLiteral("pbBook"));
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
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/book_add.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pbBook->setIcon(icon6);
        pbBook->setIconSize(QSize(60, 60));
        pbBook->setCheckable(false);
        pbBook->setAutoRepeat(false);

        gridLayout->addWidget(pbBook, 0, 1, 1, 1);

        pbAuthor = new QPushButton(groupBox);
        pbAuthor->setObjectName(QStringLiteral("pbAuthor"));
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

        gridLayout->addWidget(pbAuthor, 2, 0, 2, 1);

        pbSearchBook = new QPushButton(groupBox);
        pbSearchBook->setObjectName(QStringLiteral("pbSearchBook"));
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
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/book.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pbSearchBook->setIcon(icon8);
        pbSearchBook->setIconSize(QSize(60, 60));
        pbSearchBook->setCheckable(false);
        pbSearchBook->setAutoRepeat(false);

        gridLayout->addWidget(pbSearchBook, 1, 1, 2, 1);

        pbModifyBook = new QPushButton(groupBox);
        pbModifyBook->setObjectName(QStringLiteral("pbModifyBook"));
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
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/book_edit.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pbModifyBook->setIcon(icon9);
        pbModifyBook->setIconSize(QSize(60, 60));
        pbModifyBook->setCheckable(false);
        pbModifyBook->setAutoRepeat(false);

        gridLayout->addWidget(pbModifyBook, 3, 1, 1, 1);

        tbMain->addTab(tabBook, QString());
        tabPrestamos = new QWidget();
        tabPrestamos->setObjectName(QStringLiteral("tabPrestamos"));
        tabPrestamos->setFont(font);
        gridLayout_7 = new QGridLayout(tabPrestamos);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        groupBox_2 = new QGroupBox(tabPrestamos);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setFont(font3);
        gridLayout_6 = new QGridLayout(groupBox_2);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        pbPrestamos = new QPushButton(groupBox_2);
        pbPrestamos->setObjectName(QStringLiteral("pbPrestamos"));
        pbPrestamos->setMinimumSize(QSize(0, 60));
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

        gridLayout_6->addWidget(pbPrestamos, 0, 0, 2, 1);

        pbPrestamos_2 = new QPushButton(groupBox_2);
        pbPrestamos_2->setObjectName(QStringLiteral("pbPrestamos_2"));
        pbPrestamos_2->setMinimumSize(QSize(0, 60));
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

        gridLayout_6->addWidget(pbPrestamos_2, 0, 1, 1, 1);

        pbPrestamos_3 = new QPushButton(groupBox_2);
        pbPrestamos_3->setObjectName(QStringLiteral("pbPrestamos_3"));
        pbPrestamos_3->setMinimumSize(QSize(0, 60));
        pbPrestamos_3->setFont(font4);
        pbPrestamos_3->setStyleSheet(QLatin1String("QPushButton#pbPrestamos_3 {\n"
"background-color: rgb(123, 155, 166);\n"
"border-radius: 5px;\n"
" }\n"
"\n"
" QPushButton#pbPrestamos_3:hover {\n"
"background-color: rgb(65, 91, 118);\n"
"color:  rgb(255, 255, 255);\n"
" }"));

        gridLayout_6->addWidget(pbPrestamos_3, 1, 1, 1, 1);


        gridLayout_7->addWidget(groupBox_2, 0, 0, 1, 1);

        tbMain->addTab(tabPrestamos, QString());
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(-36, -35, 931, 471));
        label->setStyleSheet(QLatin1String("background-color: rgb(65, 91, 118);\n"
""));
        MainMenu->setCentralWidget(centralwidget);
        label->raise();
        gbButtons->raise();
        tbMain->raise();

        retranslateUi(MainMenu);
        QObject::connect(pbExit, SIGNAL(clicked()), MainMenu, SLOT(close()));

        tbMain->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainMenu);
    } // setupUi

    void retranslateUi(QMainWindow *MainMenu)
    {
        MainMenu->setWindowTitle(QApplication::translate("MainMenu", "Men\303\272 principal", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        MainMenu->setAccessibleDescription(QApplication::translate("MainMenu", "Presione para salir", nullptr));
#endif // QT_NO_ACCESSIBILITY
        gbButtons->setTitle(QString());
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
        gbStudent->setTitle(QApplication::translate("MainMenu", "Administraci\303\263n de estudiantes", nullptr));
        pbStudent->setText(QApplication::translate("MainMenu", "    Administrar alumnos", nullptr));
        pbCareer->setText(QApplication::translate("MainMenu", "   Administrar carreras", nullptr));
        gbTeacher->setTitle(QApplication::translate("MainMenu", "Administraci\303\263n de estudiantes", nullptr));
        pbTeacher->setText(QApplication::translate("MainMenu", "   Administrar maestros", nullptr));
        tbMain->setTabText(tbMain->indexOf(tabUser), QApplication::translate("MainMenu", "Administraci\303\263n de usuarios", nullptr));
        groupBox->setTitle(QApplication::translate("MainMenu", "Administraci\303\263n de libros", nullptr));
        pbPublisher->setText(QApplication::translate("MainMenu", "  Administrar editoriales", nullptr));
        pbBook->setText(QApplication::translate("MainMenu", "   Agregar libro", nullptr));
        pbAuthor->setText(QApplication::translate("MainMenu", "  Administrar autores", nullptr));
        pbSearchBook->setText(QApplication::translate("MainMenu", "   Buscar libros", nullptr));
        pbModifyBook->setText(QApplication::translate("MainMenu", "   Modificar libro", nullptr));
        tbMain->setTabText(tbMain->indexOf(tabBook), QApplication::translate("MainMenu", "Administraci\303\263n de libros", nullptr));
        groupBox_2->setTitle(QApplication::translate("MainMenu", "Opciones de prestamos", nullptr));
        pbPrestamos->setText(QApplication::translate("MainMenu", "A\303\261adir un pr\303\251stamo", nullptr));
        pbPrestamos_2->setText(QApplication::translate("MainMenu", "Reporte de pr\303\251stamos", nullptr));
        pbPrestamos_3->setText(QApplication::translate("MainMenu", "Devolver pr\303\251stamos", nullptr));
        tbMain->setTabText(tbMain->indexOf(tabPrestamos), QApplication::translate("MainMenu", "Administraci\303\263n de pr\303\251stamos", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainMenu: public Ui_MainMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINMENU_H
