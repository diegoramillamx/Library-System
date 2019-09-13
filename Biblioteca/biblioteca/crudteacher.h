#ifndef CRUDTEACHER_H
#define CRUDTEACHER_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlQuery>

#include "teacher.h"

namespace Ui {
    class CrudTeacher;
    }

class CrudTeacher : public QMainWindow {
    Q_OBJECT

    public:
        explicit CrudTeacher(QWidget *parent = nullptr);
        ~CrudTeacher();

private slots:
    void on_pbInsert_clicked();
    void on_lneSearch_textChanged(const QString &arg1);
    void on_pbUpdate_clicked();
    void on_pbInsertUdpate_clicked();

private:
        Ui::CrudTeacher *ui;
        QSqlDatabase libraryDatabase;

        void loadComboBoxCritery();
        QString getRealValueFromComboBox(const QString&);

        //THIS ARE FOR INSERT THE TEACHER/ADMIN
        unsigned int getNextIdTeacher();
        void startInsertTeacher(Teacher&);
        void insertTeacher(const Teacher&);
        void insertAdministrador(const Teacher&);
        void clearTabInsert();

        void makeQueryForTeachers(const QString&);

        void importDataFromTeacher();
        void putInformationOnTheView(QSqlQuery&);

        void startUpdateTeacher(Teacher&);
        void updateTeacher(const Teacher&);
        void clearTabUpdate();

        void changeEnable();
    };

#endif // CRUDTEACHER_H
