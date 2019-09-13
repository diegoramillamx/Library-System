#include "crudbook.h"
#include "ui_crudbook.h"

#include <QSqlQueryModel>
#include <QSqlError>
#include <QDebug>
#include <QMessageBox>
#include <QStandardItem>
#include <QStandardItemModel>
#include <QList>
#include <QSqlError>

CrudBook::CrudBook(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CrudBook) {
    ui->setupUi(this);

    bookDatabase = QSqlDatabase::database();
    loadComboBoxGenero();
    loadComboBoxFormate();
    loadComboBoxPublisher();
    loadListViewWriter();

    listModel = new QStandardItemModel();
    }

CrudBook::~CrudBook() {
    delete ui;
    }

void CrudBook::loadComboBoxGenero(const QString& value) {
    QSqlQuery generoQuery;
    generoQuery.exec(QString("SELECT NOMBRE FROM GENEROS WHERE NOMBRE LIKE '%%1%';").arg(value));
    QSqlQueryModel *generoModel = new QSqlQueryModel;
    generoModel->setQuery(generoQuery);
    ui->cboGenero->setModel(generoModel);
    }

void CrudBook::loadComboBoxFormate(const QString &value) {
    QSqlQuery formateQuery;
    formateQuery.exec(QString("SELECT DESCRIPCION FROM FORMATOS WHERE DESCRIPCION LIKE '%%1%';").arg(value));
    QSqlQueryModel *formateModel = new QSqlQueryModel;
    formateModel->setQuery(formateQuery);
    ui->cboFormate->setModel(formateModel);
    }

void CrudBook::loadComboBoxPublisher(const QString &value) {
    QSqlQuery publisherQuery;
    publisherQuery.exec(QString("SELECT NOMBRE FROM EDITORIALES WHERE NOMBRE LIKE '%%1%';").arg(value));
    QSqlQueryModel *publisherModel = new QSqlQueryModel;
    publisherModel->setQuery(publisherQuery);
    ui->cboPublisher->setModel(publisherModel);
    }

void CrudBook::loadListViewWriter(const QString &value) {
    QSqlQuery writerQuery;
    writerQuery.exec(QString("SELECT CONCAT(APELLIDO_PATERNO,' ',APELLIDO_MATERNO,' ',NOMBRE_PILA) AS NOMBRE "
                             "FROM AUTORES WHERE concat(APELLIDO_PATERNO,' ',APELLIDO_MATERNO,' ',NOMBRE_PILA) "
                             "LIKE '%%1%';").arg(value));
    QSqlQueryModel *writerModel = new QSqlQueryModel;
    writerModel->setQuery(writerQuery);
    ui->lvWriter->setModel(writerModel);
    }

unsigned int CrudBook::getIdFromGenero(const QString &value) {
    QSqlQuery idGenero;
    idGenero.exec(QString("SELECT ID FROM GENEROS WHERE NOMBRE = '%1'").arg(value));
    idGenero.next();
    return idGenero.value(0).toUInt();
    }

unsigned int CrudBook::getIdFromFormate(const QString &value) {
    QSqlQuery idFormate;
    idFormate.exec(QString("SELECT ID FROM FORMATOS WHERE DESCRIPCION = '%1'").arg(value));
    idFormate.next();
    return idFormate.value(0).toUInt();
    }

unsigned int CrudBook::getIdFromPublisher(const QString &value) {
    QSqlQuery idPublisher;
    idPublisher.exec(QString("SELECT ID FROM EDITORIALES WHERE NOMBRE= '%1'").arg(value));
    idPublisher.next();
    return idPublisher.value(0).toUInt();
    }

unsigned int CrudBook::getIdFromWriter(const QString &value) {
    QSqlQuery idWriter;
    idWriter.exec(QString("SELECT ID FROM AUTORES WHERE "
                          "concat(APELLIDO_PATERNO,' ',APELLIDO_MATERNO,' ',NOMBRE_PILA) = '%1';").arg(value));
    idWriter.next();
    return idWriter.value(0).toUInt();
    }

void CrudBook::getBookValues(Book& newBook) {
    try {
        newBook.setISBN(ui->lneISBN->text().toUpper());
        newBook.setTitle(ui->lneTitle->text().toUpper());
        newBook.setTotalPage(ui->sbPageNumber->text().toUInt());
        newBook.setEdition(ui->sbEdition->text().toUInt());
        newBook.setIdGenero(getIdFromGenero(ui->cboGenero->currentText()));
        newBook.setIdFormate(getIdFromFormate(ui->cboFormate->currentText()));
        newBook.setIdPublisher(getIdFromPublisher(ui->cboPublisher->currentText()));
        newBook.setWriters(writerList);
        newBook.setExistences(ui->sbCopiesNumber->text().toUInt());
        }
    catch (std::invalid_argument ex) {
        throw std::invalid_argument(ex.what());
        }
    }

