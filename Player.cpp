#include "Player.h"

Player::Player(): QGraphicsPixmapItem()
{
    // устанавливаем картинку танка
    setPixmap(QPixmap(":/images/tank.png"));

    // уменьшает картинку
    setScale(0.2);
}
