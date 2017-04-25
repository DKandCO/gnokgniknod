#include "banane.h"
#include <QDebug>

Banane::Banane() : QObject(), QGraphicsPixmapItem()
{

    setPixmap((QPixmap(":/image_DK/banane.png")));
    setScale(0.2);
    bouge();
    qDebug() << "banane";
}


void Banane::move_h(){
   setPos(x(),y()-10);
   if (pos().y() < 0)
   {
        scene()->removeItem(this);
        delete this;
   }
}

void Banane::move_b(){
    setPos(x(),y()+10);
    if (pos().y() > 500)
    {
         scene()->removeItem(this);
         delete this;
    }
}

void Banane::move_d(){
    setPos(x()+10,y());
    if (pos().x() > 300)
    {
         scene()->removeItem(this);
         delete this;
    }
}

void Banane::move_g(){
    setPos(x()-10,y());
    if (pos().x() < 0)
    {
         scene()->removeItem(this);
         delete this;
    }
}


void Banane::bouge(){

    QTimer * timer = new QTimer();

    /*
    if(this->model->get_haut()==true){
        connect(timer,SIGNAL(timeout()),this,SLOT(move_h()));
    }
    else if(this->model->get_bas()==true){
        connect(timer,SIGNAL(timeout()),this,SLOT(move_b()));
    }
    else if(this->model->get_droite()==true){
        connect(timer,SIGNAL(timeout()),this,SLOT(move_d()));
    }
    else if(this->model->get_gauche()==true){
        connect(timer,SIGNAL(timeout()),this,SLOT(move_g()));
    }
    */
    connect(timer,SIGNAL(timeout()),this,SLOT(move_h()));


    timer->start(50);


}
