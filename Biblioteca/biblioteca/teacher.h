#ifndef TEACHER_H
#define TEACHER_H

#include <QString>
#include "user.h"

class Teacher : public User {
    public:
        Teacher();

        QString getPassword() const;
        void setPassword(const QString &value);

        QString getFirstDate() const;
        void setFirstDate(const QString &value);

        QString getLastDate() const;
        void setLastDate(const QString &value);

private:
        QString password;
        QString firstDate;
        QString lastDate;
    };

#endif // TEACHER_H
