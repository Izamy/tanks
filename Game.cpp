#include "Game.h"

Game::Game(): QGraphicsView()
{
    // эти функции нужны, чтобы сразу игра была на полный экран
    setFixedSize(800, 600);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    // здесь мы создали сцену и задали ей фон
    scene = new QGraphicsScene();
    scene->setSceneRect(0, 0, 800, 600);
    setBackgroundBrush(QBrush(QImage(":/images/background_gameplay.jpg")));
    setScene(scene);

    player = new Player();
    scene->addItem(player);

    // без этих ф-ий не будут считываться клавиши для Player
    player->setFlag(QGraphicsItem::ItemIsFocusable);
    player->setFocus();

    show(); // должна стоять последней
}
