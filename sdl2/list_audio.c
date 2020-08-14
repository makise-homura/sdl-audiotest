#include "SDL.h"

int main()
{
    if(SDL_Init(SDL_INIT_AUDIO)<0) return 1;
    for (int i = 0; i < SDL_GetNumAudioDrivers(); ++i)
    {
        printf("Audio driver %d:\t%s\n", i, SDL_GetAudioDriver(i));
    }
    SDL_Quit();
    return 0;
}
