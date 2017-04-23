#ifndef BANANE_H
#define BANANE_H

#include "model.h"
#include <QObject>
#include <QGraphicsRectItem>
#include <QGraphicsPixmapItem>
#include <QBrush>
#include <QTimer>

class Model;

class Banane : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Banane();
    ~Banane();
    void bouge();

public slots:
    void move_h();
    void move_b();
    void move_d();
    void move_g();


private:
    Model *model;


};

#endif // BANANE_H
