#ifndef PUBLISHER_H
#define PUBLISHER_H

#include <QString>

class Publisher {
    public:
        Publisher();
        Publisher(unsigned int, const QString&);
        unsigned int getIdPublisher() const;
        void setIdPublisher(unsigned int value);

        QString getName() const;
        void setName(const QString &value);

private:
        unsigned int idPublisher;
        QString name;
    };

#endif // PUBLISHER_H
