//------------------------------------------
// Author :
// Sakhil Kuliev
// Joshua Jakowlew
//------------------------------------------
// Preprocessor Directives
#ifndef CORE_HPP
#define CORE_HPP
//------------------------------------------
// Standard Library Including
#include <iostream>
#include <chrono>
// Internal including

//------------------------------------------
// External Library including
#include <SDL2/SDL.h>
//------------------------------------------
class Core
{
public:
    [[noreturn]] void start();
private:
    void readInput();
    void update(float dt);
    void render();
};

#endif // CORE_HPP
//------------------------------------------