#ifndef AUTHOR_H
#define AUTHOR_H

#include <QString>

class Author {
    public:
        Author();
        Author(unsigned int,
               const QString&,
               const QString&,
               const QString&);
        QString getFatherLastName() const;
        void setFatherLastName(const QString &value);

        QString getMotherLastName() const;
        void setMotherLastName(const QString &value);

        QString getFirstName() const;
        void setFirstName(const QString &value);

        unsigned int getIdAuthor() const;
        void setIdAuthor(unsigned int value);

private:
        unsigned int idAuthor;
        QString fatherLastName;
        QString motherLastName;
        QString firstName;
    };

#endif // AUTHOR_H
