//
// Created by dawids on 27/08/2021.
//

#include "MainWindow.h"
#include <QApplication>
#include <QWidget>
#include <QBoxLayout>
#include <QTextEdit>
#include "MainTab.h"

MainWindow::MainWindow() {
    MainTab* tab = new MainTab(this);
    tab->setSizePolicy(QSizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum));
    auto size = tab->size();
    setCentralWidget(tab);
}
