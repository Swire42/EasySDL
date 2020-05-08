#ifndef EASYSDL_MAPS_H
#define EASYSDL_MAPS_H

#include "EasySDL.hpp"

namespace maps
{
 /**
  casesT is the type of the cases of the map.
  it must have this members:
  - a constructor with no args.
  - void place(SDL_Surface *dest, int x, int y, int x0, int y0, double angle, double scale)
 **/
 template<class casesT> struct caseMap
 {
  SDL_Surface *surf;
  int tileSide; // the size of the sqares at scale==1
  vector<vector<casesT> > cases;
  
  /**
   show() : shows the map.
   For now, only support angle=0.
  **/
  void show(int w, int h, int x, int y, int x0=x_center, int y0=y_middle, double angle=0, double scale=1);
 };
}

#endif //EASYSDL_MAPS_H
