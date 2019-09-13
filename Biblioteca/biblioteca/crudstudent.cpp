#include "crudstudent.h"
#include "ui_crudstudent.h"

#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDebug>
#include <QSqlError>
#include <QMessageBox>
#include <stdexcept>

CrudStudent::CrudStudent(QWidget *parent) : QMainWindow(parent), ui(new Ui::CrudStudent) {
    ui->setupUi(this);
    database = QSqlDatabase::database("QMYSQL");
    loadDatabaseToComboBoxCareer();
    addItemsComboBoxCriteries();
    }

CrudStudent::~CrudStudent() {
    delete ui;
    }

void CrudStudent::on_lneFirsName_returnPressed() {
    ui->lneFatherLastName->setFocus();
    }

void CrudStudent::on_lneFatherLastName_returnPressed() {
    ui->lneMotherLastName->setFocus();
    }

void CrudStudent::on_lneMotherLastName_returnPressed() {
    ui->lneStreet->setFocus();
    }

void CrudStudent::on_lneStreet_returnPressed() {
    ui->lneStreetNumber->setFocus();
    }

void CrudStudent::on_lneStreetNumber_returnPressed() {
    ui->lneColony->setFocus();
    }

void CrudStudent::on_lneColony_returnPressed() {
    ui->lneCity->setFocus();
    }

void CrudStudent::on_lneCity_returnPressed() {
    ui->lnePostalCode->setFocus();
    }

void CrudStudent::on_lnePostalCode_returnPressed() {
    ui->lneCellphone->setFocus();
    }

void CrudStudent::on_lneCellphone_returnPressed() {
    //Anythin' yet.
    }

void CrudStudent::on_lneSearch_textChanged(const QString &textValue) {
    searchStudent(textValue);
    }

void CrudStudent::on_pbQuery_clicked() {
    whenQueryIsPressed();
    }

void CrudStudent::on_pbInsert_3_clicked() {
    try {
        startUpdateInformation();
        clearValuesOnQuery();
        ui->gbCodeQuery->setEnabled(true);
        ui->gbSecundaryQuery->setEnabled(false);
        QMessageBox::information(this, "Satisfactorio", "Registro actualizado de manera correcta.");
        }
    catch (std::invalid_argument ex) {
        QMessageBox::critical(this, "Error", ex.what());
        }
    }

void CrudStudent::on_lneFirsNameQuery_returnPressed() {
    ui->lneFatherLastNameQuery->setFocus();
    }

void CrudStudent::on_lneFatherLastNameQuery_returnPressed() {
    ui->lneMotherLastNameQuery->setFocus();
    }

void CrudStudent::on_lneMotherLastNameQuery_returnPressed() {
    ui->lneStreetQuery->setFocus();
    }

void CrudStudent::on_lneStreetQuery_returnPressed() {
    ui->lneStreetNumberQuery->setFocus();
    }

void CrudStudent::on_lneStreetNumberQuery_returnPressed() {
    ui->lneColonyQuery->setFocus();
    }

void CrudStudent::on_lneColonyQuery_returnPressed() {
    ui->lneCityQuery->setFocus();
    }

void CrudStudent::on_lneCityQuery_returnPressed() {
    ui->lnePostalCodeQuery->setFocus();
    }

void CrudStudent::on_lnePostalCodeQuery_returnPressed() {
    ui->lneCellphoneQuery->setFocus();
    }

void CrudStudent::on_lneCellphoneQuery_returnPressed() {

    }

void CrudStudent::loadDatabaseToComboBoxCareer() {
    QSqlQueryModel *modelForCareers = new QSqlQueryModel;
    QSqlQuery query("SELECT NOMBRE FROM CARRERAS");
    query.exec();
    modelForCareers->setQuery(query);
    ui->cboCareer->setModel(modelForCareers);
    }

void CrudStudent::on_pbInsert_pressed() {
    startInsert();
    }

void CrudStudent::startInsert() {
    try {
        Student newStudent;
        loadStudentDataToTheObject(newStudent);
        insertUser(newStudent);
        insertStudent(newStudent);
        QMessageBox::information(this, "Satisfactorio", "Registro guardado en la base de datos.");
        cleanScreen();
        }
    catch (std::invalid_argument ex) {
        QMessageBox::critical(this, "Error", ex.what());
        }
    }

