#include "loans.h"
#include "ui_loans.h"

#include <QMessageBox>
#include <QSqlQueryModel>

#include <string.h>

#include <QDebug>
#include <QSqlError>
#include <QList>
#include <QPair>
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QDate>

Loans::Loans(unsigned int& code, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Loans) {
    ui->setupUi(this);

    administratorCode = code;

    libraryDatabase = QSqlDatabase::database();
    loadComboBook();
    loadTableWidget();
    }

Loans::~Loans() {
    delete ui;
    }

void Loans::on_lneCode_returnPressed() {
    try {
        getStudentInformation(ui->lneCode->text().toInt());
        }
    catch (std::invalid_argument ex) {
        QMessageBox::information(this, "Error", ex.what());
        }
    }

void Loans::getStudentInformation(const int& code) {
    QSqlQuery studentQuery;
    studentQuery.exec(QString("SELECT CODIGO, APELLIDO_PATERNO, APELLIDO_MATERNO, NOMBRE_PILA, CIUDAD, TELEFONO, CARRERAS.NOMBRE "
                              "FROM USUARIOS INNER JOIN ESTUDIANTES ON USUARIOS.CODIGO = ESTUDIANTES.USUARIO_CODIGO "
                              "INNER JOIN CARRERAS ON ESTUDIANTES.CARRERA_ID = CARRERAS.ID WHERE CODIGO = %1;").arg(code));
    studentQuery.next();
    if (!studentQuery.isNull(0)) {
        putStudentInformation(studentQuery);
        ui->gbBook->setEnabled(true);
        ui->gbStudent->setEnabled(false);
        ui->pbInsertLoan->setEnabled(true);
        ui->pbCancelLoan->setEnabled(true);
        }
    else throw std::invalid_argument("No hay un estudiante con ese código.");
    }

void Loans::putStudentInformation(const QSqlQuery& information) {
    ui->lneFatherLast->setText(information.value(1).toString());
    ui->lneMotherLast->setText(information.value(2).toString());
    ui->lneName->setText(information.value(3).toString());
    ui->lneCity->setText(information.value(4).toString());
    ui->lneCellphone->setText(information.value(5).toString());
    ui->lneCareer->setText(information.value(6).toString());
}

void Loans::loadComboBook(const QString value) {
    QSqlQuery bookQuery;
    bookQuery.exec(QString("SELECT TITULO FROM LIBROS WHERE TITULO LIKE '%%1%'").arg(value));
    QSqlQueryModel *bookModel = new QSqlQueryModel;
    bookModel->setQuery(bookQuery);
    ui->cboBook->setModel(bookModel);
    }

void Loans::loadComboExistences(const QString value) {
    QSqlQuery existenceQuery;
    existenceQuery.exec(QString("SELECT ID FROM LIBROS INNER JOIN EJEMPLARES ON LIBROS.ISBN = "
                              "EJEMPLARES.LIBRO_ISBN WHERE OCUPADO = 0 AND TITULO = '%1';").arg(value));
    QSqlQueryModel *existenceModel = new QSqlQueryModel;
    existenceModel->setQuery(existenceQuery);
    ui->cboExistence->setModel(existenceModel);
    }

void Loans::addBookInListView() {
    ui->twBook->clear();
    loadTableWidget();
    loans.clear();

    for (int i(0); i < bookList.size(); i++) {
        QSqlQuery query;
        query.exec(QString("SELECT ISBN, EDICION, TITULO, NUM_PAGINAS FROM LIBROS "
                           "WHERE TITULO = '%1';").arg(bookList.at(i).first));
        query.next();

        QPair<QString, int> newPair(query.value(0).toString(), bookList.at(i).second);
        loans.append(newPair);

        ui->twBook->setItem(i, 0, new QTableWidgetItem(QString::number(bookList.at(i).second)));
        for (int j(0); j < 4; j++) {
            ui->twBook->setItem(i, j + 1, new QTableWidgetItem(query.value(j).toString()));
            }
        }
    }

int Loans::getMaxIdFromLoans() {
    QSqlQuery idLoans;
    idLoans.exec("SELECT MAX(ID) FROM PRESTAMOS;");
    idLoans.next();
    return idLoans.value(0).toInt() + 1;
    }

