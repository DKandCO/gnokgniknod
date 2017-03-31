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
};



#endif // MODEL_H
