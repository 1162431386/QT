#include "mainwindow.h"
#include"startwidget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_UseDesktopOpenGL);
    QApplication a(argc, argv);
    startwidget w;
    w.show();
    return a.exec();
}