void CrudBook::insertBook(const Book& newBook) {
    QSqlQuery qInsertBook;
    qInsertBook.prepare("INSERT INTO LIBROS VALUES (:isbn, :edi, :tit, :num, :ide, :idf, :idg)");
    qInsertBook.bindValue(":isbn", newBook.getISBN());
    qInsertBook.bindValue(":edi", newBook.getEdition());
    qInsertBook.bindValue(":tit", newBook.getTitle());
    qInsertBook.bindValue(":num", newBook.getTotalPage());
    qInsertBook.bindValue(":ide", newBook.getIdPublisher());
    qInsertBook.bindValue(":idf", newBook.getIdFormate());
    qInsertBook.bindValue(":idg", newBook.getIdGenero());
    if (!qInsertBook.exec()) {
        throw std::invalid_argument("No se pudo insertar en la tabla de libros.");
        }

    }

void CrudBook::insertBookWriter(const Book& newBook) {
    for (int i(0); i < newBook.getWriters().size(); i++) {
        QSqlQuery qInsertBookWriter;
        qInsertBookWriter.prepare("INSERT INTO LIBRO_TIENE_AUTORES VALUES (:isbn, :ida)");
        qInsertBookWriter.bindValue(":isbn", newBook.getISBN());
        qInsertBookWriter.bindValue(":ida", getIdFromWriter(newBook.getWriters().at(i)));
        if (!qInsertBookWriter.exec()) {
            std::string str = qInsertBookWriter.lastError().text().toStdString();
            throw std::invalid_argument(str);
            }
        }
    }

void CrudBook::insertExistence(const Book& newBook) {
    for (unsigned int i(1); i <= newBook.getExistences(); i++) {
        QSqlQuery insertExistence;
        insertExistence.prepare("INSERT INTO EJEMPLARES VALUES (:id, :isbn, :ocu)");
        insertExistence.bindValue(":id", i);
        insertExistence.bindValue(":isbn", newBook.getISBN());
        insertExistence.bindValue(":ocu", 0);

        if (!insertExistence.exec()) {
            throw std::invalid_argument("No se pudo insertar en la tabla de ejemplares.");
            }
        }
    }

void CrudBook::clearAll() {
    ui->lneTitle->clear();
    ui->lnePublisher->clear();
    ui->lneISBN->clear();
    ui->lneFormate->clear();
    ui->lneGenero->clear();
    ui->sbCopiesNumber->setValue(1);
    ui->sbEdition->setValue(1);
    ui->sbPageNumber->setValue(1);
    clearListView();
    writerList.clear();
    ui->gbMain->setEnabled(false);
    ui->pbActive->setEnabled(true);
    }

void CrudBook::clearListView() {
    listModel->removeRows(0, listModel->rowCount());
    ui->lvWriterSelect->setModel(listModel);
    }

void CrudBook::on_lneGenero_textChanged(const QString &value) {
    loadComboBoxGenero(value);
    }

void CrudBook::on_lnePublisher_textChanged(const QString &value) {
    loadComboBoxPublisher(value);
    }

void CrudBook::on_lneFormate_textChanged(const QString &value) {
    loadComboBoxFormate(value);
    }

void CrudBook::on_pbPush_clicked() {
    QModelIndex index = ui->lvWriter->currentIndex();
    QString itemText = index.data(Qt::DisplayRole).toString();

    if (!writerList.contains(itemText)) {
        writerList.append(itemText);
        QStandardItem* newItem = new QStandardItem(itemText);
        listModel->appendRow(newItem);
        ui->lvWriterSelect->setModel(listModel);
        }
    else {
        QMessageBox::critical(this, "Error", "Ese escritor ya está");
        }
    }

void CrudBook::on_pbPop_clicked() {
    QModelIndex index = ui->lvWriterSelect->currentIndex();
    QString itemText = index.data(Qt::DisplayRole).toString();

    for (int i(0); i < writerList.size(); i++) {
        if (itemText == writerList.at(i)) {
            listModel->removeRow(i);
            writerList.removeAt(i);
            ui->lvWriterSelect->setModel(listModel);
            return;
            }
        }
    }

void CrudBook::on_pbActive_clicked() {
    ui->gbMain->setEnabled(true);
    ui->pbActive->setEnabled(false);
    ui->pbInsert->setEnabled(true);
    }

void CrudBook::on_pbInsert_clicked() {
    try {
        Book newBook;
        getBookValues(newBook);
        insertBook(newBook);
        insertBookWriter(newBook);
        insertExistence(newBook);
        QMessageBox::information(this, "Satisfactorio", "Libro registrado.");
        clearAll();
        }
    catch (std::invalid_argument ex) {
        QMessageBox::critical(this, "Error", ex.what());
        }
    }

void CrudBook::on_lneWriter_textChanged(const QString &value) {
    loadListViewWriter(value);
    }
