#ifndef STUDENT_H
#define STUDENT_H

#include <QString>
#include "user.h"

class Student : public User {
    public:
        Student();
        unsigned int getIdCareer() const;
        void setIdCareer(unsigned int value);

    private:
        unsigned int idCareer;
    };

#endif // STUDENT_H
