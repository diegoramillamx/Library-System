#include "career.h"

#include <QRegExp>

Career::Career() { }

Career::Career(unsigned int id, const QString &name) {
    try {
        setIdCareer(id);
        setName(name);
        }
    catch (std::invalid_argument ex) {
        throw std::invalid_argument(ex.what());
        }
    }

unsigned int Career::getIdCareer() const {
    return idCareer;
    }

void Career::setIdCareer(unsigned int value) {
    idCareer = value;
    }

QString Career::getName() const {
    return name;
    }

void Career::setName(const QString &value) {
    QRegExp exp("^[A-Za-z-Ñ]+(\\s[A-Za-z-Ñ]*)*$");

    if (exp.indexIn(value) == -1) {
        throw std::invalid_argument("La carrera contiene carácteres invalidos o está vacia");
        }

    name = value;
    }
