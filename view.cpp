#include "view.h"
#include "control.h"
#include "model.h"
#include "ui_view.h"
#include "king.h"

#include <QDebug>





View::View(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::View)
{
    ui->setupUi(this);
    connect(btn_play, SIGNAL(clicked()), this, SLOT(lancement()));
    connect(btn_quit, SIGNAL(clicked()), qApp, SLOT(quit()));



}

View::~View()
{
    delete ui;
}




void View::fond(){
    QBrush brush;
    brush.setTextureImage(this->model->fond());
    ui->mdi->setBackground(brush);
    this->setCentralWidget(ui->mdi);
}

void View::menu(){



    scene->setSceneRect(0, 0, 250, 450);


    QGraphicsProxyWidget *proxy = new QGraphicsProxyWidget();
    QGraphicsProxyWidget *proxy1 = new QGraphicsProxyWidget();
    QGraphicsProxyWidget *proxy2 = new QGraphicsProxyWidget();

    proxy->setWidget(btn_play);
    proxy1->setWidget(btn_save);
    proxy2->setWidget(btn_quit);

    scene->addItem(proxy);
    scene->addItem(proxy1);
    scene->addItem(proxy2);

    proxy->setPos(100, 50);
    proxy1->setPos(100, 200);
    proxy2->setPos(100, 400);



    view1->setScene(scene);



    QMdiSubWindow *menu = ui->mdi->addSubWindow(view1);
    menu->setGeometry(250,100,300,500);

    QBrush brush;
    brush.setTextureImage(this->model->fond_menu());

    view1->setBackgroundBrush(brush);


}

void View::lancement(){
    ui->mdi->closeActiveSubWindow();

    King *king = new King();



    scene_jeu->addItem(king);




    QBrush brush;
    brush.setTextureImage(this->model->fond());
    view_jeu->setBackgroundBrush(brush);
    view_jeu->setScene(scene_jeu);

    king->setFlag(QGraphicsItem::ItemIsFocusable);
    king->setFocus();

    this->setCentralWidget(view_jeu);
}

void View::banane(){
    Banane * banane = new Banane();

    scene_jeu->addItem(banane);
    qDebug() << " la scene : " << scene_jeu;

    if (this->model->get_haut() == true){
        banane->setPos(x()+150,y()+50);

    }
    else if(this->model->get_bas() == true){
        banane->setPos(x()+150,y()+150);
    }
    else if(this->model->get_gauche() == true){
        banane->setPos(x()+100,y()+100);
    }
    else if(this->model->get_droite() == true){
        banane->setPos(x()+200,y()+100);
    }

}
