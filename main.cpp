#include "Engine.h"

int main(int argc, char** argv)
{
    Engine::GetInstance() ->Init();
    while (Engine::GetInstance() ->IsRunning()) {
        Engine::GetInstance() ->Events();
        Engine::GetInstance() ->Update();
        Engine::GetInstance() ->Render();
    }

    Engine::GetInstance() ->Clean();
//    if (SDL_Init(SDL_INIT_EVERYTHING) == 0)
//        std::cout << "Hello world!" << endl;
    return 0;
}


