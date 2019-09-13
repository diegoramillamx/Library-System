#include "crudteacher.h"
#include "ui_crudteacher.h"

#include <QException>
#include <QMessageBox>
#include <QDate>
#include <QDebug>
#include <QSqlError>
#include <QSqlQueryModel>

#include <stdexcept>

using namespace std;

CrudTeacher::CrudTeacher(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CrudTeacher) {
    ui->setupUi(this);

    libraryDatabase = QSqlDatabase::database();
    loadComboBoxCritery();
    makeQueryForTeachers("");
    }

CrudTeacher::~CrudTeacher() {
    delete ui;
    }

void CrudTeacher::on_pbInsert_clicked() {
    try {
        Teacher newTeacher;
        startInsertTeacher(newTeacher);
        insertTeacher(newTeacher);
        clearTabInsert();
        QMessageBox::information(this, "Registro guardado", "El registro ha sido guardado en la base de datos.");
        }
    catch (std::invalid_argument ex) {
        QMessageBox::critical(this, "Error", ex.what());
        }
    }

void CrudTeacher::on_lneSearch_textChanged(const QString &value) {
    makeQueryForTeachers(value);
    }

void CrudTeacher::on_pbUpdate_clicked() {
    importDataFromTeacher();
    }

void CrudTeacher::on_pbInsertUdpate_clicked() {
    try {
        Teacher updTeacher;
        startUpdateTeacher(updTeacher);
        updateTeacher(updTeacher);
        QMessageBox::information(this, "Registro guardado", "El registro ha sido actualizado en la base de datos.");
        changeEnable();
        }
    catch (std::invalid_argument ex) {
        QMessageBox::critical(this, "Error", ex.what());
        }
    }

void CrudTeacher::loadComboBoxCritery() {
    ui->cboCriteries->addItem("Código");
    ui->cboCriteries->addItem("Apellido paterno");
    ui->cboCriteries->addItem("Apellido materno");
    ui->cboCriteries->addItem("Nombre");
    ui->cboCriteries->addItem("Ciudad");
    }

QString CrudTeacher::getRealValueFromComboBox(const QString& value) {
    if (value == "Código") return "codigo";
    else if (value == "Apellido paterno") return "apellido_paterno";
    else if (value == "Apellido materno") return "apellido_materno";
    else if (value == "Nombre") return "nombre_pila";
    return "ciudad";
    }

unsigned int CrudTeacher::getNextIdTeacher() {
    QSqlQuery idQuery("SELECT MAX(CODIGO) FROM USUARIOS");
    idQuery.exec();
    idQuery.next();
    return idQuery.value(0).toUInt() + 1;
    }

void CrudTeacher::startInsertTeacher(Teacher& newTeacher) {
    if (ui->lnePassword->text() != ui->lneConfirmPassword->text()) {
        QMessageBox::critical(this, "Error", "Las contraseñas no son iguales.");
        return;
        }

    try {
        QDate date;
        newTeacher.setUserId(getNextIdTeacher());
        newTeacher.setFirstName(ui->lneFirsName->text());
        newTeacher.setFatherLastName(ui->lneFatherLastName->text());
        newTeacher.setMotherLastName(ui->lneMotherLastName->text());
        newTeacher.setStreet(ui->lneStreet->text());
        newTeacher.setHomeNumber(ui->lneStreetNumber->text().toUInt());
        newTeacher.setColony(ui->lneColony->text());
        newTeacher.setCity(ui->lneCity->text());
        newTeacher.setPostalCode(ui->lnePostalCode->text());
        newTeacher.setCellphone(ui->lneCellphone->text());
        newTeacher.setPassword(ui->lnePassword->text());
        newTeacher.setFirstDate(date.currentDate().toString("yyyy-MM-dd"));
        }
    catch (invalid_argument ex) {
        throw std::invalid_argument(ex.what());
        }
    }

