#ifndef MAINMENU_H
#define MAINMENU_H

#include <QMainWindow>

namespace Ui {
class MainMenu;
}

class MainMenu : public QMainWindow {
    Q_OBJECT

    public:
        explicit MainMenu(unsigned int&, QWidget *parent = nullptr);
        ~MainMenu();

    private slots:
        void on_pbCareer_clicked();
        void on_pbTeacher_clicked();
        void on_pbStudent_clicked();
        void on_pbAuthor_clicked();
        void on_pbPublisher_clicked();
        void on_pbBook_clicked();
        void on_pbSearchBook_clicked();
        void on_pbModifyBook_clicked();
        void on_pbPrestamos_clicked();
        void on_pbPrestamos_2_clicked();
        void on_pbPrestamos_3_clicked();

    private:
        Ui::MainMenu *ui;
        unsigned int administratorCode;
        void openCrudStudentView();
        void openCrudCareerView();
        void openCrudTeacherView();
    };

#endif // MAINMENU_H
