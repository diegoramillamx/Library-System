#include "loadingwindow.h"
#include "ui_loadingwindow.h"
#include "mainmenu.h"
#include <QTimer>
#include <windows.h>

LoadingWindow::LoadingWindow(unsigned int& code, QWidget *parent) : QMainWindow(parent),
    ui(new Ui::LoadingWindow),
    code(code),
    count(0) {

    ui->setupUi(this);
    QTimer *chronometer = new QTimer(this);
    connect(chronometer, SIGNAL(timeout()), this, SLOT(changeProgressBarValue()));
    chronometer->start(15);
    }

LoadingWindow::~LoadingWindow() {
    delete ui;
    }

void LoadingWindow::changeProgressBarValue() {
    if (count++ == 100) {
        Sleep(2000);
        this->hide();
        MainMenu *main = new MainMenu(code);
        main->show();
        }
    ui->pbLoading->setValue(count);
    }
