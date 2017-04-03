#include "king.h"
#include <QKeyEvent>


King::King() : QObject(), QGraphicsRectItem()
{
    //setPixmap(this->model->king());
    setRect(100,100,100,100);
    setBrush(* new QBrush(Qt::red));




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
        Banane * banane = new Banane();
        if (this->model->get_haut() == true){
            banane->setPos(x()+150,y()+50);

        }
        else if(this->model->get_bas() == true){
            banane->setPos(x()+150,y()+150);
        }
        else if(this->model->get_gauche() == true){
            banane->setPos(x()+100,y()+100);
        }
        else if(this->model->get_droite() == true){
            banane->setPos(x()+200,y()+100);
        }



        scene()->addItem(banane);
    }
}
