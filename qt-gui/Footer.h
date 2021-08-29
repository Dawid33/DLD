//
// Created by dawids on 27/08/2021.
//

#ifndef DLD_FOOTER_H
#define DLD_FOOTER_H
#include <QWidget>
#include <QTabWidget>
#include <QLabel>

class Footer : public QTabWidget {
    Q_OBJECT
public:
    Footer(QWidget* parent = 0);
private:
    QWidget* parent = 0;
    QLabel* console;
};
#endif //DLD_FOOTER_H
