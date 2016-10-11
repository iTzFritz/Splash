#ifndef STEUERUNG_H
#define STEUERUNG_H

#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QLineEdit>
#include <QString>

class Steuerung : public QWidget
{
    Q_OBJECT

public:
    Steuerung(QWidget *parent = 0);
    ~Steuerung();

    QPushButton *knopf;
    QLabel *balken;
    QLineEdit *eingabe;

private:
    int i = 0;
    QString eing;

public slots:
    void start();
};

#endif // STEUERUNG_H
