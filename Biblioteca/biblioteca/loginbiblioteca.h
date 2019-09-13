#ifndef LOGINBIBLIOTECA_H
#define LOGINBIBLIOTECA_H

#include <QMainWindow>
#include <QSqlDatabase>

#include "userlogin.h"

namespace Ui {
    class LoginBiblioteca;
    }

class LoginBiblioteca : public QMainWindow {
    Q_OBJECT

public:
    explicit LoginBiblioteca(QWidget *parent = nullptr);
    ~LoginBiblioteca();

private slots:
    void on_leUsuario_returnPressed();
    void on_psbEntrar_clicked();

    void on_lePassword_returnPressed();

private:
    Ui::LoginBiblioteca *ui;
    QSqlDatabase database;
    void isDatabaseConnected();
    void startLogIn();
    bool checkUserData(UserLogin&);
    void openMainMenu(unsigned int&);
    void printErrorMessage();
    void clearAll();
    };

#endif // LOGINBIBLIOTECA_H