void CrudTeacher::insertTeacher(const Teacher& teacher) {
    QSqlQuery insertData;
    insertData.prepare("INSERT INTO USUARIOS VALUES (:cod, :app, :apm, :name, :numc, :cal, :col, :codp, :ciu, :tel);");
    insertData.bindValue(":cod", teacher.getUserId());
    insertData.bindValue(":app", teacher.getFatherLastName().toUpper());
    insertData.bindValue(":apm", teacher.getMotherLastName().toUpper());
    insertData.bindValue(":name", teacher.getFirstName().toUpper());
    insertData.bindValue(":numc", teacher.getHomeNumber());
    insertData.bindValue(":cal", teacher.getStreet().toUpper());
    insertData.bindValue(":col", teacher.getColony().toUpper());
    insertData.bindValue(":codp", teacher.getPostalCode());
    insertData.bindValue(":ciu", teacher.getCity().toUpper());
    insertData.bindValue(":tel", teacher.getCellphone());

    if (insertData.exec()) insertAdministrador(teacher);
    else throw invalid_argument("No se pudo registrar el maestro/administrador en la base de datos");
    }

void CrudTeacher::insertAdministrador(const Teacher& teacher) {
    QSqlQuery insertData;
    insertData.prepare("INSERT INTO ADMINISTRADORES VALUES (:id, MD5(SHA1(:pas)), :dat, '2019-12-31')");
    insertData.bindValue(":id", teacher.getUserId());
    insertData.bindValue(":pas", teacher.getPassword());
    insertData.bindValue(":dat", teacher.getFirstDate());
    insertData.exec();
    }

void CrudTeacher::makeQueryForTeachers(const QString& value) {
    QString critery(getRealValueFromComboBox(ui->cboCriteries->currentText()));
    QSqlQuery queryForTeacher;
    queryForTeacher.exec(QString("SELECT CODIGO AS CÓDIGO, APELLIDO_PATERNO AS 'APELLIDO PATERNO', APELLIDO_MATERNO AS 'APELLIDO MATERNO', "
                                 "NOMBRE_PILA AS NOMBRE, NUM_CALLE AS 'NÚMERO DE CALLE', CALLE, COLONIA, CODIGO_POSTAL AS 'CÓDIGO POSTAL', CIUDAD, TELEFONO, "
                                 "FECHA_INICIO AS 'FECHA INICIO', FECHA_FIN AS 'FECHA_FIN' FROM USUARIOS INNER JOIN ADMINISTRADORES ON "
                                 "USUARIOS.CODIGO = ADMINISTRADORES.USUARIO_CODIGO WHERE %1 LIKE '%%2%';").arg(critery).arg(value));
    QSqlQueryModel *queryModel = new QSqlQueryModel;
    queryModel->setQuery(queryForTeacher);
    ui->tvQuery->setModel(queryModel);
    }

void CrudTeacher::importDataFromTeacher() {
    unsigned int idTeacher(ui->lneIdUdpate->text().toUInt());
    QSqlQuery dataFromTeacher;
    dataFromTeacher.prepare("SELECT nombre_pila, apellido_paterno, apellido_materno, calle, num_calle, colonia, "
                            "codigo_postal, ciudad, telefono FROM USUARIOS INNER JOIN ADMINISTRADORES ON USUARIOS.CODIGO = "
                            "ADMINISTRADORES.USUARIO_CODIGO WHERE CODIGO = :code;");
    dataFromTeacher.bindValue(":code", idTeacher);
    if (dataFromTeacher.exec()) {
        dataFromTeacher.next();
        if (!dataFromTeacher.isNull(0)) {
            putInformationOnTheView(dataFromTeacher);
            ui->gbId->setEnabled(false);
            ui->gbUpdate->setEnabled(true);
            }
        }
    }

