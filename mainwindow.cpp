#include "mainwindow.h"
#include "ui_mainwindow.h"

void MainWindow::resizeEvent( QResizeEvent * event ) {
    int height = this->height();

    // Only update label height if height changes
    if (pastHeight == 0 || pastHeight < height) {
        pastHeight = height;
        ui->backgroundLeftMenu->setFixedHeight(height);
    }

}

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
}

MainWindow::~MainWindow() {
    delete ui;
}

