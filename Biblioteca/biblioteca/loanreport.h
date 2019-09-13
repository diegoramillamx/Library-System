#ifndef LOANREPORT_H
#define LOANREPORT_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>

namespace Ui {
    class LoanReport;
    }

class LoanReport : public QMainWindow {
    Q_OBJECT

    public:
        explicit LoanReport(QWidget *parent = nullptr);
        ~LoanReport();

private slots:
    void on_rbFinished_clicked();
    void on_rbNoFinished_clicked();

private:
        Ui::LoanReport *ui;
        QSqlDatabase libraryDatabase;

        void whenRadiosChange();

        void queryNoFinished();
        void queryFinished();
    };

#endif // LOANREPORT_H
