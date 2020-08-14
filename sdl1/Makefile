CC=gcc
CFLAGS=-g -O2 -Wall $(shell sdl-config --cflags)
LDFLAGS=$(shell sdl-config --libs)

PROGRAMS=$(basename $(wildcard *.c))

%: %.c
	$(CC) $(CPPFLAGS) $(CFLAGS) $^ -o $@ $(LDFLAGS)

all: $(PROGRAMS)

clean:
	rm -f $(PROGRAMS) *.o

new: clean all
