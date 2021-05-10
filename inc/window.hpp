//------------------------------------------
// Author :
// Sakhil Kuliev
// Joshua Jakowlew
//------------------------------------------
// Standard Library Including
#include <iostream>
#include <memory>
// Internal including

//------------------------------------------
// External Library including
#include <SDL2/SDL.h>
//------------------------------------------
// Preprocessor Directives
#define SDL_MAIN_HANDLED
//------------------------------------------

class window
{
  public:
    window() = default;
    window(int xWin, int yWin);
    virtual ~window();

    std::unique_ptr<SDL_Window, decltype(&SDL_DestroyWindow)> Create_Window(int xWin, int yWin);

    bool is_open();

    /*!
     *    @brief Window configuration
     *    @xWin            - X coordinate in Desktop
     *    @yWin            - Y coordinate in Desktop
     *    @m_windowStatus  - Window state
     *    @event           -
     */

    float xWin;
    float yWin;
    bool m_windowStatus = true;
    SDL_Event event;

  private:
    std::unique_ptr<SDL_Window, decltype(&SDL_DestroyWindow)> m_Window;
};
