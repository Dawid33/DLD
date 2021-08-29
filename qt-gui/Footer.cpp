//
// Created by dawids on 27/08/2021.
//

#include "Footer.h"
#include <QTextEdit>
#include <QLabel>

Footer::Footer(QWidget *parent) : parent(parent) {
    console = new QLabel();
    addTab(console, "Console");
}