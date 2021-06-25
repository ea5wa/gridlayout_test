#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QWidget(parent)
{
    QGridLayout *grid = new QGridLayout(this);

    QLabel* rstTXLabel = new QLabel(this);
    QLabel* rstRXLabel = new QLabel(this);
    QLabel* nameLabel = new QLabel(this);
    QLabel* freqRXLabel = new QLabel(this);
    QLabel* freqTXLabel = new QLabel(this);
    QLabel* locatorLabel = new QLabel(this);
    QLabel* qthLabel = new QLabel(this);
    QLabel* rxPwrLabel = new QLabel(this);
    QLabel* comentLabel = new QLabel(this);

    QLineEdit * rstTXLineEdit = new QLineEdit(this);
    QLineEdit * rstRXLineEdit = new QLineEdit(this);
    QLineEdit * nameLineEdit = new QLineEdit(this);
    QLineEdit * freqRXLineEdit = new QLineEdit(this);
    QLineEdit * freqTXLineEdit = new QLineEdit(this);
    QLineEdit * locatorLineEdit = new QLineEdit(this);
    QLineEdit * qthLineEdit = new QLineEdit(this);
    QLineEdit * rxPwrLineEdit = new QLineEdit(this);
    QLineEdit * comentLineEdit = new QLineEdit(this);

    rstTXLabel->setText("RST TX");
    rstRXLabel->setText("RST RX");
    nameLabel->setText("Nombre:");
    freqRXLabel->setText("Frecuencia RX:");
    freqTXLabel->setText("Frecuencia TX:");
    locatorLabel->setText("Locator:");
    qthLabel->setText("QTH:");
    comentLabel->setText("Comentario:");
    rxPwrLabel->setText("PWR RX:");

    rstTXLineEdit->setMaxLength(3);
    rstRXLineEdit->setMaxLength(3);
    rstTXLineEdit->setFixedWidth(25);
    rstRXLineEdit->setFixedWidth(25);
    nameLineEdit->setFixedWidth(150);
    freqRXLineEdit->setFixedWidth(80);
    freqTXLineEdit->setFixedWidth(80);
    locatorLineEdit->setFixedWidth(45);
    rxPwrLineEdit->setFixedWidth(50);
    //comentLineEdit->setFixedWidth(350);

    grid->addWidget(rstTXLabel, 0, 0, 1, 1);
    grid->addWidget(rstRXLabel, 0, 1, 1, 1);
    grid->addWidget(freqRXLabel, 0, 8, 1, 2);
    grid->addWidget(freqTXLabel, 0, 5, 1, 2);
    grid->addWidget(nameLabel, 2, 0, 1, 2);
    grid->addWidget(locatorLabel, 4, 0, 1, 2);
    grid->addWidget(rxPwrLabel, 4, 2, 1, 2);
    grid->addWidget(qthLabel, 2, 5, 1, 5);
    grid->addWidget(comentLabel, 4, 4, 1, 6);

    grid->addWidget(rstTXLineEdit, 1, 0, 1, 1);
    grid->addWidget(rstRXLineEdit, 1, 1, 1, 1);
    grid->addWidget(freqRXLineEdit, 1, 8, 1, 2);
    grid->addWidget(freqTXLineEdit, 1, 5, 1, 2);
    grid->addWidget(locatorLineEdit, 5, 0, 1, 2);
    grid->addWidget(nameLineEdit, 3, 0, 1, 4);
    grid->addWidget(rxPwrLineEdit, 5, 2, 1, 2);
    grid->addWidget(qthLineEdit, 3, 5, 1, 5);
    grid->addWidget(comentLineEdit, 5, 4, 1, 6);

//    grid->setSpacing(10);
//    grid->setHorizontalSpacing(10);
//    grid->setVerticalSpacing(15);
    //grid->setColumnStretch(8,1);


    setLayout(grid);

}

MainWindow::~MainWindow() { }
