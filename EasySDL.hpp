#ifndef EASYSDL_H
#define EASYSDL_H

#include <iostream>
#include <map>
#include <vector>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <string>
#include <math.h>

#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
#include <SDL/SDL_rotozoom.h>
#include <SDL/SDL_gfxPrimitives.h>
#include <SDL/SDL_gfxBlitFunc.h>



using namespace std;
/// Structures

struct Object;
/// Constants

const int x_left=0, x_center=1, x_right=2;
const int y_top=0, y_middle=1, y_bottom=2;

// to create transparent surfaces
extern int rmask;
extern int gmask;
extern int bmask;
extern int amask;

#define createTransparentSurface(w, h) SDL_CreateRGBSurface(SDL_HWSURFACE, w, h, 32, rmask, gmask, bmask, amask)
#define emptyTransparentSurface(surface) SDL_FillRect(surface, NULL, SDL_MapRGBA(surface->format, 0, 0, 0, 0))

/// Variables

extern SDL_Surface *surface;

extern map <string, SDL_Surface*> textureOf;
extern map <string, TTF_Font*> fontNamed;

extern unsigned int lastTick;
extern bool quit;
extern bool tooSlow;

extern void (*keyDown[1000])();
extern void (*keyUp[1000])();
extern void (*mouseMotion)(int, int);
extern void (*mouseButtonLeftDown)(int, int);
extern void (*mouseButtonLeftUp)(int, int);
extern void (*mouseButtonRightDown)(int, int);
extern void (*mouseButtonRightUp)(int, int);
extern void (*mouseButtonMiddleDown)(int, int);
extern void (*mouseButtonMiddleUp)(int, int);
extern void (*mouseButtonWheelDown)(int, int);
extern void (*mouseButtonWheelUp)(int, int);
extern void (*resizeWindow)(int, int);

extern string *keyboardCharDest;
extern int *keyboardIntDest;
extern int lastKeyDown;
extern int mouseX;
extern int mouseY;
extern bool mousePressed[6];
#define SMOOTHING_AUTO 2
extern int smoothingMode;
extern Uint32 windowFlags;

/// Functions prototypes

void rien();

void rien(int x, int y);

void initEasySDL(unsigned int w, unsigned int h, string windowName="Untitled", string logo="none", Uint32 flags=SDL_HWSURFACE|SDL_DOUBLEBUF|SDL_SRCALPHA);

void wait(int time);

void waitFromLastWait(int time);

SDL_Color Color(int r, int g, int b);

SDL_Surface* transfromSurf(double angle, double scale=1);
void blit(SDL_Surface *dest, SDL_Surface *surf, bool autoDestroySurface, int x, int y, int x0=x_left, int y0=y_top, double angle=0, double scale=1);

#include "EasySDL-associations.hpp"
#include "EasySDL-draw.hpp"
#include "EasySDL-image.hpp"
#include "EasySDL-key2char.hpp"
#include "EasySDL-key2int.hpp"
#include "EasySDL-maps.hpp"
#include "EasySDL-objects.hpp"
#include "EasySDL-text.hpp"
#include "EasySDL-window.hpp"

#endif // EASYSDL
