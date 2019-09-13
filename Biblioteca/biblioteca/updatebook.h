#ifndef UPDATEBOOK_H
#define UPDATEBOOK_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include "book.h"

namespace Ui {
    class UpdateBook;
    }

class UpdateBook : public QMainWindow {
    Q_OBJECT

    public:
        explicit UpdateBook(QWidget *parent = nullptr);
        ~UpdateBook();

    private slots:
        void on_pbSearch_clicked();
        void on_lneGenero_textChanged(const QString &arg1);
        void on_lnePublisher_textChanged(const QString &arg1);
        void on_lneFormate_textChanged(const QString &arg1);
        void on_pbUpdate_clicked();

private:
        Ui::UpdateBook *ui;
        QSqlDatabase libraryDatabase;

        unsigned int getMaxIdFromEjemplares(const QString&);
        void getInformationFromLibros(const QString&);
        void putInformation(const QString&, QSqlQuery&);

        void updateLibros(const Book&);

        void loadComboBoxGenero(const QString& value = "");
        void loadComboBoxFormate(const QString& value = "");
        void loadComboBoxPublisher(const QString& value = "");

        QString getGenero(const int&);
        QString getFormate(const int&);
        QString getPublisher(const int&);

        unsigned int getIdFromGenero(const QString& value);
        unsigned int getIdFromFormate(const QString& value);
        unsigned int getIdFromPublisher(const QString& value);

        void updateBook(const Book&);
        void updateExistences(const Book&);

        void changeEnable();
        void clearAll();
    };

#endif // UPDATEBOOK_H
