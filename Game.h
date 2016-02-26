#ifndef GAME_H
#define GAME_H

#include <QGraphicsScene>
#include <QGraphicsView>
#include <QBrush>
#include <QImage>

#include "Player.h"

class Game: public QGraphicsView
{
public:
    Game();
    QGraphicsScene *scene;
    Player *player;
};

#endif // GAME_H
