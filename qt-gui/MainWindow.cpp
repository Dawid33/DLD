//
// Created by dawids on 27/08/2021.
//

#include "MainWindow.h"
#include "CentralWidget.h"
#include <QApplication>
#include <QWidget>
#include <QBoxLayout>
#include <QTextEdit>

MainWindow::MainWindow() {
    central_widget = new CentralWidget(this);
    setCentralWidget(central_widget);
}
