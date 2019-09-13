#include "loginbiblioteca.h"
#include "ui_loginbiblioteca.h"
#include <QMessageBox>
#include <QSqlError>
#include <qsqlquery.h>
#include "loadingwindow.h"
#include "userlogin.h"

LoginBiblioteca::LoginBiblioteca(QWidget *parent) : QMainWindow(parent), ui(new Ui::LoginBiblioteca) {
    ui->setupUi(this);
    database = QSqlDatabase::addDatabase("QMYSQL");
    database.setHostName("localhost");
    database.setDatabaseName("biblioteca_db");
    database.setPort(3306);
    database.setUserName("root");
    database.setPassword("RAMD6609058aa");
    isDatabaseConnected();
    }

LoginBiblioteca::~LoginBiblioteca() {
    delete ui;
    }

void LoginBiblioteca::on_leUsuario_returnPressed() {
    ui->lePassword->setFocus();
    }

void LoginBiblioteca::on_psbEntrar_clicked() {
    startLogIn();
    }

void LoginBiblioteca::on_lePassword_returnPressed() {
    startLogIn();
    }

void LoginBiblioteca::startLogIn() {
    UserLogin newUser(ui->leUsuario->text(), ui->lePassword->text());
    unsigned int usernameCode(newUser.getUser().toUInt());

    if (checkUserData(newUser)) openMainMenu(usernameCode);
    else printErrorMessage();
    }

void LoginBiblioteca::isDatabaseConnected() {
    if (!database.open()) {
        QMessageBox::critical(this, "Error", "Imposible conectarse a la base de datos.\n"
                                       "Se le recomienda contactar al administrador e indicar"
                                       "el siguiente error: \n" + database.lastError().text());
        }
    }

bool LoginBiblioteca::checkUserData(UserLogin& newUser) {
    QSqlQuery login;
    login.exec(QString("SELECT COUNT(*) FROM ADMINISTRADORES WHERE usuario_codigo = %1 AND "
                       "contrasena = MD5(SHA1('%2'))")
               .arg(newUser.getUser().toInt()).arg(newUser.getPassword()));
    login.next();
    return login.value(0).toInt();
    }

void LoginBiblioteca::openMainMenu(unsigned int& code) {
    LoadingWindow *newLoadingWindow = new LoadingWindow(code);
    this->close();
    newLoadingWindow->show();
    }

void LoginBiblioteca::printErrorMessage() {
    QMessageBox::critical(this, "Error", "Datos de usuario incorrectos.\n");
    clearAll();
    }

void LoginBiblioteca::clearAll() {
    ui->leUsuario->clear();
    ui->lePassword->clear();
    ui->leUsuario->setFocus();
    }
