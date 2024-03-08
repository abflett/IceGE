#include "Engine/Engine.hpp"

namespace IceGE
{
    Engine::Engine()
    {
        bool app_quit = false;
        SDL_Init(SDL_INIT_VIDEO);

        SDL_Window *window = SDL_CreateWindow("Window", 352, 430, SDL_WINDOW_RESIZABLE);

        while (!app_quit)
        {
            SDL_Event event;
            while (SDL_PollEvent(&event))
            {
                if (event.type == SDL_EVENT_QUIT)
                    app_quit = true;
                break;
            }
        }
    }

    const std::string Engine::TestString() const
    {
        return "Hello from IceGE!.";
    }

}