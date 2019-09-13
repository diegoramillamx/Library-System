/********************************************************************************
** Form generated from reading UI file 'loginbiblioteca.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINBIBLIOTECA_H
#define UI_LOGINBIBLIOTECA_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginBiblioteca
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QGroupBox *gbPrimary;
    QLabel *lblTitulo;
    QLabel *lblUsuario;
    QLineEdit *leUsuario;
    QLabel *lblPassword;
    QLineEdit *lePassword;
    QPushButton *psbEntrar;
    QPushButton *psbSalir;

    void setupUi(QMainWindow *LoginBiblioteca)
    {
        if (LoginBiblioteca->objectName().isEmpty())
            LoginBiblioteca->setObjectName(QStringLiteral("LoginBiblioteca"));
        LoginBiblioteca->resize(412, 300);
        LoginBiblioteca->setMinimumSize(QSize(412, 300));
        LoginBiblioteca->setMaximumSize(QSize(412, 300));
        QFont font;
        font.setFamily(QStringLiteral("Raleway"));
        LoginBiblioteca->setFont(font);
        QIcon icon;
        icon.addFile(QStringLiteral(":/book-flat.ico"), QSize(), QIcon::Normal, QIcon::Off);
        LoginBiblioteca->setWindowIcon(icon);
        LoginBiblioteca->setStyleSheet(QStringLiteral("background-color: rgb(65, 91, 118);"));
        centralWidget = new QWidget(LoginBiblioteca);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gbPrimary = new QGroupBox(centralWidget);
        gbPrimary->setObjectName(QStringLiteral("gbPrimary"));
        gbPrimary->setStyleSheet(QStringLiteral("background-color: rgb(238, 244, 242);border-radius: 5px;"));
        lblTitulo = new QLabel(gbPrimary);
        lblTitulo->setObjectName(QStringLiteral("lblTitulo"));
        lblTitulo->setGeometry(QRect(22, 20, 351, 21));
        QFont font1;
        font1.setFamily(QStringLiteral("Raleway"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        lblTitulo->setFont(font1);
        lblTitulo->setStyleSheet(QStringLiteral("color: rgb(35, 54, 86);"));
        lblUsuario = new QLabel(gbPrimary);
        lblUsuario->setObjectName(QStringLiteral("lblUsuario"));
        lblUsuario->setGeometry(QRect(167, 70, 55, 18));
        QFont font2;
        font2.setFamily(QStringLiteral("Raleway"));
        font2.setPointSize(9);
        font2.setBold(true);
        font2.setWeight(75);
        lblUsuario->setFont(font2);
        lblUsuario->setStyleSheet(QStringLiteral("color: rgb(35, 54, 86);"));
        leUsuario = new QLineEdit(gbPrimary);
        leUsuario->setObjectName(QStringLiteral("leUsuario"));
        leUsuario->setGeometry(QRect(120, 90, 150, 23));
        QFont font3;
        font3.setFamily(QStringLiteral("Raleway"));
        font3.setPointSize(10);
        leUsuario->setFont(font3);
        leUsuario->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        leUsuario->setMaxLength(16);
        leUsuario->setAlignment(Qt::AlignCenter);
        lblPassword = new QLabel(gbPrimary);
        lblPassword->setObjectName(QStringLiteral("lblPassword"));
        lblPassword->setGeometry(QRect(153, 120, 83, 18));
        lblPassword->setFont(font2);
        lblPassword->setStyleSheet(QStringLiteral("color: rgb(35, 54, 86);"));
        lePassword = new QLineEdit(gbPrimary);
        lePassword->setObjectName(QStringLiteral("lePassword"));
        lePassword->setGeometry(QRect(120, 140, 150, 23));
        lePassword->setFont(font3);
        lePassword->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border-color: rgb(0, 0, 0);"));
        lePassword->setMaxLength(16);
        lePassword->setEchoMode(QLineEdit::Password);
        lePassword->setAlignment(Qt::AlignCenter);
        psbEntrar = new QPushButton(gbPrimary);
        psbEntrar->setObjectName(QStringLiteral("psbEntrar"));
        psbEntrar->setGeometry(QRect(30, 200, 161, 31));
        QPalette palette;
        QBrush brush(QColor(123, 155, 166, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        psbEntrar->setPalette(palette);
        QFont font4;
        font4.setFamily(QStringLiteral("Raleway"));
        font4.setPointSize(10);
        font4.setBold(true);
        font4.setWeight(75);
        psbEntrar->setFont(font4);
        psbEntrar->setStyleSheet(QLatin1String("QPushButton#psbEntrar {\n"
"background-color: rgb(123, 155, 166);\n"
"border-radius: 5px;\n"
" }\n"
"\n"
" QPushButton#psbEntrar:hover {\n"
"background-color: rgb(65, 91, 118);\n"
"color:  rgb(255, 255, 255);\n"
" }"));
        psbSalir = new QPushButton(gbPrimary);
        psbSalir->setObjectName(QStringLiteral("psbSalir"));
        psbSalir->setGeometry(QRect(200, 200, 161, 31));
        psbSalir->setFont(font4);
        psbSalir->setStyleSheet(QLatin1String("QPushButton#psbSalir {\n"
"background-color: rgb(123, 155, 166);\n"
"border-radius: 5px;\n"
" }\n"
"\n"
" QPushButton#psbSalir:hover {\n"
"background-color: rgb(65, 91, 118);\n"
"color:  rgb(255, 255, 255);\n"
" }"));

        gridLayout_2->addWidget(gbPrimary, 0, 0, 1, 1);

        LoginBiblioteca->setCentralWidget(centralWidget);

        retranslateUi(LoginBiblioteca);
        QObject::connect(psbSalir, SIGNAL(clicked()), LoginBiblioteca, SLOT(close()));

        QMetaObject::connectSlotsByName(LoginBiblioteca);
    } // setupUi

    void retranslateUi(QMainWindow *LoginBiblioteca)
    {
        LoginBiblioteca->setWindowTitle(QApplication::translate("LoginBiblioteca", "Acceso al sistema", nullptr));
        gbPrimary->setTitle(QString());
        lblTitulo->setText(QApplication::translate("LoginBiblioteca", "ACCESO AL SISTEMA BIBLIOTECARIO", nullptr));
        lblUsuario->setText(QApplication::translate("LoginBiblioteca", "Usuario", nullptr));
        leUsuario->setText(QString());
        lblPassword->setText(QApplication::translate("LoginBiblioteca", "Contrase\303\261a", nullptr));
        lePassword->setText(QString());
        psbEntrar->setText(QApplication::translate("LoginBiblioteca", "Entrar", nullptr));
        psbSalir->setText(QApplication::translate("LoginBiblioteca", "Salir", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginBiblioteca: public Ui_LoginBiblioteca {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINBIBLIOTECA_H
