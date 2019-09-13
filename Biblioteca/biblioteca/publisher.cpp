#include "publisher.h"

#include <QRegExp>

Publisher::Publisher() {}

Publisher::Publisher(unsigned int id, const QString& _name) {
    try {
        setIdPublisher(id);
        setName(_name);
        }
    catch (std::invalid_argument ex) {
        throw std::invalid_argument(ex.what());
        }
    }

unsigned int Publisher::getIdPublisher() const {
    return idPublisher;
    }

void Publisher::setIdPublisher(unsigned int value) {
    idPublisher = value;
    }

QString Publisher::getName() const {
    return name;
    }

void Publisher::setName(const QString &value) {
    QRegExp exp("^[A-Za-z0-9-Ñ]+(\\s[A-Za-z0-9-Ñ]*)*$");

    if (exp.indexIn(value) == -1) {
        throw std::invalid_argument("El editorial contiene carácteres invalidos o está vacia");
        }

    name = value;
    }