void CrudTeacher::putInformationOnTheView(QSqlQuery& information) {
    ui->lneFirsNameUdpate->setText(information.value(0).toString());
    ui->lneFatherLastNameUdpate->setText(information.value(1).toString());
    ui->lneMotherLastNameUdpate->setText(information.value(2).toString());
    ui->lneStreetUdpate->setText(information.value(3).toString());
    ui->lneStreetNumberUdpate->setText(information.value(4).toString());
    ui->lneColonyUdpate->setText(information.value(5).toString());
    ui->lnePostalCodeUdpate->setText(information.value(6).toString());
    ui->lneCityUdpate->setText(information.value(7).toString());
    ui->lneCellphoneUdpate->setText(information.value(8).toString());
    }

void CrudTeacher::startUpdateTeacher(Teacher& newTeacher) {
    try {
        newTeacher.setFirstName(ui->lneFirsNameUdpate->text().toUpper());
        newTeacher.setFatherLastName(ui->lneFatherLastNameUdpate->text().toUpper());
        newTeacher.setMotherLastName(ui->lneMotherLastNameUdpate->text().toUpper());
        newTeacher.setStreet(ui->lneStreetUdpate->text().toUpper());
        newTeacher.setHomeNumber(ui->lneStreetNumberUdpate->text().toUInt());
        newTeacher.setColony(ui->lneColonyUdpate->text().toUpper());
        newTeacher.setCity(ui->lneCityUdpate->text().toUpper());
        newTeacher.setPostalCode(ui->lnePostalCodeUdpate->text().toUpper());
        newTeacher.setCellphone(ui->lneCellphoneUdpate->text().toUpper());
        }
    catch (invalid_argument ex) {
        throw invalid_argument(ex.what());
        }
    }

void CrudTeacher::updateTeacher(const Teacher& updTeacher) {
    unsigned int userCode(ui->lneIdUdpate->text().toUInt());
    QSqlQuery updateQuery;
    updateQuery.prepare("UPDATE USUARIOS SET nombre_pila = :nom, apellido_paterno = :app, "
                        "apellido_materno = :apm, calle = :cal, num_calle = :num, "
                        "colonia = :col, codigo_postal = :pcod, ciudad = :city, telefono = :tele WHERE CODIGO = :code;");
    updateQuery.bindValue(":nom", updTeacher.getFirstName());
    updateQuery.bindValue(":app", updTeacher.getFatherLastName());
    updateQuery.bindValue(":apm", updTeacher.getMotherLastName());
    updateQuery.bindValue(":cal", updTeacher.getStreet());
    updateQuery.bindValue(":num", updTeacher.getHomeNumber());
    updateQuery.bindValue(":col", updTeacher.getColony());
    updateQuery.bindValue(":pcod", updTeacher.getPostalCode());
    updateQuery.bindValue(":city", updTeacher.getCity());
    updateQuery.bindValue(":tele", updTeacher.getCellphone());
    updateQuery.bindValue(":code", userCode);
    if (!updateQuery.exec()) {
        throw std::invalid_argument("No se pudo actualizar el registro.");
        }
    }

void CrudTeacher::clearTabUpdate() {
    ui->lneIdUdpate->clear();
    ui->lneFirsNameUdpate->clear();
    ui->lneFatherLastNameUdpate->clear();
    ui->lneMotherLastNameUdpate->clear();
    ui->lneStreetUdpate->clear();
    ui->lneStreetNumberUdpate->clear();
    ui->lneColonyUdpate->clear();
    ui->lnePostalCodeUdpate->clear();
    ui->lneCityUdpate->clear();
    ui->lneCellphoneUdpate->clear();
}

void CrudTeacher::changeEnable() {
    ui->gbId->setEnabled(true);
    ui->gbUpdate->setEnabled(false);
    clearTabUpdate();
    makeQueryForTeachers("");
    }

void CrudTeacher::clearTabInsert() {
    ui->lneFirsName->clear();
    ui->lneFatherLastName->clear();
    ui->lneMotherLastName->clear();
    ui->lneStreet->clear();
    ui->lneStreetNumber->clear();
    ui->lneColony->clear();
    ui->lnePostalCode->clear();
    ui->lneCellphone->clear();
    ui->lnePassword->clear();
    ui->lneConfirmPassword->clear();
    ui->lneCity->clear();
    }
