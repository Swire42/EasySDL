#ifndef EASYSDL_DRAW_H
#define EASYSDL_DRAW_H

#include "EasySDL.hpp"

namespace draw
{
 //void polygon(const short int* x, const short int* y, int nbPoints, int r, int g, int b, int a=SDL_ALPHA_OPAQUE);
 //void circle(short int center_x, short int center_y, short int radius, int r, int g, int b, int a=SDL_ALPHA_OPAQUE);
 //void rectangle(int x, int y, int h, int w, int r, int g, int b, int a=SDL_ALPHA_OPAQUE, int x0=x_left, int y0=y_top, double angle=0, double scale=1);
 SDL_Surface* createRect(int w, int h, int r, int g, int b, int a=SDL_ALPHA_OPAQUE);
}

#endif //EASYSDL_DRAW_H
