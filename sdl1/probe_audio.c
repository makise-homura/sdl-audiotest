#include "SDL.h"

const char *drv[] =
{
    "dsp",
    "dma",
    "esd",
    "artsc",
    "pulse",
    "alsa",
    "arts",
    NULL
};

void dummy(void* a, Uint8* b, int c) {;}

struct SDL_AudioSpec obtained, desired =
{
    .format = AUDIO_S16LSB,
    .channels = 2,
    .samples = 512,
    .callback = dummy
};

int main(int argc, char **argv)
{
    int i;
    const char *res;
    for (i = 0; drv[i] != NULL; ++i)
    {
        if(SDL_AudioInit(drv[i])<0)
        {
            res = "failed";
        }
        else
        {
            res = (SDL_OpenAudio(&desired, &obtained)<0) ? "missing" : "exist";
            SDL_AudioQuit();
        }
        printf("Audio driver %s:\t%s\n", drv[i], res);
    }
    return 0;
}
