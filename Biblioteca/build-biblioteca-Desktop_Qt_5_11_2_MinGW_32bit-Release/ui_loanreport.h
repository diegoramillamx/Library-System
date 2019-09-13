/********************************************************************************
** Form generated from reading UI file 'loanreport.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOANREPORT_H
#define UI_LOANREPORT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoanReport
{
public:
    QWidget *centralwidget;
    QGroupBox *gbMain;
    QTableView *tvQuery;
    QPushButton *pushButton;
    QGroupBox *gbAction;
    QHBoxLayout *horizontalLayout;
    QRadioButton *rbFinished;
    QRadioButton *rbNoFinished;

    void setupUi(QMainWindow *LoanReport)
    {
        if (LoanReport->objectName().isEmpty())
            LoanReport->setObjectName(QStringLiteral("LoanReport"));
        LoanReport->resize(1307, 545);
        QIcon icon;
        icon.addFile(QStringLiteral(":/book-flat.ico"), QSize(), QIcon::Normal, QIcon::Off);
        LoanReport->setWindowIcon(icon);
        LoanReport->setStyleSheet(QLatin1String("background-color: rgb(65, 91, 118);\n"
""));
        centralwidget = new QWidget(LoanReport);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gbMain = new QGroupBox(centralwidget);
        gbMain->setObjectName(QStringLiteral("gbMain"));
        gbMain->setGeometry(QRect(10, 100, 1291, 431));
        gbMain->setStyleSheet(QStringLiteral("background-color: rgb(238, 244, 242);"));
        tvQuery = new QTableView(gbMain);
        tvQuery->setObjectName(QStringLiteral("tvQuery"));
        tvQuery->setGeometry(QRect(10, 10, 1271, 351));
        QFont font;
        font.setFamily(QStringLiteral("Raleway"));
        font.setPointSize(9);
        tvQuery->setFont(font);
        pushButton = new QPushButton(gbMain);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(550, 370, 191, 41));
        gbAction = new QGroupBox(centralwidget);
        gbAction->setObjectName(QStringLiteral("gbAction"));
        gbAction->setGeometry(QRect(10, 10, 1291, 81));
        gbAction->setStyleSheet(QStringLiteral("background-color: rgb(238, 244, 242);"));
        horizontalLayout = new QHBoxLayout(gbAction);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        rbFinished = new QRadioButton(gbAction);
        rbFinished->setObjectName(QStringLiteral("rbFinished"));
        rbFinished->setFont(font);
        rbFinished->setChecked(true);

        horizontalLayout->addWidget(rbFinished, 0, Qt::AlignHCenter);

        rbNoFinished = new QRadioButton(gbAction);
        rbNoFinished->setObjectName(QStringLiteral("rbNoFinished"));
        rbNoFinished->setFont(font);

        horizontalLayout->addWidget(rbNoFinished, 0, Qt::AlignHCenter);

        LoanReport->setCentralWidget(centralwidget);

        retranslateUi(LoanReport);

        QMetaObject::connectSlotsByName(LoanReport);
    } // setupUi

    void retranslateUi(QMainWindow *LoanReport)
    {
        LoanReport->setWindowTitle(QApplication::translate("LoanReport", "Reporte de prestamos", nullptr));
        gbMain->setTitle(QString());
        pushButton->setText(QApplication::translate("LoanReport", "IMPRIMIR", nullptr));
        gbAction->setTitle(QString());
        rbFinished->setText(QApplication::translate("LoanReport", "Prestamos vencidos", nullptr));
        rbNoFinished->setText(QApplication::translate("LoanReport", "Prestamos no vencidos", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoanReport: public Ui_LoanReport {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOANREPORT_H
