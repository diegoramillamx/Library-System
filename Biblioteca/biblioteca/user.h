#ifndef USER_H
#define USER_H

#include <QString>

class User {
    public:
        User();
        QString getFatherLastName() const;
        void setFatherLastName(const QString &value);

        QString getMotherLastName() const;
        void setMotherLastName(const QString &value);

        QString getFirstName() const;
        void setFirstName(const QString &value);

        QString getStreet() const;
        void setStreet(const QString &value);

        unsigned int getHomeNumber() const;
        void setHomeNumber(unsigned int value);

        QString getColony() const;
        void setColony(const QString &value);

        QString getPostalCode() const;
        void setPostalCode(const QString &value);

        QString getCity() const;
        void setCity(const QString &value);

        QString getCellphone() const;
        void setCellphone(const QString &value);

        unsigned int getUserId() const;
        void setUserId(unsigned int value);

private:
        unsigned int userId;
        QString fatherLastName;
        QString motherLastName;
        QString firstName;
        QString street;
        unsigned int homeNumber;
        QString colony;
        QString postalCode;
        QString city;
        QString cellphone;
    };

#endif // USER_H
