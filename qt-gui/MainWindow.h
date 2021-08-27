//
// Created by dawids on 27/08/2021.
//

#ifndef DLD_MainWindow_H
#define DLD_MainWindow_H
#include <QMainWindow>
#include <QTextEdit>

class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    MainWindow();
    QTextEdit *file_viewer;
    QTextEdit *file_viewer2;
};

#endif //DLD_MainWindow_H
