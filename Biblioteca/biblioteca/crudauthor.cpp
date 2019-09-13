#include "crudauthor.h"
#include "ui_crudauthor.h"

#include <QMessageBox>
#include <QSqlQueryModel>

#include "author.h"

CrudAuthor::CrudAuthor(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CrudAuthor) {
    ui->setupUi(this);

    authorDatabase = QSqlDatabase::database();
    setIdAuthor();
    searchAuthor("");
    loadComboBoxCritery();
    }

CrudAuthor::~CrudAuthor() {
    delete ui;
    }

void CrudAuthor::setIdAuthor() {
    ui->lneIdAuthor->setText(QString::number(getIdAuthor()));
    }

void CrudAuthor::startInsert() {

    try {
        insertAuthor();
        QMessageBox::information(this, "Registro insertado",
                                 "El registro ha sido insertado en la base de datos correctamente.");
        }
    catch (std::invalid_argument ex) {
        QMessageBox::critical(this, "Error", ex.what());
        }
    clearTabInsert();
    }

void CrudAuthor::insertAuthor() {
    Author newAuthor(ui->lneIdAuthor->text().toUInt(), ui->lneFatherLastName->text().toUpper(),
                     ui->lneMotherLastName->text().toUpper(), ui->lneFirstName->text().toUpper());
    QSqlQuery insertAuthor;
    insertAuthor.prepare("INSERT INTO AUTORES VALUES (:id, :app, :apm, :nom)");
    insertAuthor.bindValue(":id", newAuthor.getIdAuthor());
    insertAuthor.bindValue(":app", newAuthor.getFatherLastName());
    insertAuthor.bindValue(":apm", newAuthor.getMotherLastName());
    insertAuthor.bindValue(":nom", newAuthor.getFirstName());
    insertAuthor.exec();
    }

void CrudAuthor::clearTabInsert() {
    ui->lneIdAuthor->clear();
    ui->lneFirstName->clear();
    ui->lneFatherLastName->clear();
    ui->lneMotherLastName->clear();
    }

unsigned int CrudAuthor::getIdAuthor() {
    QSqlQuery idCareer("SELECT MAX(ID) FROM AUTORES");
    idCareer.exec();
    idCareer.next();
    return idCareer.value(0).toUInt() + 1;
    }

void CrudAuthor::loadComboBoxCritery() {
    ui->cboCritery->addItem("Id autor");
    ui->cboCritery->addItem("Nombre de pila");
    ui->cboCritery->addItem("Apellido paterno");
    ui->cboCritery->addItem("Apellido materno");
    }

QString CrudAuthor::getRealValueCritery(const QString& critery) {
    if (critery == "Id autor") return "id";
    else if (critery == "Nombre de pila") return "nombre_pila";
    else if (critery == "Apellido paterno") return "apellido_paterno";
    return "apellido_materno";
    }

void CrudAuthor::searchAuthor(const QString& searchText) {
    QString critery(getRealValueCritery(ui->cboCritery->currentText()));
    QSqlQuery authorQuery;
    authorQuery.exec(QString("SELECT ID, APELLIDO_PATERNO AS 'APELLIDO PATERNO', "
                             "APELLIDO_MATERNO AS 'APELLIDO MATERNO', NOMBRE_PILA AS NOMBRE "
                             "FROM AUTORES WHERE %1 LIKE '%%2%';").arg(critery).arg(searchText));

    QSqlQueryModel *authorModel = new QSqlQueryModel;
    authorModel->setQuery(authorQuery);
    ui->tvQuery->setModel(authorModel);
    }

void CrudAuthor::startAuthorForUpdate() {
    if (!searchAuthorForUpdate()) {
        QMessageBox::critical(this, "Error", "No existe el ID de esa carrera en la base de datos");
        return;
        }
    ui->gbIdCareer->setEnabled(false);
    ui->gbAuthor->setEnabled(true);
    }

bool CrudAuthor::searchAuthorForUpdate() {
    unsigned int idAuthor(ui->lneIdAuthorQuery->text().toUInt());
    QSqlQuery authorForUpdate;
    authorForUpdate.exec(QString("SELECT NOMBRE_PILA, APELLIDO_PATERNO, APELLIDO_MATERNO FROM AUTORES WHERE ID = %1").arg(idAuthor));
    if (authorForUpdate.exec()) {
        authorForUpdate.next();
        if (!authorForUpdate.isNull(0)) {
            ui->lneFirstNameUpdate->setText(authorForUpdate.value(0).toString());
            ui->lneFatherLastNameUpdate->setText(authorForUpdate.value(1).toString());
            ui->lneMotherLastNameUpdate->setText(authorForUpdate.value(2).toString());
            return true;
            }
        }
    return false;
    }

void CrudAuthor::clearTabQuery() {
    ui->lneIdAuthorQuery->clear();
    ui->lneFirstNameUpdate->clear();
    ui->lneFatherLastNameUpdate->clear();
    ui->lneMotherLastNameUpdate->clear();
    }

void CrudAuthor::startUpdate() {
    try {
        updateAuthor();
        QMessageBox::information(this, "Registro actualizado", "El autor ha sido actualizada en la base de datos.");
        }
    catch(std::invalid_argument ex) {
        QMessageBox::critical(this, "Error", ex.what());
        }
    clearTabQuery();
    ui->gbAuthor->setEnabled(false);
    ui->gbIdCareer->setEnabled(true);
    }

void CrudAuthor::updateAuthor() {
    Author newAuthor(ui->lneIdAuthorQuery->text().toUInt(), ui->lneFatherLastNameUpdate->text().toUpper(),
                     ui->lneMotherLastNameUpdate->text().toUpper(), ui->lneFirstNameUpdate->text().toUpper());
    QSqlQuery updateCareer;
    updateCareer.prepare("UPDATE AUTORES SET NOMBRE_PILA = :nom, APELLIDO_PATERNO = :app, APELLIDO_MATERNO = :apm "
                         "WHERE ID = :id;");
    updateCareer.bindValue(":nom", newAuthor.getFirstName());
    updateCareer.bindValue(":app", newAuthor.getFatherLastName());
    updateCareer.bindValue(":apm", newAuthor.getMotherLastName());
    updateCareer.bindValue(":id", newAuthor.getIdAuthor());
    updateCareer.exec();
    }

void CrudAuthor::on_lneCritery_textChanged(const QString& value) {
    searchAuthor(value);
    }

void CrudAuthor::on_pbSearch_clicked() {
    startAuthorForUpdate();
    }

void CrudAuthor::on_pbUpdate_clicked() {
    startUpdate();
    searchAuthor("");
    }

void CrudAuthor::on_pbInsert_clicked() {
    startInsert();
    setIdAuthor();
    searchAuthor("");
    }
