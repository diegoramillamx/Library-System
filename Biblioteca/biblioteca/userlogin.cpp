#include "userlogin.h"

#include <QRegExp>

UserLogin::UserLogin() { }

UserLogin::UserLogin(const QString& _user, const QString& _password) {
    try {
        setUser(_user);
        setPassword(_password);
        }
    catch (std::invalid_argument ex) {
        throw std::invalid_argument(ex.what());
        }
    }

QString UserLogin::getPassword() const {
    return password;
    }

void UserLogin::setPassword(const QString &value) {
    QRegExp exp("^\\w+$");

    if (exp.indexIn(value) == -1) {
        throw std::invalid_argument("La contraseña contiene carácteres invalidos o está vacia");
        }

    password = value;
    }

QString UserLogin::getUser() const {
    return user;
    }

void UserLogin::setUser(const QString &value) {
    QRegExp exp("^[0-9]+$");

    if (exp.indexIn(value) == -1) {
        throw std::invalid_argument ("El usuario sólo puede contener números o está vacio");
        }

    user = value;
    }
