#ifndef KING_H
#define KING_H

#include "model.h"
#include "banane.h"
#include "view.h"
#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsItem>
#include <QGraphicsPixmapItem>
#include <QGraphicsRectItem>


class Model;
class View;

class King : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    King();

    void keyPressEvent(QKeyEvent * event);



private:
    Model *model;
    View *view;


signals:

public slots:
};

#endif // KING_H
