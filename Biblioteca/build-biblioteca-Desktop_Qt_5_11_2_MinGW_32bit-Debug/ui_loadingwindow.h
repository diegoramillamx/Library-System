/********************************************************************************
** Form generated from reading UI file 'loadingwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOADINGWINDOW_H
#define UI_LOADINGWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoadingWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QProgressBar *pbLoading;
    QLabel *label_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LoadingWindow)
    {
        if (LoadingWindow->objectName().isEmpty())
            LoadingWindow->setObjectName(QStringLiteral("LoadingWindow"));
        LoadingWindow->resize(746, 519);
        QFont font;
        font.setFamily(QStringLiteral("Raleway"));
        LoadingWindow->setFont(font);
        QIcon icon;
        icon.addFile(QStringLiteral(":/book-flat.ico"), QSize(), QIcon::Normal, QIcon::Off);
        LoadingWindow->setWindowIcon(icon);
        LoadingWindow->setStyleSheet(QStringLiteral("background-color: rgb(65, 91, 118);"));
        centralwidget = new QWidget(LoadingWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setStyleSheet(QLatin1String("background-color: rgb(238, 244, 242);\n"
""));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QStringLiteral("border-radius: 5px;"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/Libro-abierto-578889.jpg")));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        pbLoading = new QProgressBar(groupBox);
        pbLoading->setObjectName(QStringLiteral("pbLoading"));
        QFont font1;
        font1.setFamily(QStringLiteral("Raleway"));
        font1.setBold(true);
        font1.setWeight(75);
        pbLoading->setFont(font1);
        pbLoading->setValue(0);

        gridLayout->addWidget(pbLoading, 2, 0, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font2;
        font2.setFamily(QStringLiteral("Raleway"));
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setWeight(75);
        label_2->setFont(font2);
        label_2->setStyleSheet(QStringLiteral("color: rgb(35, 54, 86);"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1, Qt::AlignHCenter);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);

        LoadingWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(LoadingWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        LoadingWindow->setStatusBar(statusbar);

        retranslateUi(LoadingWindow);

        QMetaObject::connectSlotsByName(LoadingWindow);
    } // setupUi

    void retranslateUi(QMainWindow *LoadingWindow)
    {
        LoadingWindow->setWindowTitle(QApplication::translate("LoadingWindow", "Sistema para la admistraci\303\263n de la biblioteca escolar", nullptr));
        groupBox->setTitle(QString());
        label->setText(QString());
        label_2->setText(QApplication::translate("LoadingWindow", "SISTEMA DE ADMINISTRACI\303\223N DE LIBRERIAS ESCOLARES v1.4", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoadingWindow: public Ui_LoadingWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOADINGWINDOW_H
