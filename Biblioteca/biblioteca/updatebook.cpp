#include "updatebook.h"
#include "ui_updatebook.h"

#include <QDebug>
#include <QSqlError>
#include <QMessageBox>

UpdateBook::UpdateBook(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::UpdateBook) {
    ui->setupUi(this);
    libraryDatabase = QSqlDatabase::database();
    loadComboBoxFormate();
    loadComboBoxGenero();
    loadComboBoxPublisher();
    }

UpdateBook::~UpdateBook() {
    delete ui;
    }

void UpdateBook::on_pbSearch_clicked() {
    try {
        QString isbn(ui->lneISBN->text());
        getInformationFromLibros(isbn);
        }
    catch (std::invalid_argument ex) {
        qDebug() << ex.what();
        }
    }

unsigned int UpdateBook::getMaxIdFromEjemplares(const QString& isbn) {
    QSqlQuery query;
    query.exec(QString("SELECT MAX(ID) FROM EJEMPLARES WHERE LIBRO_ISBN = '%1'").arg(isbn));
    query.next();
    return query.value(0).toUInt();
    }

void UpdateBook::getInformationFromLibros(const QString& isbn) {
    QSqlQuery query;
    query.exec(QString("SELECT TITULO, EDICION, GENERO_ID, FORMATO_ID, "
                       "EDITORIAL_ID, NUM_PAGINAS FROM LIBROS WHERE "
                       "ISBN = '%1'").arg(isbn));
    query.exec();
    qDebug() << query.lastError().text();
    query.next();
    if (!query.isNull(0)) {
        putInformation(isbn, query);
        changeEnable();
        }
    else throw std::invalid_argument("ISBN no existente en la base de datos.");
    }

void UpdateBook::putInformation(const QString& isbn, QSqlQuery& query) {
    ui->lneTitle->setText(query.value(0).toString());
    ui->sbEdition->setValue(query.value(1).toInt());
    ui->cboGenero->setCurrentText(getGenero(query.value(2).toInt()));
    ui->cboFormate->setCurrentText(getFormate(query.value(3).toInt()));
    ui->cboPublisher->setCurrentText(getPublisher(query.value(4).toInt()));
    ui->sbPageNumber->setValue(query.value(5).toInt());
    ui->sbCopiesNumber->setValue(getMaxIdFromEjemplares(isbn));
    }

void UpdateBook::loadComboBoxGenero(const QString &value) {
    QSqlQuery generoQuery;
    generoQuery.exec(QString("SELECT NOMBRE FROM GENEROS WHERE NOMBRE LIKE '%%1%';").arg(value));
    QSqlQueryModel *generoModel = new QSqlQueryModel;
    generoModel->setQuery(generoQuery);
    ui->cboGenero->setModel(generoModel);
    }

void UpdateBook::loadComboBoxFormate(const QString &value) {
    QSqlQuery formateQuery;
    formateQuery.exec(QString("SELECT DESCRIPCION FROM FORMATOS WHERE DESCRIPCION LIKE '%%1%';").arg(value));
    QSqlQueryModel *formateModel = new QSqlQueryModel;
    formateModel->setQuery(formateQuery);
    ui->cboFormate->setModel(formateModel);
    }

void UpdateBook::loadComboBoxPublisher(const QString &value) {
    QSqlQuery publisherQuery;
    publisherQuery.exec(QString("SELECT NOMBRE FROM EDITORIALES WHERE NOMBRE LIKE '%%1%';").arg(value));
    QSqlQueryModel *publisherModel = new QSqlQueryModel;
    publisherModel->setQuery(publisherQuery);
    ui->cboPublisher->setModel(publisherModel);
    }

QString UpdateBook::getGenero(const int& id) {
    QSqlQuery query;
    query.exec(QString("SELECT NOMBRE FROM GENEROS WHERE ID = %1").arg(id));
    query.next();
    return query.value(0).toString();
    }

QString UpdateBook::getFormate(const int& id) {
    QSqlQuery query;
    query.exec(QString("SELECT DESCRIPCION FROM FORMATOS WHERE ID = %1").arg(id));
    query.next();
    return query.value(0).toString();
    }

QString UpdateBook::getPublisher(const int& id) {
    QSqlQuery query;
    query.exec(QString("SELECT NOMBRE FROM EDITORIALES WHERE ID = %1").arg(id));
    query.next();
    return query.value(0).toString();
    }

unsigned int UpdateBook::getIdFromFormate(const QString &value) {
    QSqlQuery idFormate;
    idFormate.exec(QString("SELECT ID FROM FORMATOS WHERE DESCRIPCION = '%1'").arg(value));
    idFormate.next();
    return idFormate.value(0).toUInt();
    }

