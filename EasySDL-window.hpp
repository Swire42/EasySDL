#ifndef EASYSDL_WINDOW_H
#define EASYSDL_WINDOW_H

#include "EasySDL.hpp"

namespace window
{
 /* place : a function to blit in the window.
  surf: surface to blit
  autoDestroySurface: false=surf will be kept at the end, true=surf will be destroyed (default)
  x, y: position in the window
  x0, y0: change where the (0, 0) point is in the surface values=x_left(default), x_center, x_right, y_top(default), y_middle, y_bottom
  angle: rotation in degrees
  scale: zoom factor
 */
 void place(SDL_Surface *surf, bool autoDestroySurface, int x, int y, int x0=x_left, int y0=y_top, double angle=0, double scale=1);
 void refresh(bool clearWindow=true);
 void events();
}

#endif //EASYSDL_WINDOW_H