void CrudStudent::loadStudentDataToTheObject(Student& newStudent) {
    try {
        newStudent.setUserId(getMaxIdFromUsers());
        newStudent.setFirstName(ui->lneFirsName->text().toUpper());
        newStudent.setFatherLastName(ui->lneFatherLastName->text().toUpper());
        newStudent.setMotherLastName(ui->lneMotherLastName->text().toUpper());
        newStudent.setStreet(ui->lneStreet->text().toUpper());
        newStudent.setHomeNumber(ui->lneStreetNumber->text().toUInt());
        newStudent.setCity(ui->lneCity->text().toUpper());
        newStudent.setColony(ui->lneColony->text().toUpper());
        newStudent.setPostalCode(ui->lnePostalCode->text().toUpper());
        newStudent.setIdCareer(getCareerId());
        newStudent.setCellphone(ui->lneCellphone->text().toUpper());
        }
    catch (std::invalid_argument ex) {
        throw std::invalid_argument(ex.what());
        }
    }

void CrudStudent::insertUser(Student& newStudent) {
    QSqlQuery insertData;
    insertData.prepare("INSERT INTO USUARIOS VALUES (:cod, :app, :apm, :name, :numc, :cal, :col, :codp, :ciu, :tel);");
    insertData.bindValue(":cod", newStudent.getUserId());
    insertData.bindValue(":app", newStudent.getFatherLastName());
    insertData.bindValue(":apm", newStudent.getMotherLastName());
    insertData.bindValue(":name", newStudent.getFirstName());
    insertData.bindValue(":numc", newStudent.getHomeNumber());
    insertData.bindValue(":cal", newStudent.getStreet());
    insertData.bindValue(":col", newStudent.getColony());
    insertData.bindValue(":codp", newStudent.getPostalCode());
    insertData.bindValue(":ciu", newStudent.getCity());
    insertData.bindValue(":tel", newStudent.getCellphone());
    if (!insertData.exec()) {
        throw std::invalid_argument("No se pudo registrar el estudiante: ");
        }
    }

void CrudStudent::insertStudent(Student& newStudent) {
    QSqlQuery insertData;
    insertData.prepare("INSERT INTO ESTUDIANTES VALUES (:id, :idc);");
    insertData.bindValue(":id", newStudent.getUserId());
    insertData.bindValue(":idc", newStudent.getIdCareer());
    insertData.exec();
    }

unsigned int CrudStudent::getCareerId() {
    QSqlQuery query;
    QString careerDescription(ui->cboCareer->currentText());
    query.exec(QString("SELECT ID FROM CARRERAS WHERE NOMBRE = '%1';").arg(careerDescription));
    query.next();
    return query.value(0).toUInt();
    }

unsigned int CrudStudent::getMaxIdFromUsers() {
    QSqlQuery query("SELECT MAX(CODIGO) FROM USUARIOS;");
    query.exec();
    query.next();
    return query.value(0).toUInt() + 1;
    }

void CrudStudent::searchStudent(const QString& text) {
    QSqlQueryModel *modelForTableView = new QSqlQueryModel;
    QSqlQuery myQuery;
    QString critery(ui->cboCriteries->currentText());
    myQuery.exec(QString("SELECT codigo as Código, apellido_paterno as 'Apellido Paterno', apellido_materno as 'Apellido Materno', "
                         "nombre_pila as Nombre, num_calle as 'Número de calle', calle as Calle, colonia as Colonia, "
                         "codigo_postal as 'Código postal', ciudad as Ciudad, telefono as Teléfono, "
                         "nombre as Carrera FROM usuarios INNER JOIN estudiantes ON usuarios.codigo = estudiantes.usuario_codigo "
                         "INNER JOIN carreras ON estudiantes.carrera_id = carreras.id "
                         "WHERE %1 LIKE '%%2%';").arg(getRealValueFromComboBoxCritery(critery)).arg(text));

    modelForTableView->setQuery(myQuery);
    ui->tvQuery->setModel(modelForTableView);
    }

void CrudStudent::getInformationOfStudent() {
    if (ui->lneCode->text().isEmpty()) return;

    try {
        int studentCode(ui->lneCode->text().toInt());
        QSqlQuery studentFromDatabase;
        studentFromDatabase.exec(QString("SELECT nombre_pila, apellido_paterno, apellido_materno, "
                                         "calle, num_calle, colonia, codigo_postal, ciudad, telefono "
                                         "FROM USUARIOS INNER JOIN ESTUDIANTES ON USUARIOS.CODIGO = ESTUDIANTES.USUARIO_CODIGO "
                                         "WHERE CODIGO = %1;").arg(studentCode));
        if (studentFromDatabase.exec()) {
            studentFromDatabase.next();
            if (!studentFromDatabase.isNull(0)) {
                putInformationIntoTheView(studentFromDatabase);
                ui->gbCodeQuery->setEnabled(false);
                ui->gbSecundaryQuery->setEnabled(true);
                }
            }
        }
    catch (std::invalid_argument ex) {
        throw ex.what();
        }
    }

