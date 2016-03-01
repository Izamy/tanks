#include "Player.h"

Player::Player(): QGraphicsPixmapItem()
{
    // устанавливаем картинку танка
    setPixmap(QPixmap(":/images/tank.png"));
    setPos(400, 300);
    // уменьшает картинку
    setScale(0.2);
}

void Player::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_Left)
    {
        setPos(x() - 10, y());
    }
    else if (event->key() == Qt::Key_Right)
    {
        setPos(x() + 10, y());
    }
    else if (event->key() == Qt::Key_Up)
    {
        setPos(x(), y() - 10);
    }
    else if (event->key() == Qt::Key_Down)
    {
        setPos(x(), y() + 10);
    }

}
