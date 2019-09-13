/********************************************************************************
** Form generated from reading UI file 'crudauthor.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CRUDAUTHOR_H
#define UI_CRUDAUTHOR_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CrudAuthor
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tbInsert;
    QLabel *lbIdAuthor;
    QLabel *lbAuthor;
    QLabel *lbTitle;
    QLineEdit *lneIdAuthor;
    QLineEdit *lneFirstName;
    QPushButton *pbInsert;
    QPushButton *pbExit;
    QLabel *lbAuthor_2;
    QLineEdit *lneFatherLastName;
    QLabel *lbAuthor_3;
    QLineEdit *lneMotherLastName;
    QWidget *tbQuery;
    QLabel *lbSearch;
    QLineEdit *lneCritery;
    QComboBox *cboCritery;
    QTableView *tvQuery;
    QWidget *tbUpdate;
    QGroupBox *gbIdCareer;
    QLineEdit *lneIdAuthorQuery;
    QLabel *lbIdAuthorQuery;
    QPushButton *pbSearch;
    QGroupBox *gbAuthor;
    QPushButton *pbExit2;
    QPushButton *pbUpdate;
    QLabel *lbAuthor_6;
    QLineEdit *lneFatherLastNameUpdate;
    QLineEdit *lneMotherLastNameUpdate;
    QLabel *lbAuthorUpdate;
    QLabel *lbAuthor_4;
    QLineEdit *lneFirstNameUpdate;

    void setupUi(QMainWindow *CrudAuthor)
    {
        if (CrudAuthor->objectName().isEmpty())
            CrudAuthor->setObjectName(QStringLiteral("CrudAuthor"));
        CrudAuthor->resize(671, 294);
        CrudAuthor->setMinimumSize(QSize(671, 294));
        CrudAuthor->setMaximumSize(QSize(671, 294));
        QIcon icon;
        icon.addFile(QStringLiteral(":/book-flat.ico"), QSize(), QIcon::Normal, QIcon::Off);
        CrudAuthor->setWindowIcon(icon);
        CrudAuthor->setStyleSheet(QLatin1String("background-color: rgb(65, 91, 118);\n"
""));
        centralwidget = new QWidget(CrudAuthor);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 20, 651, 261));
        QFont font;
        font.setFamily(QStringLiteral("Raleway"));
        font.setPointSize(9);
        tabWidget->setFont(font);
        tabWidget->setStyleSheet(QStringLiteral("background-color: rgb(238, 244, 242); color: rgb(35, 54, 86);"));
        tbInsert = new QWidget();
        tbInsert->setObjectName(QStringLiteral("tbInsert"));
        lbIdAuthor = new QLabel(tbInsert);
        lbIdAuthor->setObjectName(QStringLiteral("lbIdAuthor"));
        lbIdAuthor->setGeometry(QRect(20, 62, 71, 16));
        QFont font1;
        font1.setFamily(QStringLiteral("Raleway"));
        font1.setBold(true);
        font1.setWeight(75);
        lbIdAuthor->setFont(font1);
        lbAuthor = new QLabel(tbInsert);
        lbAuthor->setObjectName(QStringLiteral("lbAuthor"));
        lbAuthor->setGeometry(QRect(20, 92, 55, 16));
        lbAuthor->setFont(font1);
        lbTitle = new QLabel(tbInsert);
        lbTitle->setObjectName(QStringLiteral("lbTitle"));
        lbTitle->setGeometry(QRect(190, 10, 261, 20));
        lbTitle->setMaximumSize(QSize(16777215, 20));
        QFont font2;
        font2.setFamily(QStringLiteral("Raleway"));
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        lbTitle->setFont(font2);
        lbTitle->setStyleSheet(QStringLiteral("color: rgb(35, 54, 86);"));
        lneIdAuthor = new QLineEdit(tbInsert);
        lneIdAuthor->setObjectName(QStringLiteral("lneIdAuthor"));
        lneIdAuthor->setEnabled(false);
        lneIdAuthor->setGeometry(QRect(100, 60, 91, 22));
        QFont font3;
        font3.setFamily(QStringLiteral("Raleway"));
        lneIdAuthor->setFont(font3);
        lneIdAuthor->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lneFirstName = new QLineEdit(tbInsert);
        lneFirstName->setObjectName(QStringLiteral("lneFirstName"));
        lneFirstName->setGeometry(QRect(100, 90, 201, 22));
        lneFirstName->setFont(font3);
        lneFirstName->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        pbInsert = new QPushButton(tbInsert);
        pbInsert->setObjectName(QStringLiteral("pbInsert"));
        pbInsert->setGeometry(QRect(340, 60, 291, 61));
        pbInsert->setFont(font1);
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
        pbExit = new QPushButton(tbInsert);
        pbExit->setObjectName(QStringLiteral("pbExit"));
        pbExit->setGeometry(QRect(340, 130, 291, 61));
        pbExit->setFont(font1);
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
        lbAuthor_2 = new QLabel(tbInsert);
        lbAuthor_2->setObjectName(QStringLiteral("lbAuthor_2"));
        lbAuthor_2->setGeometry(QRect(19, 120, 71, 20));
        lbAuthor_2->setFont(font1);
        lneFatherLastName = new QLineEdit(tbInsert);
        lneFatherLastName->setObjectName(QStringLiteral("lneFatherLastName"));
        lneFatherLastName->setGeometry(QRect(100, 118, 201, 22));
        lneFatherLastName->setFont(font3);
        lneFatherLastName->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lbAuthor_3 = new QLabel(tbInsert);
        lbAuthor_3->setObjectName(QStringLiteral("lbAuthor_3"));
        lbAuthor_3->setGeometry(QRect(20, 150, 81, 20));
        lbAuthor_3->setFont(font1);
        lneMotherLastName = new QLineEdit(tbInsert);
        lneMotherLastName->setObjectName(QStringLiteral("lneMotherLastName"));
        lneMotherLastName->setGeometry(QRect(100, 150, 201, 22));
        lneMotherLastName->setFont(font3);
        lneMotherLastName->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        tabWidget->addTab(tbInsert, QString());
        tbQuery = new QWidget();
        tbQuery->setObjectName(QStringLiteral("tbQuery"));
        lbSearch = new QLabel(tbQuery);
        lbSearch->setObjectName(QStringLiteral("lbSearch"));
        lbSearch->setGeometry(QRect(10, 14, 81, 16));
        QFont font4;
        font4.setFamily(QStringLiteral("Raleway"));
        font4.setPointSize(9);
        font4.setBold(true);
        font4.setWeight(75);
        lbSearch->setFont(font4);
        lneCritery = new QLineEdit(tbQuery);
        lneCritery->setObjectName(QStringLiteral("lneCritery"));
        lneCritery->setGeometry(QRect(93, 12, 321, 22));
        lneCritery->setFont(font);
        lneCritery->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        cboCritery = new QComboBox(tbQuery);
        cboCritery->setObjectName(QStringLiteral("cboCritery"));
        cboCritery->setGeometry(QRect(430, 12, 201, 22));
        cboCritery->setFont(font3);
        cboCritery->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        tvQuery = new QTableView(tbQuery);
        tvQuery->setObjectName(QStringLiteral("tvQuery"));
        tvQuery->setGeometry(QRect(10, 50, 621, 171));
        tabWidget->addTab(tbQuery, QString());
        tbUpdate = new QWidget();
        tbUpdate->setObjectName(QStringLiteral("tbUpdate"));
        gbIdCareer = new QGroupBox(tbUpdate);
        gbIdCareer->setObjectName(QStringLiteral("gbIdCareer"));
        gbIdCareer->setGeometry(QRect(10, 10, 381, 51));
        lneIdAuthorQuery = new QLineEdit(gbIdCareer);
        lneIdAuthorQuery->setObjectName(QStringLiteral("lneIdAuthorQuery"));
        lneIdAuthorQuery->setGeometry(QRect(77, 13, 151, 22));
        lneIdAuthorQuery->setFont(font3);
        lneIdAuthorQuery->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lbIdAuthorQuery = new QLabel(gbIdCareer);
        lbIdAuthorQuery->setObjectName(QStringLiteral("lbIdAuthorQuery"));
        lbIdAuthorQuery->setGeometry(QRect(8, 15, 61, 16));
        lbIdAuthorQuery->setFont(font1);
        pbSearch = new QPushButton(gbIdCareer);
        pbSearch->setObjectName(QStringLiteral("pbSearch"));
        pbSearch->setGeometry(QRect(240, 10, 121, 28));
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
        gbAuthor = new QGroupBox(tbUpdate);
        gbAuthor->setObjectName(QStringLiteral("gbAuthor"));
        gbAuthor->setEnabled(false);
        gbAuthor->setGeometry(QRect(10, 70, 621, 151));
        pbExit2 = new QPushButton(gbAuthor);
        pbExit2->setObjectName(QStringLiteral("pbExit2"));
        pbExit2->setGeometry(QRect(310, 80, 291, 61));
        pbExit2->setFont(font1);
        pbExit2->setStyleSheet(QLatin1String("QPushButton#pbExit2 {\n"
"background-color: rgb(123, 155, 166);\n"
"color:  rgb(255, 255, 255);\n"
"border-radius: 5px;\n"
" }\n"
"\n"
" QPushButton#pbExit2:hover {\n"
"background-color: rgb(65, 91, 118);\n"
"color:  rgb(255, 255, 255);\n"
" }"));
        pbUpdate = new QPushButton(gbAuthor);
        pbUpdate->setObjectName(QStringLiteral("pbUpdate"));
        pbUpdate->setGeometry(QRect(310, 10, 291, 61));
        pbUpdate->setFont(font1);
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
        lbAuthor_6 = new QLabel(gbAuthor);
        lbAuthor_6->setObjectName(QStringLiteral("lbAuthor_6"));
        lbAuthor_6->setGeometry(QRect(20, 100, 81, 20));
        lbAuthor_6->setFont(font1);
        lneFatherLastNameUpdate = new QLineEdit(gbAuthor);
        lneFatherLastNameUpdate->setObjectName(QStringLiteral("lneFatherLastNameUpdate"));
        lneFatherLastNameUpdate->setGeometry(QRect(100, 68, 201, 22));
        lneFatherLastNameUpdate->setFont(font3);
        lneFatherLastNameUpdate->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lneMotherLastNameUpdate = new QLineEdit(gbAuthor);
        lneMotherLastNameUpdate->setObjectName(QStringLiteral("lneMotherLastNameUpdate"));
        lneMotherLastNameUpdate->setGeometry(QRect(100, 100, 201, 22));
        lneMotherLastNameUpdate->setFont(font3);
        lneMotherLastNameUpdate->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lbAuthorUpdate = new QLabel(gbAuthor);
        lbAuthorUpdate->setObjectName(QStringLiteral("lbAuthorUpdate"));
        lbAuthorUpdate->setGeometry(QRect(19, 70, 71, 20));
        lbAuthorUpdate->setFont(font1);
        lbAuthor_4 = new QLabel(gbAuthor);
        lbAuthor_4->setObjectName(QStringLiteral("lbAuthor_4"));
        lbAuthor_4->setGeometry(QRect(20, 42, 55, 16));
        lbAuthor_4->setFont(font1);
        lneFirstNameUpdate = new QLineEdit(gbAuthor);
        lneFirstNameUpdate->setObjectName(QStringLiteral("lneFirstNameUpdate"));
        lneFirstNameUpdate->setGeometry(QRect(100, 40, 201, 22));
        lneFirstNameUpdate->setFont(font3);
        lneFirstNameUpdate->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        tabWidget->addTab(tbUpdate, QString());
        CrudAuthor->setCentralWidget(centralwidget);
        QWidget::setTabOrder(lneIdAuthor, lneFirstName);
        QWidget::setTabOrder(lneFirstName, pbInsert);
        QWidget::setTabOrder(pbInsert, pbExit);
        QWidget::setTabOrder(pbExit, lneCritery);
        QWidget::setTabOrder(lneCritery, cboCritery);
        QWidget::setTabOrder(cboCritery, lneIdAuthorQuery);
        QWidget::setTabOrder(lneIdAuthorQuery, tabWidget);
        QWidget::setTabOrder(tabWidget, pbSearch);
        QWidget::setTabOrder(pbSearch, pbExit2);
        QWidget::setTabOrder(pbExit2, pbUpdate);
        QWidget::setTabOrder(pbUpdate, tvQuery);

        retranslateUi(CrudAuthor);
        QObject::connect(pbExit, SIGNAL(clicked()), CrudAuthor, SLOT(close()));
        QObject::connect(lneIdAuthor, SIGNAL(returnPressed()), lneFirstName, SLOT(setFocus()));
        QObject::connect(lneFirstName, SIGNAL(returnPressed()), lneFatherLastName, SLOT(setFocus()));
        QObject::connect(lneFatherLastName, SIGNAL(returnPressed()), lneMotherLastName, SLOT(setFocus()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(CrudAuthor);
    } // setupUi

    void retranslateUi(QMainWindow *CrudAuthor)
    {
        CrudAuthor->setWindowTitle(QApplication::translate("CrudAuthor", "Administraci\303\263n de autores", nullptr));
        lbIdAuthor->setText(QApplication::translate("CrudAuthor", "Id autor", nullptr));
        lbAuthor->setText(QApplication::translate("CrudAuthor", "Nombre", nullptr));
        lbTitle->setText(QApplication::translate("CrudAuthor", "Administraci\303\263n de autores", nullptr));
        pbInsert->setText(QApplication::translate("CrudAuthor", "Insertar autor", nullptr));
        pbExit->setText(QApplication::translate("CrudAuthor", "Salir al men\303\272 principal", nullptr));
        lbAuthor_2->setText(QApplication::translate("CrudAuthor", "Ap. paterno", nullptr));
        lbAuthor_3->setText(QApplication::translate("CrudAuthor", "Ap. materno", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tbInsert), QApplication::translate("CrudAuthor", "Agregar autor", nullptr));
        lbSearch->setText(QApplication::translate("CrudAuthor", "Busqueda:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tbQuery), QApplication::translate("CrudAuthor", "Buscar autor", nullptr));
        gbIdCareer->setTitle(QString());
        lbIdAuthorQuery->setText(QApplication::translate("CrudAuthor", "Id autor", nullptr));
        pbSearch->setText(QApplication::translate("CrudAuthor", "Buscar", nullptr));
        gbAuthor->setTitle(QString());
        pbExit2->setText(QApplication::translate("CrudAuthor", "Salir al men\303\272 principal", nullptr));
        pbUpdate->setText(QApplication::translate("CrudAuthor", "Actualizar autor", nullptr));
        lbAuthor_6->setText(QApplication::translate("CrudAuthor", "Ap. materno", nullptr));
        lbAuthorUpdate->setText(QApplication::translate("CrudAuthor", "Ap. paterno", nullptr));
        lbAuthor_4->setText(QApplication::translate("CrudAuthor", "Nombre", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tbUpdate), QApplication::translate("CrudAuthor", "Modificar autor", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CrudAuthor: public Ui_CrudAuthor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CRUDAUTHOR_H
