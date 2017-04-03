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

class Model
{
public:
    Model();




    QImage& fond();
    QPixmap& king();
    QPushButton& play();

    bool haut1;
    bool bas1;
    bool droite1;
    bool gauche1 ;

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
