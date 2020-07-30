#include "game.h"
#include "body.h"

#include <QPainter>
#include <QTimer>
//#include <windows.h>

Game::Game(QWidget *parent){

    srand(time(NULL));

    scene = new QGraphicsScene(this);
    setScene(scene);

    setRenderHint(QPainter::Antialiasing);
    scene->setSceneRect(0, 0, 1000, 1000);

    QPen pen = QPen(Qt::red);

    QLineF TopLine(scene->sceneRect().topLeft(), scene->sceneRect().topRight());
    QLineF LeftLine(scene->sceneRect().topLeft(), scene->sceneRect().bottomLeft());
    QLineF RightLine(scene->sceneRect().topRight(), scene->sceneRect().bottomRight());
    QLineF BottomLine(scene->sceneRect().bottomLeft(), scene->sceneRect().bottomRight());

    scene->addLine(TopLine, pen);
    scene->addLine(LeftLine, pen);
    scene->addLine(RightLine, pen);
    scene->addLine(BottomLine, pen);

    QGraphicsTextItem *HelpText = new QGraphicsTextItem;
    HelpText->setPlainText(QString("Presiona la barra espaciadora para agregar un nuevo planeta."));
    HelpText->setDefaultTextColor(Qt::red);
    HelpText->setPos(0, 0);
    scene->addItem(HelpText);

    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), scene, SLOT(advance()));
    timer->start(100);

}

void Game::keyPressEvent(QKeyEvent *Event){

    if(Event->key() == Qt::Key_Space){

        Body *Obj = new Body;
        scene->addItem(Obj);

    }
}
