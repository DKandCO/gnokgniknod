#ifndef MODEL_H
#define MODEL_H

#include <QAbstractItemModel>
#include "control.h"
#include "view.h"
#include <QLabel>
#include <QImage>
#include <QVBoxLayout>
#include <QGraphicsScene>
#include <QGraphicsProxyWidget>
#include <QPushButton>
#include <QImage>
#include <QSize>

class Model
{
public:
    Model();




    QImage& fond();
    QImage& fond_menu();

    QPushButton& play();

    bool haut1 = false;
    bool bas1 = false;
    bool droite1 = false;
    bool gauche1 = false ;

    void haut();
    void bas();
    void droite();
    void gauche();

    bool get_haut();
    bool get_bas();
    bool get_droite();
    bool get_gauche();
};



#endif // MODEL_H
