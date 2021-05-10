//------------------------------------------
// Author :
// Sakhil Kuliev
// Joshua Jakowlew
//------------------------------------------
// Standard Library Including
#include <iostream>

// Internal including

//------------------------------------------
// External Library including
#include <SDL2/SDL.h>
//------------------------------------------
// Preprocessor Directives
#define SDL_MAIN_HANDLED
//------------------------------------------
// Start of program
int main(int argc, char* argv[]) {
  SDL_Window* window;
  SDL_Renderer* renderer;
  SDL_Surface* surface;
  SDL_Texture* texture;
  SDL_Event event;

  if (SDL_Init(SDL_INIT_VIDEO) < 0) {
    SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "Couldn't initialize SDL: %s",
                 SDL_GetError());
    return 3;
  }

  if (SDL_CreateWindowAndRenderer(320, 240, SDL_WINDOW_RESIZABLE, &window,
                                  &renderer)) {
    SDL_LogError(SDL_LOG_CATEGORY_APPLICATION,
                 "Couldn't create window and renderer: %s", SDL_GetError());
    return 3;
  }

  surface = SDL_LoadBMP(R"(C:\Users\kobri\Source\Repos\WFS\res\sample.bmp)");
  if (!surface) {
    SDL_LogError(SDL_LOG_CATEGORY_APPLICATION,
                 "Couldn't create surface from image: %s", SDL_GetError());
    return 3;
  }
  texture = SDL_CreateTextureFromSurface(renderer, surface);
  if (!texture) {
    SDL_LogError(SDL_LOG_CATEGORY_APPLICATION,
                 "Couldn't create texture from surface: %s", SDL_GetError());
    return 3;
  }
  SDL_FreeSurface(surface);

  while (1) {
    SDL_PollEvent(&event);
    if (event.type == SDL_QUIT or event.type == SDL_SCANCODE_ESCAPE) {
      break;
    }
    SDL_SetRenderDrawColor(renderer, 0x10, 0x20, 0x03, 0x04);
    SDL_RenderClear(renderer);
    SDL_RenderCopy(renderer, texture, nullptr, nullptr);
    SDL_RenderPresent(renderer);
  }

  SDL_DestroyTexture(texture);
  SDL_DestroyRenderer(renderer);
  SDL_DestroyWindow(window);

  SDL_Quit();

  return 0;
}
//------------------------------------------
