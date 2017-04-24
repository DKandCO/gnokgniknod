#ifndef VIEW_H
#define VIEW_H

#include <QAbstractItemView>
#include <QMainWindow>
#include <QLabel>
#include <QHBoxLayout>
#include "control.h"
#include "model.h"
#include "king.h"
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QMdiArea>
#include <QPushButton>
#include <QMdiSubWindow>

class Control;
class Model;
class King;

namespace Ui {
class View;


}

class View : public QMainWindow
{
    Q_OBJECT

public:
    explicit View(QWidget *parent = 0);
    ~View();

    void setControl(Control *control) {
        this->control = control;
    }


    void fond();
    void menu();
    void banane();

    QGraphicsView *view1 = new QGraphicsView();
    QGraphicsScene *scene = new QGraphicsScene();

    QGraphicsView *view_jeu = new QGraphicsView();
    QGraphicsScene *scene_jeu = new QGraphicsScene();





private:
    Ui::View *ui;
    Control *control;
    Model *model;


    QPushButton *btn_play = new QPushButton("Play");
    QPushButton *btn_save = new QPushButton("Sauvegarder");
    QPushButton *btn_quit = new QPushButton("Quitter");

public slots:
    void lancement();

};

#endif // VIEW_H
