#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow w;
    w.setWindowTitle("Layout Test for KLog");
    w.show();

    return a.exec();
}

/*
#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QFont>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QWidget ventana;

    QPushButton btn("QPushButton \nposicion: (10, 10), dimension: (350, 50)", &ventana);
    btn.setGeometry(10, 10, 350, 50);
    btn.setFont(QFont("Arial", 22));

    ventana.setWindowTitle("Posicion absoluta");
    ventana.show();

    return a.exec();
}
*/
