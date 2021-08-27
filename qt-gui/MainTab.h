//
// Created by dawids on 27/08/2021.
//

#ifndef DLD_MAINTAB_H
#define DLD_MAINTAB_H
#include <QWidget>
#include <QTextEdit>

class MainTab : public QWidget {
    Q_OBJECT
public:
    MainTab(QWidget* parent);

private:
    QWidget* parent;
    QTextEdit* file_viewer;
};
#endif //DLD_MAINTAB_H
