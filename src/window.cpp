//------------------------------------------
// Author :
// Sakhil Kuliev
// Joshua Jakowlew
//------------------------------------------
// Standard Library Including
#include <iostream>

// Internal including
#include <window.hpp>
//------------------------------------------
// External Library including
#include <SDL2/SDL.h>
//------------------------------------------
// Preprocessor Directives
#define SDL_MAIN_HANDLED
//------------------------------------------
window::window(int xWin, int yWin) : m_Window(Create_Window(xWin, yWin))
{

    if (m_Window == nullptr)
    {
        throw "SDL_Window or SDL_Renderer not ready!";
    }
}

window::~window()
{
}

std::unique_ptr<SDL_Window, decltype(&SDL_DestroyWindow)> window::Create_Window(int xWin, int yWin)
{
    return std::unique_ptr<SDL_Window, decltype(&SDL_DestroyWindow)>(
        SDL_CreateWindow("WFS", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, xWin, yWin, SDL_WINDOW_SHOWN),
        SDL_DestroyWindow);
}

bool window::is_open()
{
    while (m_windowStatus)
    {
        if (SDL_PollEvent(&event))
        {
            /*switch(event.type) {
            case SDL_QUIT: SDL_WINDOWEVENT_CLOSE; break;
            case
            }*/
        }
    }
    return m_windowStatus = false;
}
