#include "banane.h"

Banane::Banane()
{
    setRect(0,0,10,50);
    setBrush(* new QBrush(Qt::red));


    QTimer * timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));

    timer->start(50);
}

void Banane::move(){
    if(this->model->get_haut()==true){
        setPos(x(),y()-10);
    }
    else if(this->model->get_bas()==true){
        setPos(x(),y()+10);
    }
    else if(this->model->get_gauche()==true){
        setPos(x()-10,y());
    }
    else if(this->model->get_droite()==true){
        setPos(x()+10,y());
    }
}
