#ifndef CRUDAUTHOR_H
#define CRUDAUTHOR_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlQuery>

namespace Ui {
    class CrudAuthor;
    }

class CrudAuthor : public QMainWindow {
    Q_OBJECT

    public:
        explicit CrudAuthor(QWidget *parent = nullptr);
        ~CrudAuthor();

private slots:
    void on_lneCritery_textChanged(const QString &arg1);
    void on_pbSearch_clicked();
    void on_pbUpdate_clicked();
    void on_pbInsert_clicked();

private:
        Ui::CrudAuthor *ui;
        QSqlDatabase authorDatabase;

        void setIdAuthor();
        void startInsert();
        void insertAuthor();

        unsigned int getIdAuthor();
        QString getRealValueCritery(const QString&);

        void loadComboBoxCritery();

        void searchAuthor(const QString&);
        void startAuthorForUpdate();
        bool searchAuthorForUpdate();

        void startUpdate();
        void updateAuthor();

        void clearTabInsert();
        void clearTabQuery();
    };

#endif // CRUDAUTHOR_H
