#include <QCoreApplication>
#include <iostream>




#include "node.h"
#include "game.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //  Init Game Engine
    Game game{Game()};

    // Game Loop
    while(game.running())
    {
        game.update();
        game.render();
    }

    //End of Application

    return a.exec();
}