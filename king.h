#ifndef KING_H
#define KING_H

#include "model.h"
#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsItem>
#include <QGraphicsRectItem>

class Model;

class King : public QObject, public QGraphicsRectItem
{
    Q_OBJECT
public:
    King();

    void keyPressEvent(QKeyEvent * event);


private:
    Model *model;

signals:

public slots:
};

#endif // KING_H
