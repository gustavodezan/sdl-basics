#ifndef game_hpp
#define game_hpp

#include <SDL2/SDL.h>
#include <iostream>

class Game
{
    public:
        Game();
        ~Game();

        void init(const char *title, int xpos, int ypos, int width, int height, bool fullscreen);
        
        void handleEvents();
        void update();
        void render();
        void clean();

        bool running() {return is_running;}

    private:
        int counter = 0;
        bool is_running;
        SDL_Window *window;
        SDL_Renderer *renderer;
};

#endif /* game_hpp */