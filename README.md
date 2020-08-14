A couple of simple tools to identify enabled sound drivers for SDL1 and SDL2.

### Purpose

* `sdl1/probe_audio` will probe all known audio drivers for SDL1 and show,
if they exist (compiled into SDL) or missing (not compiled).

* `sdl2/list_audio` will just list all audio drivers compiled into SDL2.

### Building

```bash
$ make -C sdl1 clean all
$ make -C sdl2 clean all
```

Obviously, each of binaries require corresponding version of SDL to be
installed, and its `sdl-config` or `sdl2-config` to be available.

You may skip building one of them, if you don't have either SDL1 or SDL2,
and you wish to check only one of them which is installed.

### Running and example output

```
$ sdl1/probe_audio

Audio driver dsp:       exist
Audio driver dma:       missing
Audio driver esd:       missing
Audio driver artsc:     missing
Audio driver pulse:     exist
Audio driver alsa:      missing
Audio driver arts:      missing

$ sdl2/list_audio

Audio driver 0: pulseaudio
Audio driver 1: alsa
Audio driver 2: dsp
Audio driver 3: esd
Audio driver 4: disk
Audio driver 5: dummy

```
