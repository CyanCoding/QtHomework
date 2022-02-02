#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "ui_mainwindow.h"

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);

    // Occurs when the user resizes the window and once at startup
    void resizeEvent(QResizeEvent * event);


    // Don't put functions after this
    ~MainWindow();

private slots:
    void on_classMenuButton_clicked();

    void on_calendarMenuButton_clicked();

    void on_homeworkMenuButton_clicked();

    void on_settingsMenuButton_clicked();

private:
    // When the user selects a menu button we highlight it
    void selectMenuButton(QPushButton *button);
    // When the user selects a menu button, deselect the rest
    void deselectMenuButton(QPushButton *button);

    int pastHeight;
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
