#include <QApplication>
#include <QPushButton>
#include <QWidget>
#include <QDesktopWidget>
#include "MainWindow.h"

int main(int argc, char *argv[]) {

    QApplication app(argc, argv);
    QDesktopWidget* desk = QApplication::desktop();
    MainWindow window;
    window.setGeometry(desk->screenGeometry().width()/2 - 400, desk->screenGeometry().height()/2 - 300, 800, 600);
    window.show();
    return app.exec();
}