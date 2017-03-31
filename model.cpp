#include "model.h"
#include <QString>
Model::Model()
{

}



QImage  &Model::fond_menu()
{
    QImage *image = new QImage();
    image->load("/Users/joachimferrari/Don_king_kong/fond.png");
    return *image;
}

QPushButton &Model::play(){
    QPushButton *btn_play = new QPushButton("Play");
    return *btn_play;

}
