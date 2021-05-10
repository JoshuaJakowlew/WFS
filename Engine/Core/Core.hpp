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
#ifndef ENGINE_CORE_H
#define ENGINE_CORE_H
//------------------------------------------
class core
{
    core();
    virtual ~core();

    void Start();
    void Clean();
};
#endif ENGINE_CORE_H