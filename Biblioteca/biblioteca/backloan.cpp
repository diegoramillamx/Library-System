#include "backloan.h"
#include "ui_backloan.h"

#include <QMessageBox>
#include <QSqlError>
#include <QDebug>

BackLoan::BackLoan(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::BackLoan) {
    ui->setupUi(this);

    libraryDatabase = QSqlDatabase::database();
    }

BackLoan::~BackLoan() {
    delete ui;
    }

void BackLoan::on_pbSearch_clicked() {
    try {
        searchInformation(ui->lneIdLoan->text().toInt());
        ui->gbId->setEnabled(false);
        ui->pbAcept->setEnabled(true);
        }
    catch (std::invalid_argument ex) {
        QMessageBox::critical(this, "Error", ex.what());
        }
    }

void BackLoan::searchInformation(const int& idLoan) {
    QSqlQuery query;
    query.exec(QString("SELECT EJEMPLAR_ID, EJEMPLAR_ISBN, TITULO, PRESTAMOS.FECHA_INICIO, PRESTAMOS.FECHA_FIN, CODIGO, "
                       "CONCAT(APELLIDO_PATERNO,' ',APELLIDO_MATERNO,' ',NOMBRE_PILA), TELEFONO, "
                       "EDITORIALES.NOMBRE, FORMATOS.DESCRIPCION, GENEROS.NOMBRE "
                       "FROM PRESTAMOS INNER JOIN USUARIOS ON PRESTAMOS.USUARIO_CODIGO = USUARIOS.CODIGO "
                       "INNER JOIN EJEMPLARES ON (EJEMPLARES.ID = PRESTAMOS.EJEMPLAR_ID AND EJEMPLARES.LIBRO_ISBN = PRESTAMOS.EJEMPLAR_ISBN) "
                       "INNER JOIN LIBROS ON PRESTAMOS.EJEMPLAR_ISBN = LIBROS.ISBN "
                       "INNER JOIN EDITORIALES ON EDITORIALES.ID = LIBROS.EDITORIAL_ID "
                       "INNER JOIN FORMATOS ON FORMATOS.ID = LIBROS.FORMATO_ID "
                       "INNER JOIN GENEROS ON GENEROS.ID = LIBROS.GENERO_ID "
                       "WHERE PRESTAMOS.ID = %1 AND OCUPADO = 1 AND TERMINADO = 1;").arg(idLoan));
    query.next();
    if (!query.isNull(0)) {
        putInformationIntoTheView(query);
        }
    else
        throw std::invalid_argument("Ese prestamo no está registrado o ya ha sido terminado.");
    }

void BackLoan::putInformationIntoTheView(const QSqlQuery& information) {
    ui->lneExistence->setText(information.value(0).toString());
    ui->lneISBN->setText(information.value(1).toString());
    ui->lneTitle->setText(information.value(2).toString());
    ui->lneFirstDate->setText(information.value(3).toString());
    ui->lneSecondDate->setText(information.value(4).toString());
    ui->lneStudentCode->setText(information.value(5).toString());
    ui->lneName->setText(information.value(6).toString());
    ui->lneCellphone->setText(information.value(7).toString());
    ui->lnePublisher->setText(information.value(8).toString());
    ui->lneFormate->setText(information.value(9).toString());
    ui->lneGenero->setText(information.value(10).toString());
    }

void BackLoan::releaseLending(const QString& isbn, const int& idExistence) {
    QSqlQuery updateExistence;
    updateExistence.prepare("UPDATE EJEMPLARES SET OCUPADO = 0 WHERE ID = :id and LIBRO_ISBN = :isbn");
    updateExistence.bindValue(":isbn", isbn);
    updateExistence.bindValue(":id", idExistence);
    updateExistence.exec();
    qDebug() << updateExistence.lastError().text();
    }

void BackLoan::updateLending(const int& idLoan) {
    QSqlQuery updateLoan;
    updateLoan.prepare("UPDATE PRESTAMOS SET TERMINADO = 0 WHERE ID = :id;");
    updateLoan.bindValue(":id", idLoan);
    updateLoan.exec();
    qDebug() << updateLoan.lastError().text();
    }

void BackLoan::clearAll() {
    ui->lneExistence->clear();
    ui->lneISBN->clear();
    ui->lneTitle->clear();
    ui->lneFirstDate->clear();
    ui->lneSecondDate->clear();
    ui->lneStudentCode->clear();
    ui->lneName->clear();
    ui->lneCellphone->clear();
    ui->lnePublisher->clear();
    ui->lneFormate->clear();
    ui->lneGenero->clear();
    ui->lneIdLoan->clear();
    }

void BackLoan::on_pbAcept_clicked() {
    try {
        releaseLending(ui->lneISBN->text(), ui->lneExistence->text().toInt());
        updateLending(ui->lneIdLoan->text().toInt());
        ui->gbId->setEnabled(true);
        ui->pbAcept->setEnabled(false);
        QMessageBox::information(this, "Satisfactorio", "El prestamo ha sido devuelto!");
        clearAll();
        }
    catch (std::invalid_argument ex) {
        QMessageBox::critical(this, "Error", ex.what());
        }
    }
