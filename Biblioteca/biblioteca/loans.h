#ifndef LOANS_H
#define LOANS_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlQuery>

namespace Ui {
    class Loans;
    }

class Loans : public QMainWindow {
    Q_OBJECT

    public:
        explicit Loans(unsigned int&, QWidget *parent = nullptr);
        ~Loans();

    private slots:
        void on_lneCode_returnPressed();
        void on_lneCode_textChanged(const QString &arg1);
        void on_lneBook_textChanged(const QString &arg1);
        void on_cboBook_currentTextChanged(const QString &arg1);
        void on_pbPushExistence_clicked();
        void on_pbInsertLoan_clicked();
        void on_pbPopExistence_clicked();
        void on_pbCancelLoan_clicked();

private:
        Ui::Loans *ui;
        unsigned int administratorCode;
        QList<QPair<QString, int>> bookList;
        QList<QPair<QString, int>> loans;

        QSqlDatabase libraryDatabase;

        void getStudentInformation(const int&);
        void putStudentInformation(const QSqlQuery&);

        void loadComboBook(const QString value = "");
        void loadComboExistences(const QString value = "");
        void addBookInListView();
        int getMaxIdFromLoans();

        void clearAll();
        void clearAlferLoan();
        void loadTableWidget();
        void insertLending();
        void updateExistences(const QString&, const int&);

        void deleteFromTable();
        void deleteFromList(QPair<QString, int>&);
    };

#endif // LOANS_H
