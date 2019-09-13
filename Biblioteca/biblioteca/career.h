#ifndef CAREER_H
#define CAREER_H

#include <QString>

class Career {
    public:
        Career();
        Career(unsigned int id, const QString& name);

        unsigned int getIdCareer() const;
        void setIdCareer(unsigned int value);

        QString getName() const;
        void setName(const QString &value);

private:
        unsigned int idCareer;
        QString name;
};

#endif // CAREER_H
