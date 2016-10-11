#include "Steuerung.h"

Steuerung::Steuerung(QWidget *parent): QWidget(parent)
{
    this->setGeometry(50,30,i+300,150);

    knopf = new QPushButton("Zack",this);
    knopf->setGeometry(20,70,60,30);
    knopf->show();
    connect(knopf,SIGNAL(clicked(bool)),SLOT(start()));

    eingabe = new QLineEdit("",this);
    eingabe->setGeometry(20,30,60,30);
    eingabe->show();



    balken = new QLabel("",this);
    balken->setPalette(Qt::red);
    balken->setAutoFillBackground(true);
    balken->setGeometry(100,50,i,50);
    balken->show();

}

Steuerung::~Steuerung()
{

}

void Steuerung::start()
{
   eing=eingabe->text();
   i=eing.toInt();
   balken->setGeometry(100,50,i,50);
   this->setGeometry(50,30,i+150,150);
}
