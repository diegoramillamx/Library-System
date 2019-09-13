/********************************************************************************
** Form generated from reading UI file 'searchbook.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHBOOK_H
#define UI_SEARCHBOOK_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SearchBook
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QLabel *lbSearch;
    QLineEdit *lneSearch;
    QComboBox *cboCritery;
    QLabel *lbTitle;
    QTableView *tvQuery;

    void setupUi(QMainWindow *SearchBook)
    {
        if (SearchBook->objectName().isEmpty())
            SearchBook->setObjectName(QStringLiteral("SearchBook"));
        SearchBook->resize(1203, 515);
        SearchBook->setMinimumSize(QSize(1203, 515));
        SearchBook->setMaximumSize(QSize(1203, 515));
        QIcon icon;
        icon.addFile(QStringLiteral(":/book-flat.ico"), QSize(), QIcon::Normal, QIcon::Off);
        SearchBook->setWindowIcon(icon);
        SearchBook->setStyleSheet(QLatin1String("background-color: rgb(65, 91, 118);\n"
""));
        centralwidget = new QWidget(SearchBook);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setStyleSheet(QStringLiteral("background-color: rgb(238, 244, 242); color: rgb(35, 54, 86);"));
        lbSearch = new QLabel(groupBox);
        lbSearch->setObjectName(QStringLiteral("lbSearch"));
        lbSearch->setGeometry(QRect(10, 62, 61, 16));
        QFont font;
        font.setFamily(QStringLiteral("Raleway"));
        font.setBold(true);
        font.setWeight(75);
        lbSearch->setFont(font);
        lneSearch = new QLineEdit(groupBox);
        lneSearch->setObjectName(QStringLiteral("lneSearch"));
        lneSearch->setGeometry(QRect(80, 60, 741, 22));
        QFont font1;
        font1.setFamily(QStringLiteral("Raleway"));
        lneSearch->setFont(font1);
        lneSearch->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        cboCritery = new QComboBox(groupBox);
        cboCritery->setObjectName(QStringLiteral("cboCritery"));
        cboCritery->setGeometry(QRect(830, 60, 341, 22));
        cboCritery->setFont(font1);
        lbTitle = new QLabel(groupBox);
        lbTitle->setObjectName(QStringLiteral("lbTitle"));
        lbTitle->setGeometry(QRect(530, 20, 191, 20));
        lbTitle->setMaximumSize(QSize(16777215, 20));
        QFont font2;
        font2.setFamily(QStringLiteral("Raleway"));
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        lbTitle->setFont(font2);
        lbTitle->setStyleSheet(QStringLiteral("color: rgb(35, 54, 86);"));
        tvQuery = new QTableView(groupBox);
        tvQuery->setObjectName(QStringLiteral("tvQuery"));
        tvQuery->setGeometry(QRect(10, 110, 1161, 371));
        QFont font3;
        font3.setFamily(QStringLiteral("Raleway"));
        font3.setPointSize(8);
        font3.setBold(true);
        font3.setWeight(75);
        tvQuery->setFont(font3);

        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        SearchBook->setCentralWidget(centralwidget);

        retranslateUi(SearchBook);

        QMetaObject::connectSlotsByName(SearchBook);
    } // setupUi

    void retranslateUi(QMainWindow *SearchBook)
    {
        SearchBook->setWindowTitle(QApplication::translate("SearchBook", "B\303\272squeda de libros", nullptr));
        groupBox->setTitle(QString());
        lbSearch->setText(QApplication::translate("SearchBook", "Busqueda:", nullptr));
        lbTitle->setText(QApplication::translate("SearchBook", "Busqueda de libros", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SearchBook: public Ui_SearchBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHBOOK_H
