//------------------------------------------
// Author :
// Sakhil Kuliev
// Joshua Jakowlew
//------------------------------------------
// Standard Library Including
#include <iostream>

// Internal including
#include <Engine/Components/IO/keyboard.hpp>
//------------------------------------------
// External Library including
#include <SDL2/SDL.h>
//------------------------------------------
// Preprocessor Directives

//------------------------------------------
KeyState Keyboard::keyPressed(KeyState key) const noexcept
{
    return m_keyState[static_cast<std::size_t>(key)];
}
//------------------------------------------