#ifndef CRUDSTUDENT_H
#define CRUDSTUDENT_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlQuery>
#include "student.h"

namespace Ui {
class CrudStudent;
}

class CrudStudent : public QMainWindow
{
    Q_OBJECT

public:
    explicit CrudStudent(QWidget *parent = nullptr);
    ~CrudStudent();

private slots:
    void on_lneFirsName_returnPressed();
    void on_lneFatherLastName_returnPressed();
    void on_lneMotherLastName_returnPressed();
    void on_lneStreet_returnPressed();
    void on_lneStreetNumber_returnPressed();
    void on_lneColony_returnPressed();
    void on_lneCity_returnPressed();
    void on_lnePostalCode_returnPressed();
    void on_lneCellphone_returnPressed();

    void on_pbInsert_pressed();
    void on_lneSearch_textChanged(const QString &arg1);

    void on_pbQuery_clicked();
    void on_pbInsert_3_clicked();
    void on_lneCode_returnPressed();
    void on_lneFirsNameQuery_returnPressed();
    void on_lneFatherLastNameQuery_returnPressed();
    void on_lneMotherLastNameQuery_returnPressed();
    void on_lneStreetQuery_returnPressed();
    void on_lneStreetNumberQuery_returnPressed();
    void on_lneColonyQuery_returnPressed();
    void on_lneCityQuery_returnPressed();
    void on_lnePostalCodeQuery_returnPressed();


    void on_lneCellphoneQuery_returnPressed();

    void on_pbInsert_clicked();

private:
    Ui::CrudStudent *ui;
    QSqlDatabase database;

    void loadDatabaseToComboBoxCareer();

    unsigned int getCareerId();
    unsigned int getMaxIdFromUsers();

    void startInsert();
    void loadStudentDataToTheObject(Student&);
    void insertUser(Student&);
    void insertStudent(Student&);

    void cleanScreen();
    void clearValuesOnQuery();

    void changeTheView();
    void searchStudent(const QString&);

    void addItemsComboBoxCriteries();
    QString getRealValueFromComboBoxCritery(QString&);

    void getInformationOfStudent();
    void putInformationIntoTheView(QSqlQuery&);
    void startUpdateInformation();
    void updateStudent(const Student&);


    void whenQueryIsPressed();
    };

#endif // CRUDSTUDENT_H
