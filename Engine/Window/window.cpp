//------------------------------------------
// Author :
// Sakhil Kuliev
// Joshua Jakowlew
//------------------------------------------
// Standard Library Including
#include <iostream>

// Internal including
#include <Engine/IO/keyboard.hpp>
#include <Engine/Window/window.hpp>
//------------------------------------------
// External Library including
#include <SDL2/SDL.h>
//------------------------------------------
// Preprocessor Directives

//------------------------------------------
window::window(int m_xWin, int m_yWin) : m_Window(Create_Window(m_xWin, m_yWin))
{

    if (m_Window == nullptr)
    {
        throw "SDL_Window or SDL_Renderer not ready!";
    }
}
//------------------------------------------
window::~window()
{
}
//------------------------------------------
std::unique_ptr<SDL_Window, decltype(&SDL_DestroyWindow)> window::Create_Window(int m_xWin, int m_yWin)
{
    return std::unique_ptr<SDL_Window, decltype(&SDL_DestroyWindow)>(
        SDL_CreateWindow("WFS", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, m_xWin, m_yWin, SDL_WINDOW_SHOWN),
        SDL_DestroyWindow);
}
//------------------------------------------
bool window::is_open(const Uint8 *key_event)
{
    bool ALT_F4 = (key_event[SDL_SCANCODE_LALT] and key_event[SDL_SCANCODE_F4]);
    while (m_windowStatus)
    {
        if (SDL_PollEvent(&m_event))
        {
            
        }
    }
    m_windowStatus = false;
    return m_windowStatus;
}
//------------------------------------------
