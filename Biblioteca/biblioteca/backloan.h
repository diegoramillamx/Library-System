#ifndef BACKLOAN_H
#define BACKLOAN_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlQuery>

namespace Ui {
    class BackLoan;
    }

class BackLoan : public QMainWindow {
    Q_OBJECT

    public:
        explicit BackLoan(QWidget *parent = nullptr);
        ~BackLoan();

    private slots:
        void on_pbSearch_clicked();

        void on_pbAcept_clicked();

private:
        Ui::BackLoan *ui;

        QSqlDatabase libraryDatabase;

        void searchInformation(const int&);
        void putInformationIntoTheView(const QSqlQuery&);
        void releaseLending(const QString&, const int&);
        void updateLending(const int&);
        void clearAll();
    };

#endif // BACKLOAN_H
