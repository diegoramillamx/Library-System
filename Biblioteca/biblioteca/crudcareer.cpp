#include "crudcareer.h"
#include "ui_crudcareer.h"

#include <QMessageBox>
#include <QSqlQueryModel>

#include "career.h"

CrudCareer::CrudCareer(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CrudCareer) {
    ui->setupUi(this);

    libraryDatabase = QSqlDatabase::database();
    setIdCareer();
    loadComboBoxCritery();
    }

CrudCareer::~CrudCareer() {
    delete ui;
    }

void CrudCareer::on_pbInsert_clicked() {
    startInsert();
    setIdCareer();
    }

void CrudCareer::setIdCareer() {
    ui->lneIdCareer->setText(QString::number(getIdCareer()));
    }

void CrudCareer::startInsert() {
    try {
        insertCareer();
        QMessageBox::information(this, "Satisfactorio", "Registro insertado en la base de datos.");
        }
    catch (std::invalid_argument ex) {
        QMessageBox::critical(this, "Error", ex.what());
        }
    clearTabInsert();
    }

void CrudCareer::insertCareer() {
    Career newCareer(ui->lneIdCareer->text().toUInt(),
                     ui->lneCareer->text().toUpper());
    QSqlQuery insertCareer;
    insertCareer.prepare("INSERT INTO CARRERAS VALUES (:id, :car)");
    insertCareer.bindValue(":id", newCareer.getIdCareer());
    insertCareer.bindValue(":car", newCareer.getName());
    insertCareer.exec();
    }

void CrudCareer::clearTabInsert() {
    ui->lneIdCareer->clear();
    ui->lneCareer->clear();
    }

unsigned int CrudCareer::getIdCareer() {
    QSqlQuery idCareer("SELECT MAX(ID) FROM CARRERAS");
    idCareer.exec();
    idCareer.next();
    return idCareer.value(0).toUInt() + 1;
    }

void CrudCareer::loadComboBoxCritery() {
    ui->cboCritery->addItem("Id carrera");
    ui->cboCritery->addItem("Carrera");
    }

QString CrudCareer::getRealValueCritery(const QString& critery) {
    if (critery == "Id carrera") return "id";
    return "nombre";
    }

void CrudCareer::searchCareer(const QString& searchText) {
    QString critery(ui->cboCritery->currentText());
    QSqlQuery careerQuery;
    careerQuery.exec(QString("SELECT ID, NOMBRE AS CARRERA FROM CARRERAS WHERE %1 LIKE '%%2%';")
                     .arg(getRealValueCritery(critery)).arg(searchText));

    QSqlQueryModel *careerModel = new QSqlQueryModel;
    careerModel->setQuery(careerQuery);
    ui->tvQuery->setModel(careerModel);
}

void CrudCareer::startCareerForUpdate() {
    if (!searchCareerForUpdate()) {
        QMessageBox::critical(this, "Error", "No existe el ID de esa carrera en la base de datos");
        return;
        }
    ui->gbIdCareer->setEnabled(false);
    ui->gbCareer->setEnabled(true);
    }

bool CrudCareer::searchCareerForUpdate() {
    unsigned int idCareer(ui->lneIdQuery->text().toUInt());
    QSqlQuery careerForUpdate;
    careerForUpdate.exec(QString("SELECT NOMBRE FROM CARRERAS WHERE ID = %1").arg(idCareer));
    if (careerForUpdate.exec()) {
        careerForUpdate.next();
        if (!careerForUpdate.isNull(0)) {
            ui->lneCareerQuery->setText(careerForUpdate.value(0).toString());
            return true;
            }
        }
    return false;
    }

void CrudCareer::clearTabQuery() {
    ui->lneIdQuery->clear();
    ui->lneCareerQuery->clear();
    }

void CrudCareer::startUpdate() {
    try {
        updateCareer();
        QMessageBox::information(this, "Satisfactorio", "Registro actualizado en la base de datos");
        }
    catch (std::invalid_argument ex) {
        QMessageBox::critical(this, "Error", ex.what());
        }
    clearTabQuery();
    ui->gbCareer->setEnabled(false);
    ui->gbIdCareer->setEnabled(true);
    }

void CrudCareer::updateCareer() {
    Career newCareer(ui->lneIdQuery->text().toUInt(),
                     ui->lneCareerQuery->text().toUpper());
    QSqlQuery updateCareer;
    updateCareer.prepare("UPDATE CARRERAS SET NOMBRE = :nom WHERE ID = :id;");
    updateCareer.bindValue(":nom", newCareer.getName());
    updateCareer.bindValue(":id", newCareer.getIdCareer());
    updateCareer.exec();
    }

void CrudCareer::on_lneCritery_textChanged(const QString &searchText) {
    searchCareer(searchText);
    }

void CrudCareer::on_pbSearch_clicked() {
    startCareerForUpdate();
    }

void CrudCareer::on_pbUpdate_clicked() {
    startUpdate();
    }
