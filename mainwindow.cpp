#include "mainwindow.h"

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

// When the user selects a menu button we highlight it
void MainWindow::selectMenuButton(QPushButton *button) {
    button->setStyleSheet("QPushButton { background-color: rgb(211, 215, 207) }");
}
// When the user selects a menu button, deselect the rest
void MainWindow::deselectMenuButton(QPushButton *button) {
    button->setStyleSheet("QPushButton { background-color: rgb(186, 189, 182) } QPushButton:hover { background-color: rgb(211, 215, 207) }");
}


void MainWindow::on_classMenuButton_clicked() {
    setWindowTitle("QtHomework - Classes");
    selectMenuButton(ui->classMenuButton);
    deselectMenuButton(ui->homeworkMenuButton);
    deselectMenuButton(ui->calendarMenuButton);
    deselectMenuButton(ui->settingsMenuButton);
}


void MainWindow::on_calendarMenuButton_clicked() {
    setWindowTitle("QtHomework - Calendar");
    selectMenuButton(ui->calendarMenuButton);
    deselectMenuButton(ui->classMenuButton);
    deselectMenuButton(ui->homeworkMenuButton);
    deselectMenuButton(ui->settingsMenuButton);
}


void MainWindow::on_homeworkMenuButton_clicked() {
    setWindowTitle("QtHomework - Homework");
    selectMenuButton(ui->homeworkMenuButton);
    deselectMenuButton(ui->classMenuButton);
    deselectMenuButton(ui->calendarMenuButton);
    deselectMenuButton(ui->settingsMenuButton);
}


void MainWindow::on_settingsMenuButton_clicked() {
    setWindowTitle("QtHomework - Settings");
    selectMenuButton(ui->settingsMenuButton);
    deselectMenuButton(ui->classMenuButton);
    deselectMenuButton(ui->homeworkMenuButton);
    deselectMenuButton(ui->calendarMenuButton);
}

