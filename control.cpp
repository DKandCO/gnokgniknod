#include "control.h"
#include "model.h"
#include "view.h"
#include <QObject>

Control::Control(Model *model, View *view) :
    view(view)
{
    this->model = model;
    view->setControl(this);
    this->fond();
    this->menu();



}



void Control::fond()
{

    this->view->fond();

}


void Control::menu(){


    this->view->menu();

}



