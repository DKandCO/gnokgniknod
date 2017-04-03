#include "model.h"
#include <QString>
Model::Model()
{
    haut1 = false;
    bas1 = false;
    droite1 = false;
    gauche1 = false;
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

void Model::gauche(){
    haut1 = false;
    bas1 = false;
    droite1 = false;
    gauche1 = true;


}
void Model::haut(){
    haut1 = true;
    bas1 = false;
    droite1 = false;
    gauche1 = false;


}
void Model::bas(){
    haut1 = false;
    bas1 = true;
    droite1 = false;
    gauche1 = false;


}
void Model::droite(){
    haut1 = false;
    bas1 = false;
    droite1 = true;
    gauche1 = false;


}

bool Model::get_bas(){
    return bas1;
}

bool Model::get_droite(){
     return droite1;
}
bool Model::get_gauche(){
    return gauche1;
}

bool Model::get_haut(){
    return haut1;
}
