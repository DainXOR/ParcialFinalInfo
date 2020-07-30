#include "game.h"
#include "body.h"

#include <QPainter>

Game::Game(QWidget *parent){

    scene = new QGraphicsScene(this);
    setScene(scene);

    setRenderHint(QPainter::Antialiasing);
    scene->setSceneRect(-200, -200, 300, 300);

    QPen pen = QPen(Qt::red);

    QLineF TopLine(scene->sceneRect().topLeft(), scene->sceneRect().topRight());
    QLineF LeftLine(scene->sceneRect().topLeft(), scene->sceneRect().bottomLeft());
    QLineF RightLine(scene->sceneRect().topRight(), scene->sceneRect().bottomRight());
    QLineF BottomLine(scene->sceneRect().bottomLeft(), scene->sceneRect().bottomRight());

    scene->addLine(TopLine, pen);
    scene->addLine(LeftLine, pen);
    scene->addLine(RightLine, pen);
    scene->addLine(BottomLine, pen);


}

void Game::keyPressEvent(QKeyEvent *Event){



}
