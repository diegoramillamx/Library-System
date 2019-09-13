#ifndef SEARCHBOOK_H
#define SEARCHBOOK_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>

namespace Ui {
class SearchBook;
}

class SearchBook : public QMainWindow {
    Q_OBJECT

public:
    explicit SearchBook(QWidget *parent = nullptr);
    ~SearchBook();

private slots:
    void on_lneSearch_textChanged(const QString &arg1);

private:
    Ui::SearchBook *ui;
    QSqlDatabase libraryDatabase;

    void searchOnDatabase(const QString& value = "");

    void loadComboBoxCritery();
    QString getRealValueOfCritery(const QString&);
    };

#endif // SEARCHBOOK_H
