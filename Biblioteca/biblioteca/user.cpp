#include "user.h"
#include <stdexcept>
#include <QRegExp>

User::User() { }

QString User::getFatherLastName() const {
    return fatherLastName;
    }

void User::setFatherLastName(const QString &value) {

    QRegExp exp("^[A-Za-z-Ñ]+$");

    if (exp.indexIn(value) == -1) {
        throw std::invalid_argument("El apellido paterno contiene carácteres invalidos o está vacia");
        }

    fatherLastName = value;
    }

QString User::getMotherLastName() const {
    return motherLastName;
    }

void User::setMotherLastName(const QString &value) {

    QRegExp exp("^[A-Za-z-Ñ]+$");

    if (exp.indexIn(value) == -1) {
        throw std::invalid_argument("El apellido materno contiene carácteres invalidos o está vacia");
        }

    motherLastName = value;
    }

QString User::getFirstName() const {
    return firstName;
    }

void User::setFirstName(const QString &value) {

    QRegExp exp("^[A-Za-z-Ñ]+(\\s[A-Za-z-Ñ]*)*$");

    if (exp.indexIn(value) == -1) {
        throw std::invalid_argument("El nombre de pila contiene carácteres invalidos o está vacia");
        }

    firstName = value;
    }

QString User::getStreet() const {
    return street;
    }

void User::setStreet(const QString &value) {

    QRegExp exp("^[A-Za-z-Ñ]+(\\s[A-Za-z-Ñ]*)*$");

    if (exp.indexIn(value) == -1) {
        throw std::invalid_argument("La calle contiene carácteres invalidos o está vacia");
        }

    street = value;
    }

unsigned int User::getHomeNumber() const {
    return homeNumber;
    }

void User::setHomeNumber(unsigned int value) {
    homeNumber = value;
    }

QString User::getColony() const {
    return colony;
    }

void User::setColony(const QString &value) {

    QRegExp exp("^[A-Za-z-Ñ]+(\\s[A-Za-z-Ñ]*)*$");

    if (exp.indexIn(value) == -1) {
        throw std::invalid_argument("La colonia contiene carácteres invalidos o está vacia");
        }

    colony = value;
    }

QString User::getPostalCode() const {
    return postalCode;
    }

void User::setPostalCode(const QString &value) {
    QRegExp expresion("^[0-9]{5}$");

    if (expresion.indexIn(value) == -1) {
        throw std::invalid_argument("El código postal debe de contener solo números y deben de ser 5 "
                                    "cáracteres obligatoriamente.");
        }

    postalCode = value;
    }

QString User::getCity() const {
    return city;
    }

void User::setCity(const QString &value) {

    QRegExp exp("^[A-Za-z-Ñ]+(\\s[A-Za-z-Ñ]*)*$");

    if (exp.indexIn(value) == -1) {
        throw std::invalid_argument("La ciudad contiene carácteres invalidos o está vacia");
        }

    city = value;
    }

QString User::getCellphone() const {
    return cellphone;
    }

void User::setCellphone(const QString &value) {

    QRegExp expresion("^[0-9]{10}$");


    if (expresion.indexIn(value) == -1) {
        throw std::invalid_argument("El telefono debe de contener solo números y deben de ser 10"
                                    " obligatoriamente.");
        }

    cellphone = value;
    }

unsigned int User::getUserId() const {
    return userId;
    }

void User::setUserId(unsigned int value) {
    userId = value;
    }
