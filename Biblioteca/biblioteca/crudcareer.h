#ifndef CRUDCAREER_H
#define CRUDCAREER_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlQuery>

namespace Ui {
class CrudCareer;
}

class CrudCareer : public QMainWindow
{
    Q_OBJECT

public:
    explicit CrudCareer(QWidget *parent = nullptr);
    ~CrudCareer();

private slots:
    void on_pbInsert_clicked();

    void on_lneCritery_textChanged(const QString &arg1);

    void on_pbSearch_clicked();

    void on_pbUpdate_clicked();

private:
    Ui::CrudCareer *ui;
    QSqlDatabase libraryDatabase;

    void setIdCareer();
    void startInsert();
    void insertCareer();
    void clearTabInsert();
    unsigned int getIdCareer();

    void loadComboBoxCritery();
    QString getRealValueCritery(const QString&);

    void searchCareer(const QString&);

    void startCareerForUpdate();
    bool searchCareerForUpdate();

    void clearTabQuery();
    void startUpdate();
    void updateCareer();
};

#endif // CRUDCAREER_H
