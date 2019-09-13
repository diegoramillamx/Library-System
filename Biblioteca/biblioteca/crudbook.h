#ifndef CRUDBOOK_H
#define CRUDBOOK_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlQuery>

#include <QStandardItem>
#include <QStandardItemModel>
#include "book.h"

namespace Ui {
class CrudBook;
}

class CrudBook : public QMainWindow {
    Q_OBJECT

    public:
        explicit CrudBook(QWidget *parent = nullptr);
        ~CrudBook();

private slots:
    void on_lneGenero_textChanged(const QString &arg1);
    void on_lnePublisher_textChanged(const QString &arg1);
    void on_lneFormate_textChanged(const QString &arg1);
    void on_pbPush_clicked();
    void on_pbPop_clicked();
    void on_pbActive_clicked();
    void on_pbInsert_clicked();
    void on_lneWriter_textChanged(const QString &value);

private:
        Ui::CrudBook *ui;

        QSqlDatabase bookDatabase;
        void loadComboBoxGenero(const QString& value = "");
        void loadComboBoxFormate(const QString& value = "");
        void loadComboBoxPublisher(const QString& value = "");
        void loadListViewWriter(const QString& value = "");

        unsigned int getIdFromGenero(const QString& value);
        unsigned int getIdFromFormate(const QString& value);
        unsigned int getIdFromPublisher(const QString& value);
        unsigned int getIdFromWriter(const QString& value);

        void getBookValues(Book&);
        void insertBook(const Book&);
        void insertBookWriter(const Book&);
        void insertExistence(const Book&);

        QStandardItemModel *listModel;
        QList<QStandardItem*> listItems;
        QList<QString> writerList;

        void clearAll();
        void clearListView();
    };

#endif // CRUDBOOK_H
