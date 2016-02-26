#include "Game.h"

Game::Game(): QGraphicsView()
{
    // эти функции, чтобы сразуигра была на полный экран
    setFixedSize(800, 600);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    scene = new QGraphicsScene();
    scene->setSceneRect(0, 0, 800, 600);
    setBackgroundBrush(QBrush(QImage(":/images/background_gameplay.jpg")));
    setScene(scene);

    player = new Player();
    player->setPos(400, 300);
    scene->addItem(player);

    show();
}
