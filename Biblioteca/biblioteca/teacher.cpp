#include "teacher.h"
#include <stdexcept>

#include <QRegExp>

Teacher::Teacher() { }

QString Teacher::getPassword() const {
    return password;
    }

void Teacher::setPassword(const QString &value) {
    QRegExp exp("^\\w+$");

    if (exp.indexIn(value) == -1) {
        throw std::invalid_argument("La contraseña contiene carácteres invalidos o está vacia");
        }

    password = value;
    }

QString Teacher::getFirstDate() const {
    return firstDate;
    }

void Teacher::setFirstDate(const QString &value) {
    firstDate = value;
    }

QString Teacher::getLastDate() const {
    return lastDate;
    }

void Teacher::setLastDate(const QString &value) {
    lastDate = value;
    }