unsigned int UpdateBook::getIdFromPublisher(const QString &value) {
    QSqlQuery idPublisher;
    idPublisher.exec(QString("SELECT ID FROM EDITORIALES WHERE NOMBRE= '%1'").arg(value));
    idPublisher.next();
    return idPublisher.value(0).toUInt();
    }

unsigned int UpdateBook::getIdFromGenero(const QString &value) {
    QSqlQuery idGenero;
    idGenero.exec(QString("SELECT ID FROM GENEROS WHERE NOMBRE = '%1'").arg(value));
    idGenero.next();
    return idGenero.value(0).toUInt();
    }
void UpdateBook::on_lneGenero_textChanged(const QString &value) {
    loadComboBoxGenero(value);
    }

void UpdateBook::on_lnePublisher_textChanged(const QString &value) {
    loadComboBoxPublisher(value);
    }

void UpdateBook::on_lneFormate_textChanged(const QString &value) {
    loadComboBoxFormate(value);
    }

void UpdateBook::on_pbUpdate_clicked() {
    try {
        Book myNewBook;
        myNewBook.setISBN(ui->lneISBN->text());
        myNewBook.setTitle(ui->lneTitle->text());
        myNewBook.setEdition(unsigned(ui->sbEdition->value()));
        myNewBook.setTotalPage(unsigned(ui->sbPageNumber->value()));
        myNewBook.setIdFormate(getIdFromFormate(ui->cboFormate->currentText()));
        myNewBook.setIdGenero(getIdFromGenero(ui->cboGenero->currentText()));
        myNewBook.setIdPublisher(getIdFromPublisher(ui->cboPublisher->currentText()));
        myNewBook.setExistences(unsigned(ui->sbCopiesNumber->value()));
        updateBook(myNewBook);
        QMessageBox::information(this, "Error", "El libro ha sido actualizado.");
        clearAll();
        changeEnable();
        }
    catch (std::invalid_argument ex) {
        qDebug() << ex.what();
        }
    }

void UpdateBook::updateBook(const Book& updateBook) {
    QSqlQuery updateQueryBook;
    updateQueryBook.prepare("UPDATE LIBROS SET TITULO = :title, EDICION = :edi, NUM_PAGINAS = :num, "
                            "FORMATO_ID = :idf, GENERO_ID = :idg, EDITORIAL_ID = :ide WHERE "
                            "ISBN = :isbn;");
    updateQueryBook.bindValue(":title", updateBook.getTitle());
    updateQueryBook.bindValue(":edi", updateBook.getEdition());
    updateQueryBook.bindValue(":num", updateBook.getTotalPage());
    updateQueryBook.bindValue(":idf", updateBook.getIdFormate());
    updateQueryBook.bindValue(":idg", updateBook.getIdGenero());
    updateQueryBook.bindValue(":ide", updateBook.getIdPublisher());
    updateQueryBook.bindValue(":isbn", updateBook.getISBN());

    if (updateQueryBook.exec()) {
        updateExistences(updateBook);
        }
    else throw std::invalid_argument("No se pudo actualizar el libro.");
    }

void UpdateBook::updateExistences(const Book& updateBook) {
    unsigned int maxId(getMaxIdFromEjemplares(updateBook.getISBN()));
    qDebug() << QString::number(maxId) + " " + QString::number(updateBook.getExistences());
    if (updateBook.getExistences() > maxId) {
        for (unsigned int i(maxId); i <= updateBook.getExistences(); i++) {
            QSqlQuery insertExistence;
            insertExistence.prepare("INSERT INTO EJEMPLARES VALUES (:id, :isbn, :ocu)");
            insertExistence.bindValue(":id", i);
            insertExistence.bindValue(":isbn", updateBook.getISBN());
            insertExistence.bindValue(":ocu", 0);
            insertExistence.exec();
            qDebug() << insertExistence.lastError().text();
            }
        }
    }

void UpdateBook::changeEnable() {
    ui->gbMain->setEnabled(!ui->gbMain->isEnabled());
    ui->gbISBN->setEnabled(!ui->gbISBN->isEnabled());
    ui->pbUpdate->setEnabled(!ui->pbUpdate->isEnabled());
    }

void UpdateBook::clearAll() {
    ui->lneTitle->clear();
    ui->lnePublisher->clear();
    ui->lneISBN->clear();
    ui->lneFormate->clear();
    ui->lneGenero->clear();
    ui->sbCopiesNumber->setValue(1);
    ui->sbEdition->setValue(1);
    ui->sbPageNumber->setValue(1);
    }

