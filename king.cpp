#include "king.h"

King::King() : QObject(), QGraphicsPixmapItem()
{
    setPixmap(this->model->king());
}


