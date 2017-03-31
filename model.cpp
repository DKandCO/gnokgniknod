#include "model.h"
#include <QString>
Model::Model()
{

}



QImage  &Model::fond()
{
    QImage *image = new QImage();
    image->load("/Users/joachimferrari/Don_king_kong/fond.png");
    return *image;
}

QPushButton &Model::play(){
    QPushButton *btn_play = new QPushButton("Play");
    return *btn_play;

}

QPixmap &Model::king(){
    QImage *image = new QImage();

    image->load("/Users/joachimferrari/Desktop/gnokgniknod/Bebe_DK.png");
    QPixmap *pix = new QPixmap();
    pix->fromImage(*image);


    return *pix;
}
