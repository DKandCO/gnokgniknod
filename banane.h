#ifndef BANANE_H
#define BANANE_H

#include "model.h"
#include <QObject>
#include <QGraphicsRectItem>
#include <QBrush>
#include <QTimer>

class Model;

class Banane : public QObject, public QGraphicsRectItem
{
    Q_OBJECT
public:
    Banane();

public slots:
    void move();

private:
    Model *model;
};

#endif // BANANE_H
