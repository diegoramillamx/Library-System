#include "loginbiblioteca.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LoginBiblioteca w;
    w.show();

    return a.exec();
}
