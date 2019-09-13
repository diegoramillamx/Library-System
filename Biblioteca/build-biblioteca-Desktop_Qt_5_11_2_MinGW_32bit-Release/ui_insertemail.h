/********************************************************************************
** Form generated from reading UI file 'insertemail.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSERTEMAIL_H
#define UI_INSERTEMAIL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InsertEmail
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;

    void setupUi(QMainWindow *InsertEmail)
    {
        if (InsertEmail->objectName().isEmpty())
            InsertEmail->setObjectName(QStringLiteral("InsertEmail"));
        InsertEmail->resize(489, 285);
        centralwidget = new QWidget(InsertEmail);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(40, 60, 93, 28));
        InsertEmail->setCentralWidget(centralwidget);

        retranslateUi(InsertEmail);

        QMetaObject::connectSlotsByName(InsertEmail);
    } // setupUi

    void retranslateUi(QMainWindow *InsertEmail)
    {
        InsertEmail->setWindowTitle(QApplication::translate("InsertEmail", "MainWindow", nullptr));
        pushButton->setText(QApplication::translate("InsertEmail", "Email", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InsertEmail: public Ui_InsertEmail {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSERTEMAIL_H
