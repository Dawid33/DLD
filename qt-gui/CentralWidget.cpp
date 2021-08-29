#include "MainWindow.h"
#include "CentralWidget.h"
#include <QBoxLayout>
#include <QObject>

CentralWidget::CentralWidget(QWidget* parent) : parent(parent) {
    file_viewer = new QTextEdit(this);
    footer = new Footer(this);
    QGridLayout* layout = new QGridLayout(this);
    layout->setMargin(0);
    layout->addWidget(file_viewer);
    layout->addWidget(footer);
    setLayout(layout);
}
