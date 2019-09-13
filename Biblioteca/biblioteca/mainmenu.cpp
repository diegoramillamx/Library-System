#include "mainmenu.h"
#include "ui_mainmenu.h"
#include "crudstudent.h"
#include "crudcareer.h"
#include "crudteacher.h"
#include "crudauthor.h"
#include "crudpublishers.h"
#include "searchbook.h"
#include "crudbook.h"
#include "updatebook.h"
#include "loans.h"
#include "loanreport.h"
#include "backloan.h"

MainMenu::MainMenu(unsigned int& adminCode, QWidget *parent) : QMainWindow(parent), ui(new Ui::MainMenu) {
    ui->setupUi(this);
    administratorCode = adminCode;
    }

MainMenu::~MainMenu() {
    delete ui;
    }

void MainMenu::on_pbStudent_clicked() {
    openCrudStudentView();
    }

void MainMenu::on_pbCareer_clicked() {
    openCrudCareerView();
    }

void MainMenu::on_pbTeacher_clicked() {
    openCrudTeacherView();
    }

void MainMenu::openCrudStudentView() {
    CrudStudent *newCrudStudentView = new CrudStudent;
    newCrudStudentView->show();
    }

void MainMenu::openCrudCareerView() {
    CrudCareer *newCrudCareerView = new CrudCareer;
    newCrudCareerView->show();
    }

void MainMenu::openCrudTeacherView() {
    CrudTeacher *newCrudTeacherView = new CrudTeacher;
    newCrudTeacherView->show();
    }

void MainMenu::on_pbAuthor_clicked() {
    CrudAuthor *newCrudAuthorView = new CrudAuthor;
    newCrudAuthorView->show();
    }

void MainMenu::on_pbPublisher_clicked() {
    CrudPublishers *newCrudPublisherView = new CrudPublishers;
    newCrudPublisherView->show();
    }

void MainMenu::on_pbBook_clicked() {
    CrudBook *newCrudBookView = new CrudBook;
    newCrudBookView->show();
    }

void MainMenu::on_pbSearchBook_clicked() {
    SearchBook *newSearchBookView = new SearchBook;
    newSearchBookView->show();
    }

void MainMenu::on_pbModifyBook_clicked() {
    UpdateBook *newUpdateBookView = new UpdateBook;
    newUpdateBookView->show();
    }

void MainMenu::on_pbPrestamos_clicked() {
    Loans * newLoansView = new Loans(administratorCode);
    newLoansView->show();
    }

void MainMenu::on_pbPrestamos_2_clicked() {
    LoanReport *newLoanReport = new LoanReport;
    newLoanReport->show();
    }

void MainMenu::on_pbPrestamos_3_clicked() {
    BackLoan *newBackLoan = new BackLoan;
    newBackLoan->show();
    }
