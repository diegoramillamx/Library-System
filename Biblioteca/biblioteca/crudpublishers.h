#ifndef CRUDPUBLISHERS_H
#define CRUDPUBLISHERS_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>

namespace Ui {
    class CrudPublishers;
    }

class CrudPublishers : public QMainWindow {
    Q_OBJECT

    public:
        explicit CrudPublishers(QWidget *parent = nullptr);
        ~CrudPublishers();

private slots:
    void on_pbInsert_clicked();
    void on_lneCritery_textChanged(const QString &arg1);
    void on_pbSearch_clicked();
    void on_pbUpdate_clicked();

private:
        Ui::CrudPublishers *ui;

        QSqlDatabase publishersDatabase;

        void setIdPublishers();
        void startInsert();
        void insertPublishers();

        void clearTabInsert();

        unsigned int getIdPublishers();

        void loadComboBoxCritery();
        QString getRealValueCritery(const QString&);

        void searchPublishers(const QString&);

        void startPublishersForUpdate();
        bool searchPublishersForUpdate();

        void clearTabQuery();
        void startUpdate();
        void updatePublishers();
};

#endif // CRUDPUBLISHERS_H
