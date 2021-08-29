#include <QApplication>
#include <QPushButton>
#include <QWidget>
#include <QScreen>
#include <QDesktopWidget>
#include "MainWindow.h"

int main(int argc, char *argv[]) {

    QApplication app(argc, argv);
    QScreen* screen = QGuiApplication::primaryScreen();
    QRect size = screen->geometry();

    MainWindow window;
    //Temporary hardcoded size
    window.setGeometry(size.width()/2 - 400, size.height()/2 - 300, 800, 600);
    window.show();
    return app.exec();
}