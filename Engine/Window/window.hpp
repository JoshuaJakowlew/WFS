//------------------------------------------
// Author :
// Sakhil Kuliev
// Joshua Jakowlew
//------------------------------------------
// Standard Library Including
#include <iostream>
#include <memory>
// Internal including
#include <Engine/IO/keyboard.hpp>
//------------------------------------------
// External Library including
#include <SDL2/SDL.h>
//------------------------------------------
// Preprocessor Directives
#ifndef ENGINE_WINDOW_H
#define ENGINE_WINDOW_H
//------------------------------------------
class window
{
  public:
    window(int m_xWin, int m_yWin);
    virtual ~window();

    std::unique_ptr<SDL_Window, decltype(&SDL_DestroyWindow)> Create_Window(int m_xWin, int m_yWin);

    bool is_open(const Uint8 * key_event);

    /*!
     *    @brief Window configuration
     *    @m_xWin             - X coordinate in Desktop
     *    @m_yWin             - Y coordinate in Desktop
     *    @m_windowStatus     - Window state
     *    @event              - SDL event obj
     */

    float           m_xWin;
    float           m_yWin;
    bool            m_windowStatus = true;
    SDL_Event       m_event;

  private:
    std::unique_ptr<SDL_Window, decltype(&SDL_DestroyWindow)> m_Window;
};
//------------------------------------------
#endif ENGINE_WINDOW_H