#ifndef GAME_H // GAME_H
#define GAME_H

#include <QGraphicsScene>
#include <QGraphicsView>
#include <QKeyEvent>
#include <QWidget>


class Game: public QGraphicsView
{
public:
    Game(QWidget * = nullptr);
    void keyPressEvent(QKeyEvent *);

private:
    QGraphicsScene *scene;
    QTimer *timer;
    QTimer *ItemsTimer;


};




#endif // GAME_H
