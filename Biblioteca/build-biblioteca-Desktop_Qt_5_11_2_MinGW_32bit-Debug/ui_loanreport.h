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
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoanReport
{
public:
    QWidget *centralwidget;
    QGroupBox *gbAction;
    QHBoxLayout *horizontalLayout;
    QRadioButton *rbFinished;
    QRadioButton *rbNoFinished;
    QGroupBox *gbMain;
    QVBoxLayout *verticalLayout;
    QTableView *tvQuery;
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QMainWindow *LoanReport)
    {
        if (LoanReport->objectName().isEmpty())
            LoanReport->setObjectName(QStringLiteral("LoanReport"));
        LoanReport->resize(1307, 505);
        LoanReport->setMinimumSize(QSize(1307, 505));
        LoanReport->setMaximumSize(QSize(1307, 505));
        QIcon icon;
        icon.addFile(QStringLiteral(":/book-flat.ico"), QSize(), QIcon::Normal, QIcon::Off);
        LoanReport->setWindowIcon(icon);
        LoanReport->setStyleSheet(QStringLiteral(""));
        centralwidget = new QWidget(LoanReport);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gbAction = new QGroupBox(centralwidget);
        gbAction->setObjectName(QStringLiteral("gbAction"));
        gbAction->setGeometry(QRect(11, 11, 1291, 46));
        gbAction->setStyleSheet(QStringLiteral("background-color: rgb(238, 244, 242);"));
        horizontalLayout = new QHBoxLayout(gbAction);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        rbFinished = new QRadioButton(gbAction);
        rbFinished->setObjectName(QStringLiteral("rbFinished"));
        QFont font;
        font.setFamily(QStringLiteral("Raleway"));
        font.setPointSize(9);
        rbFinished->setFont(font);
        rbFinished->setChecked(false);

        horizontalLayout->addWidget(rbFinished, 0, Qt::AlignHCenter);

        rbNoFinished = new QRadioButton(gbAction);
        rbNoFinished->setObjectName(QStringLiteral("rbNoFinished"));
        rbNoFinished->setFont(font);
        rbNoFinished->setChecked(true);

        horizontalLayout->addWidget(rbNoFinished, 0, Qt::AlignHCenter);

        gbMain = new QGroupBox(centralwidget);
        gbMain->setObjectName(QStringLiteral("gbMain"));
        gbMain->setGeometry(QRect(11, 64, 1291, 431));
        gbMain->setStyleSheet(QStringLiteral("background-color: rgb(238, 244, 242);"));
        verticalLayout = new QVBoxLayout(gbMain);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tvQuery = new QTableView(gbMain);
        tvQuery->setObjectName(QStringLiteral("tvQuery"));
        tvQuery->setFont(font);

        verticalLayout->addWidget(tvQuery);

        pushButton = new QPushButton(gbMain);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton, 0, Qt::AlignHCenter);

        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(-6, -15, 1321, 521));
        label->setStyleSheet(QLatin1String("background-color: rgb(65, 91, 118);\n"
""));
        LoanReport->setCentralWidget(centralwidget);
        label->raise();
        gbAction->raise();
        gbMain->raise();

        retranslateUi(LoanReport);

        QMetaObject::connectSlotsByName(LoanReport);
    } // setupUi

    void retranslateUi(QMainWindow *LoanReport)
    {
        LoanReport->setWindowTitle(QApplication::translate("LoanReport", "Reporte de prestamos", nullptr));
        gbAction->setTitle(QString());
        rbFinished->setText(QApplication::translate("LoanReport", "Prestamos vencidos", nullptr));
        rbNoFinished->setText(QApplication::translate("LoanReport", "Prestamos no vencidos", nullptr));
        gbMain->setTitle(QString());
        pushButton->setText(QApplication::translate("LoanReport", "IMPRIMIR", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LoanReport: public Ui_LoanReport {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOANREPORT_H
