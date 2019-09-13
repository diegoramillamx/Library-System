#include "book.h"
#include <QRegExp>

Book::Book() { }

QString Book::getISBN() const {
    return ISBN;
    }

void Book::setISBN(const QString &value) {

    QRegExp exp("^[0-9]+([0-9]|-)*$");

    if (exp.indexIn(value) == -1) {
        throw std::invalid_argument("El ISBN contiene carácteres invalidos o está vacia");
        }

    ISBN = value;
    }

unsigned int Book::getTotalPage() const {
    return totalPage;
    }

void Book::setTotalPage(unsigned int value) {
    totalPage = value;
    }

unsigned int Book::getIdGenero() const {
    return idGenero;
    }

void Book::setIdGenero(unsigned int value) {
    idGenero = value;
    }

unsigned int Book::getIdFormate() const {
    return idFormate;
    }

void Book::setIdFormate(unsigned int value) {
    idFormate = value;
    }

unsigned int Book::getIdPublisher() const {
    return idPublisher;
    }

void Book::setIdPublisher(unsigned int value) {
    idPublisher = value;
    }

QList<QString> Book::getWriters() const {
    return writers;
    }

void Book::setWriters(const QList<QString> &value) {
    writers = value;
    }

unsigned int Book::getExistences() const {
    return existences;
    }

void Book::setExistences(unsigned int value) {
    existences = value;
    }

QString Book::getTitle() const {
    return title;
    }

void Book::setTitle(const QString &value) {
    QRegExp exp("^[A-Za-z0-9-Ñ]+(\\s[A-Za-z0-9-Ñ]*)*$");

    if (exp.indexIn(value) == -1) {
        throw std::invalid_argument("El título contiene carácteres invalidos o está vacia");
        }

    title = value;
    }

unsigned int Book::getEdition() const {
    return edition;
    }

void Book::setEdition(unsigned int value) {
    edition = value;
    }
