//
// Created by dawids on 27/08/2021.
//

#ifndef DLD_MainWindow_H
#define DLD_MainWindow_H
#include <QMainWindow>
#include <QTextEdit>
#include "CentralWidget.h"

class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    MainWindow();
    CentralWidget* central_widget;
};

#endif //DLD_MainWindow_H
