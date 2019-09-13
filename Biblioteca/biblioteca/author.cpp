#include "author.h"

#include <QRegExp>

Author::Author() {}

Author::Author(unsigned int id, const QString& father, const QString& mother, const QString& first) {
    try {
        setIdAuthor(id);
        setFatherLastName(father);
        setMotherLastName(mother);
        setFirstName(first);
        }
    catch (std::invalid_argument ex) {
        throw std::invalid_argument(ex.what());
        }
    }

QString Author::getFatherLastName() const {
    return fatherLastName;
    }

void Author::setFatherLastName(const QString &value) {

    QRegExp exp("^[A-Za-z-Ñ]+$");

    if (exp.indexIn(value) == -1) {
        throw std::invalid_argument("El apellido paterno contiene carácteres invalidos o está vacia");
        }

    fatherLastName = value;
    }

QString Author::getMotherLastName() const {
    return motherLastName;
    }

void Author::setMotherLastName(const QString &value) {

    QRegExp exp("^[A-Za-z-Ñ]*$");

    if (exp.indexIn(value) == -1) {
        throw std::invalid_argument("El apellido materno contiene carácteres invalidos o está vacia");
        }


    motherLastName = value;
    }

QString Author::getFirstName() const {
    return firstName;
    }

void Author::setFirstName(const QString &value) {

    QRegExp exp("^[A-Za-z-Ñ]+(\\s[A-Za-z-Ñ]*)*$");

    if (exp.indexIn(value) == -1) {
        throw std::invalid_argument("El nombre de pila contiene carácteres invalidos o está vacia");
        }

    firstName = value;
}

unsigned int Author::getIdAuthor() const
{
    return idAuthor;
}

void Author::setIdAuthor(unsigned int value)
{
    idAuthor = value;
}
