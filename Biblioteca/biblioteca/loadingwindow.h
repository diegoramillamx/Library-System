#ifndef LOADINGWINDOW_H
#define LOADINGWINDOW_H

#include <QMainWindow>

namespace Ui {
class LoadingWindow;
}

class LoadingWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit LoadingWindow(unsigned int&, QWidget *parent = nullptr);
    ~LoadingWindow();

private slots:
    void changeProgressBarValue();

private:
    Ui::LoadingWindow *ui;
    unsigned int code;
    int count;
    };

#endif // LOADINGWINDOW_H
