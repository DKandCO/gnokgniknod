#ifndef KING_H
#define KING_H

#include "model.h"
#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsItem>
#include <QGraphicsRectItem>

class Model;

class King : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    King();


private:
    Model *model;

signals:

public slots:
};

#endif // KING_H
