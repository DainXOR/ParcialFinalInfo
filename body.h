#ifndef BODY_H
#define BODY_H

#include <QPainter>
#include <QGraphicsItem>
#include <QGraphicsScene>
#include <QObject>

class Body: public QGraphicsItem
{
//    Q_OBJECT
public:
    Body(QGraphicsItem * = nullptr);
    QRectF boundingRect() const override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr) override;

protected:
    void advance(int phase) override;

private:
    void Collide();

private:
    qreal Angle;
    qreal Speed;



};

#endif // BODY_H
