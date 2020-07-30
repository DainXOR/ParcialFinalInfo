#include "body.h"

Body::Body(QGraphicsItem *parent)
    : Speed(5)
{

    //Angle = qrand() % 360;
    setRotation(180);

    this->setX(qrand() % 200);
    this->setY(-200);


}

QRectF Body::boundingRect() const{

    return QRect(0, 0, 20, 20);

}

void Body::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget){

    QRectF Rect = boundingRect();
    QBrush Brush(Qt::green);

    if(scene()->collidingItems(this).isEmpty()){

        Brush.setColor(Qt::green);

    }
    else{

        Brush.setColor(Qt::red);
        Collide();

    }

    painter->fillRect(Rect, Brush);
    painter->drawRect(Rect);

}

void Body::advance(int phase){

    if(!phase) return;

    //QPointF Pos = this->pos();
    setPos(mapToParent(0, -Speed));

}

void Body::Collide(){



}

