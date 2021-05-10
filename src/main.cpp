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
// Start of program
int main(int argc, char *argv[])
{
    window window(600, 600);
    window.is_open();

    return 0;
}
//------------------------------------------
