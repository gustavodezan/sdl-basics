#include "game.cpp"

Game *game = nullptr;

const int WIDTH = 800, HEIGHT = 600;

int main(int argc, char *argv[])
{
    game = new Game();

    game->init("basic_rpg_engine",SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED, WIDTH, HEIGHT, false);

    while (game -> running())
    {
        game->handleEvents();
        game->update();
        game->render();
    }
    game->clean();
    return EXIT_SUCCESS;
}