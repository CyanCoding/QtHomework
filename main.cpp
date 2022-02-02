#include "mainwindow.h"

#include <QApplication>

void resizeEvent( QResizeEvent * event );

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
