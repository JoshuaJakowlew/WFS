//------------------------------------------
// Author :
// Sakhil Kuliev
// Joshua Jakowlew
//------------------------------------------
// Preprocessor Directives
#ifndef TIME_HPP
#define TIME_HPP
//------------------------------------------
// Standard Library Including
// Internal including

//------------------------------------------
// External Library including
#include <SDL2/SDL.h>
//------------------------------------------
class Timer
{
  public:
    Timer() noexcept : m_now{SDL_GetPerformanceCounter()}, m_last{}
    {
    }

    float frameTime() noexcept
    {
        m_last = m_now;
        m_now = SDL_GetPerformanceCounter();
        const float frequency = static_cast<float>(SDL_GetPerformanceFrequency());
        return (m_now - m_last) / frequency;
    }

  private:
    using counter_t = decltype(SDL_GetPerformanceCounter());

    counter_t m_now;
    counter_t m_last;
};

#endif // TIME_HPP
