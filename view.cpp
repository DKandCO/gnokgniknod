#include "view.h"
#include "control.h"
#include "model.h"
#include "ui_view.h"




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
    brush.setTextureImage(this->model->fond_menu());
    ui->mdi->setBackground(brush);
    this->setCentralWidget(ui->mdi);
}

void View::menu(){



    scene->setSceneRect(0, 0, 300, 500);


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



    ui->mdi->addSubWindow(view1);

}

void View::lancement(){
    ui->mdi->closeActiveSubWindow();
}


