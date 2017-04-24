#include "king.h"
#include <QKeyEvent>


King::King() : QObject(), QGraphicsPixmapItem()
{

    setPixmap(QPixmap(":/image_DK/Donkey_kong"));
    setScale(0.3);



}


void King::keyPressEvent(QKeyEvent *event){
    if (event->key() == Qt::Key_Left){
        setPos(x()-10,y());
        this->model->gauche();

    }
    else if (event->key() == Qt::Key_Right){
        setPos(x()+10,y());
        this->model->droite();

    }
    else if (event->key() == Qt::Key_Up){
        setPos(x(),y()-10);
        this->model->haut();

    }
    else if (event->key() == Qt::Key_Down){
        setPos(x(),y()+10);
        this->model->bas();

    }
    else if (event->key() == Qt::Key_Space){
        this->view->banane();

    }
}
