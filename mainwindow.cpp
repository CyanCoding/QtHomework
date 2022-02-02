#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QResizeEvent>
#include <QWindow>
#include <iostream>

void MainWindow::resizeEvent( QResizeEvent * event ) {
    std::cout << "Hi" << std::endl;
}

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
}

MainWindow::~MainWindow() {
    delete ui;
}

