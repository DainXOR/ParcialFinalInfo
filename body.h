#ifndef BODY_H
#define BODY_H

//#include <QGraphicsEllipseItem>
#include <QObject>

class Body//: public QGraphicsEllipseItem
{
//    Q_OBJECT
public:
    Body(/*QGraphicsItem * = nullptr*/);
//    QRectF boundingRect() const override;
//    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr) override;

public: //slots:
    void Move();

private:
    void Collide();

private:
    qreal Angle;
    qreal Speed;



};

#endif // BODY_H
