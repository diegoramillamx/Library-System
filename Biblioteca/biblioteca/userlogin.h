#ifndef USERLOGIN_H
#define USERLOGIN_H

#include <QString>

class UserLogin {
public:
    UserLogin();
    UserLogin(const QString&, const QString&);
    QString getPassword() const;
    void setPassword(const QString &value);

    QString getUser() const;
    void setUser(const QString &value);

private:
    QString user;
    QString password;

};

#endif // USERLOGIN_H
