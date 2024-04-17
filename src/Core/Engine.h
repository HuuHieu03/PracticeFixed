#ifndef ENGINE_H
#define ENGINE_H

#include "SDL.h"
#include "SDL_image.h"

#define SCREEN_WIDTH 900
#define SCREEN_HEIGHT 700

//Engine* Engine::s_Instance = nullptr;

class Engine
{
    public:
        static Engine* GetInstance() {
            return s_Instance = (s_Instance != nullptr)? s_Instance : new Engine();
        }
        bool Init();
        bool Clean();
        void Quit();

        void Update();
        void Render();
        void Events();

        inline bool IsRunning() {return m_IsRunning;}
        inline SDL_Renderer* GetRenderer() {return m_Renderer;}
//        virtual ~Engine();

//    protected:

    private:
        Engine()    ;
        bool m_IsRunning;

        SDL_Window* m_Window;
        SDL_Renderer* m_Renderer;
        static Engine* s_Instance;
};

#endif // ENGINE_H