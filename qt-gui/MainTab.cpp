//
// Created by dawids on 27/08/2021.
//

#include "MainTab.h"
#include <QBoxLayout>
#include <QObject>

MainTab::MainTab(QWidget* parent) : parent(parent) {
    file_viewer = new QTextEdit(this);
    file_viewer->setSizePolicy(QSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding));
    setLayout(new QVBoxLayout());
}