void Loans::loadTableWidget() {
    ui->twBook->setColumnCount(5);
    ui->twBook->setRowCount(10);
    QStringList labels;
    labels.append("EJEMPLAR");
    labels.append("ISBN");
    labels.append("EDICIÓN");
    labels.append("TITULO DEL LIBRO");
    labels.append("NÚMERO DE PAGINAS");
    ui->twBook->setHorizontalHeaderLabels(labels);
    }

void Loans::insertLending() {
    int userCode(ui->lneCode->text().toInt());
    QDate date;
    for (int i(0); i < loans.size(); i++) {
        QSqlQuery insertLoan;
        insertLoan.prepare("INSERT INTO PRESTAMOS VALUES (:id, :ide, :isbn, :scode, :acode, :datefir, :datese, 1)");
        insertLoan.bindValue(":id", getMaxIdFromLoans());
        insertLoan.bindValue(":ide", loans.at(i).second);
        insertLoan.bindValue(":isbn", loans.at(i).first);
        insertLoan.bindValue(":scode", userCode);
        insertLoan.bindValue(":acode", administratorCode);
        insertLoan.bindValue(":datefir", date.currentDate().toString("yyyy-MM-dd"));
        insertLoan.bindValue(":datese", date.currentDate().addDays(7).toString("yyyy-MM-dd"));
        if (insertLoan.exec()) {
            updateExistences(loans.at(i).first, loans.at(i).second);
            }
        }
}

void Loans::updateExistences(const QString& isbn, const int& id) {
    QSqlQuery updateExistence;
    qDebug() << QString::number(id) + " " + isbn;
    updateExistence.prepare("UPDATE EJEMPLARES SET OCUPADO = 1 WHERE id = :id and libro_isbn = :isbn;");
    updateExistence.bindValue(":id", id);
    updateExistence.bindValue(":isbn", isbn);
    updateExistence.exec();
    }

void Loans::deleteFromTable() {
    int row(ui->twBook->currentRow());
    QPair<QString, int> pair(ui->twBook->item(row, 3)->text(),
                             ui->twBook->item(row, 0)->text().toInt());

    qDebug() << pair.first + " " + QString::number(pair.second);

    for (int i(0); i < 5; i++) {
        ui->twBook->setItem(row, i, new QTableWidgetItem(""));
        }
    deleteFromList(pair);
    }

void Loans::deleteFromList(QPair<QString, int>& pair) {
    int pos(bookList.indexOf(pair));
    bookList.removeAt(pos);
    addBookInListView();
    }

void Loans::clearAll() {
    ui->lneFatherLast->clear();
    ui->lneMotherLast->clear();
    ui->lneName->clear();
    ui->lneCity->clear();
    ui->lneCellphone->clear();
    ui->lneCareer->clear();
    }

void Loans::clearAlferLoan() {
    clearAll();
    loadComboBook();
    ui->twBook->clear();
    bookList.clear();
    loans.clear();
    ui->gbStudent->setEnabled(true);
    ui->gbBook->setEnabled(false);
    ui->pbInsertLoan->setEnabled(false);
    ui->pbCancelLoan->setEnabled(false);
    }

void Loans::on_lneCode_textChanged(const QString &value) {
    if (value.isEmpty()) clearAll();
    }

void Loans::on_lneBook_textChanged(const QString &value) {
    loadComboBook(value);
    }

void Loans::on_cboBook_currentTextChanged(const QString &value) {
    loadComboExistences(value);
    }

void Loans::on_pbPushExistence_clicked() {
    QString bookTitle(ui->cboBook->currentText());
    int existence(ui->cboExistence->currentText().toInt());
    QPair<QString, int> newPair(bookTitle, existence);

    if (!bookList.contains(newPair)) {
        bookList.append(newPair);
        addBookInListView();
        }
    }

void Loans::on_pbInsertLoan_clicked() {
    insertLending();
    QMessageBox::information(this, "Satisfactorio", "¡Prestamos registrados!");
    clearAlferLoan();
    }

void Loans::on_pbPopExistence_clicked() {
    deleteFromTable();
    }

void Loans::on_pbCancelLoan_clicked() {
    clearAlferLoan();
    }
