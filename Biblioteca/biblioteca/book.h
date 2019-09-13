#ifndef BOOK_H
#define BOOK_H

#include <QString>
#include <QList>

class Book {
    public:
        Book();
        QString getISBN() const;
        void setISBN(const QString &value);

        unsigned int getTotalPage() const;
        void setTotalPage(unsigned int value);

        unsigned int getIdGenero() const;
        void setIdGenero(unsigned int value);

        unsigned int getIdFormate() const;
        void setIdFormate(unsigned int value);

        unsigned int getIdPublisher() const;
        void setIdPublisher(unsigned int value);

        QList<QString> getWriters() const;
        void setWriters(const QList<QString> &value);

        unsigned int getExistences() const;
        void setExistences(unsigned int value);

        QString getTitle() const;
        void setTitle(const QString &value);

        unsigned int getEdition() const;
        void setEdition(unsigned int value);

private:
        QString ISBN;
        unsigned int edition;
        QString title;
        unsigned int totalPage;
        unsigned int idGenero;
        unsigned int idFormate;
        unsigned int idPublisher;
        QList<QString> writers;
        unsigned int existences;
    };

#endif // BOOK_H
