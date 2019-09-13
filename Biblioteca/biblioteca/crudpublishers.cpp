#include "crudpublishers.h"
#include "ui_crudpublishers.h"

#include <QMessageBox>
#include "publisher.h"

CrudPublishers::CrudPublishers(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CrudPublishers) {
    ui->setupUi(this);

    publishersDatabase = QSqlDatabase::database();
    setIdPublishers();
    loadComboBoxCritery();
    searchPublishers("");
    }

CrudPublishers::~CrudPublishers() {
    delete ui;
    }

void CrudPublishers::on_pbInsert_clicked() {
    startInsert();
    setIdPublishers();
    searchPublishers("");
    }

void CrudPublishers::on_lneCritery_textChanged(const QString &value) {
    searchPublishers(value);
    }

void CrudPublishers::on_pbSearch_clicked() {
    startPublishersForUpdate();
    }

void CrudPublishers::on_pbUpdate_clicked() {
    startUpdate();
    searchPublishers("");
    }

void CrudPublishers::setIdPublishers() {
    ui->lneIdPublishers->setText(QString::number(getIdPublishers()));
    }

void CrudPublishers::startInsert() {
    try {
        insertPublishers();
        QMessageBox::information(this, "Registro insertado",
                                 "El registro ha sido insertado en la base de datos correctamente.");
        }
    catch (std::invalid_argument ex) {
        QMessageBox::critical(this, "Error", ex.what());
        }
    clearTabInsert();
    }

void CrudPublishers::insertPublishers() {
    Publisher newPublisher(ui->lneIdPublishers->text().toUInt(),
                           ui->lnePublishers->text().toUpper());
    QSqlQuery insertPublisher;
    insertPublisher.prepare("INSERT INTO EDITORIALES VALUES (:id, :nom)");
    insertPublisher.bindValue(":id", newPublisher.getIdPublisher());
    insertPublisher.bindValue(":nom", newPublisher.getName());
    insertPublisher.exec();
    }

void CrudPublishers::clearTabInsert() {
    ui->lneIdPublishers->clear();
    ui->lnePublishers->clear();
    }

unsigned int CrudPublishers::getIdPublishers() {
    QSqlQuery idPublisher("SELECT MAX(ID) FROM EDITORIALES");
    idPublisher.exec();
    idPublisher.next();
    return idPublisher.value(0).toUInt() + 1;
    }

void CrudPublishers::loadComboBoxCritery() {
    ui->cboCritery->addItem("Id editorial");
    ui->cboCritery->addItem("Editorial");
    }

QString CrudPublishers::getRealValueCritery(const QString& critery) {
    if (critery == "Id editorial") return "id";
    return "nombre";
    }

void CrudPublishers::searchPublishers(const QString& searchText)  {
    QString critery(getRealValueCritery(ui->cboCritery->currentText()));
    QSqlQuery publisherQuery;
    publisherQuery.exec(QString("SELECT ID, NOMBRE AS EDITORIAL FROM EDITORIALES WHERE %1 LIKE '%%2%';")
                     .arg(critery).arg(searchText));

    QSqlQueryModel *publisherModel = new QSqlQueryModel;
    publisherModel->setQuery(publisherQuery);
    ui->tvQuery->setModel(publisherModel);
    }

void CrudPublishers::startPublishersForUpdate() {
    if (!searchPublishersForUpdate()) {
        QMessageBox::critical(this, "Error", "No existe el ID de ese editorial en la base de datos");
        return;
        }
    ui->gbIdCareer->setEnabled(false);
    ui->gbCareer->setEnabled(true);
    }

bool CrudPublishers::searchPublishersForUpdate() {
    unsigned int idPublisher(ui->lneIdPublishersUpdate->text().toUInt());
    QSqlQuery careerForUpdate;
    careerForUpdate.exec(QString("SELECT NOMBRE FROM EDITORIALES WHERE ID = %1").arg(idPublisher));
    if (careerForUpdate.exec()) {
        careerForUpdate.next();
        if (!careerForUpdate.isNull(0)) {
            ui->lnePublishersUpdate->setText(careerForUpdate.value(0).toString());
            return true;
            }
        }
    return false;
    }

void CrudPublishers::clearTabQuery() {
    ui->lneIdPublishersUpdate->clear();
    ui->lnePublishersUpdate->clear();
    }

void CrudPublishers::startUpdate() {
    try {
        updatePublishers();
        QMessageBox::information(this, "Registro actualizado",
                                 "El editorial ha sido actualizada en la base de datos.");
        }
    catch (std::invalid_argument ex) {
        QMessageBox::critical(this, "Error", ex.what());
        }
    clearTabQuery();
    ui->gbCareer->setEnabled(false);
    ui->gbIdCareer->setEnabled(true);
    }

void CrudPublishers::updatePublishers() {
    Publisher newPublisher(ui->lneIdPublishersUpdate->text().toUInt(),
                           ui->lnePublishersUpdate->text().toUpper());
    QSqlQuery updatePublisher;
    updatePublisher.prepare("UPDATE EDITORIALES SET NOMBRE = :nom WHERE ID = :id;");
    updatePublisher.bindValue(":nom", newPublisher.getIdPublisher());
    updatePublisher.bindValue(":id", newPublisher.getName());
    updatePublisher.exec();
    }