void CrudStudent::putInformationIntoTheView(QSqlQuery& studentInfo) {
    ui->lneFirsNameQuery->setText(studentInfo.value(0).toString());
    ui->lneFatherLastNameQuery->setText(studentInfo.value(1).toString());
    ui->lneMotherLastNameQuery->setText(studentInfo.value(2).toString());
    ui->lneStreetQuery->setText(studentInfo.value(3).toString());
    ui->lneStreetNumberQuery->setText(studentInfo.value(4).toString());
    ui->lneColonyQuery->setText(studentInfo.value(5).toString());
    ui->lnePostalCodeQuery->setText(studentInfo.value(6).toString());
    ui->lneCityQuery->setText(studentInfo.value(7).toString());
    ui->lneCellphoneQuery->setText(studentInfo.value(8).toString());
    }

void CrudStudent::startUpdateInformation() {
    try {
        Student updStudent;
        updStudent.setFirstName(ui->lneFirsNameQuery->text());
        updStudent.setFatherLastName(ui->lneFatherLastNameQuery->text());
        updStudent.setMotherLastName(ui->lneMotherLastNameQuery->text());
        updStudent.setStreet(ui->lneStreetQuery->text());
        updStudent.setHomeNumber(ui->lneStreetNumberQuery->text().toUInt());
        updStudent.setColony(ui->lneColonyQuery->text());
        updStudent.setPostalCode(ui->lnePostalCodeQuery->text());
        updStudent.setCity(ui->lneCityQuery->text());
        updStudent.setCellphone(ui->lneCellphoneQuery->text());
        updateStudent(updStudent);
        }
    catch (std::invalid_argument ex) {
        throw ex.what();
        }
    }

void CrudStudent::updateStudent(const Student& updStudent) {
    unsigned int userCode(ui->lneCode->text().toUInt());
    QSqlQuery updateQuery;
    updateQuery.prepare("UPDATE USUARIOS SET nombre_pila = :nom, apellido_paterno = :app, "
                        "apellido_materno = :apm, calle = :cal, num_calle = :num, "
                        "colonia = :col, codigo_postal = :pcod, ciudad = :city, telefono = :tele WHERE CODIGO = :code;");
    updateQuery.bindValue(":nom", updStudent.getFirstName());
    updateQuery.bindValue(":app", updStudent.getFatherLastName());
    updateQuery.bindValue(":apm", updStudent.getMotherLastName());
    updateQuery.bindValue(":cal", updStudent.getStreet());
    updateQuery.bindValue(":num", updStudent.getHomeNumber());
    updateQuery.bindValue(":col", updStudent.getColony());
    updateQuery.bindValue(":pcod", updStudent.getPostalCode());
    updateQuery.bindValue(":city", updStudent.getCity());
    updateQuery.bindValue(":tele", updStudent.getCellphone());
    updateQuery.bindValue(":code", userCode);
    if (!updateQuery.exec()) {
        throw std::invalid_argument("No se pudo actualizar el registro.");
        }
    }

void CrudStudent::whenQueryIsPressed() {
    try {
        getInformationOfStudent();
        }
    catch (std::invalid_argument ex) {
        QMessageBox::critical(this, "Error", ex.what());
        }
    }

void CrudStudent::on_lneCode_returnPressed() {
    whenQueryIsPressed();
    }

void CrudStudent::addItemsComboBoxCriteries() {
    ui->cboCriteries->addItem("Código");
    ui->cboCriteries->addItem("Apellido paterno");
    ui->cboCriteries->addItem("Apellido materno");
    ui->cboCriteries->addItem("Nombre");
    ui->cboCriteries->addItem("Carrera");
    ui->cboCriteries->addItem("Ciudad");
    }

QString CrudStudent::getRealValueFromComboBoxCritery(QString& value) {
    if (value == "Código") return "codigo";
    else if (value == "Apellido paterno") return "apellido_paterno";
    else if (value == "Apellido materno") return "apellido_materno";
    else if (value == "Nombre") return "nombre_pila";
    else if (value == "Carrera") return "nombre";
    return "ciudad";
    }

void CrudStudent::cleanScreen() {
    ui->lneFirsName->clear();
    ui->lneFatherLastName->clear();
    ui->lneMotherLastName->clear();
    ui->lneStreet->clear();
    ui->lneStreetNumber->clear();
    ui->lneColony->clear();
    ui->lnePostalCode->clear();
    ui->lneCellphone->clear();
    ui->cboCareer->setCurrentIndex(0);
    }

void CrudStudent::clearValuesOnQuery() {
    ui->lneCode->clear();
    ui->lneFirsNameQuery->clear();
    ui->lneFatherLastNameQuery->clear();
    ui->lneMotherLastNameQuery->clear();
    ui->lneStreetQuery->clear();
    ui->lneStreetNumberQuery->clear();
    ui->lneColonyQuery->clear();
    ui->lnePostalCodeQuery->clear();
    ui->lneCityQuery->clear();
    ui->lneCellphoneQuery->clear();
    }


