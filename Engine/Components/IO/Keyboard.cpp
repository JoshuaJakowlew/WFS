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
Keyboard::Keyboard()
{
}
//------------------------------------------
Keyboard::~Keyboard()
{
}

bool Keyboard::key_pressed(keycode key)
{
    const Uint8 *m_keyboard_event = SDL_GetKeyboardState(nullptr);

    return m_keyboard_event[key];
}

//------------------------------------------

//------------------------------------------
