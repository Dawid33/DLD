#ifndef DLD_CentralWidget_H
#define DLD_CentralWidget_H
#include <QWidget>
#include <QTextEdit>
#include "Footer.h"

class CentralWidget : public QWidget {
    Q_OBJECT
public:
    CentralWidget(QWidget* parent = 0);

private:
    QWidget* parent = 0;
    QTextEdit* file_viewer;
    Footer* footer;
};

#endif //DLD_CentralWidget_H
