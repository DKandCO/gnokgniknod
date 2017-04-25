#ifndef CONTROL_H
#define CONTROL_H

#include "model.h"
#include "view.h"
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QPushButton>

class Model;
class View;

class Control
{


public:
    Control(Model *model, View *view);


    void fond();
    void menu();

    void banane_haut();




private:
    Model *model;
    View *view;







};

#endif // CONTROL_H
