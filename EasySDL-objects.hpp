#ifndef EASYSDL_OBJECTS_H
#define EASYSDL_OBJECTS_H

#include "EasySDL.hpp"

namespace objects
{
 struct Area
 {
  int h;
  int w;
  int x=0, y=0;
  map<string, double> values;
  SDL_Surface * area=NULL;
  
  void areaPlace(SDL_Surface *surf, bool autoDestroySurface, int x, int y, int x0=x_left, int y0=y_top, double angle=0, double scale=1);;
  void place();
  void place(int x0, int y0, double angle=0, double scale=1);
  Area();
  void init(int _w, int _h);
  Area(int _h, int _w);
  ~Area();
  void ignoreColor(int r, int g, int b);
 };

 struct BasicArea : Area
 {
  bool isFocused(int _x, int _y);
  BasicArea(int _h, int _w);
  BasicArea();
 };

 struct Button : Area
 {
  bool over=false;
  string txt="";
  
  void (*action)(int, int)=NULL; // x, y
  void (*drawContent)(Button*)=NULL;

  bool isFocused(int _x, int _y);
  void build();
  void press(int screenX, int screenY);
 };
 
 /**
  This is a structure for a button.
  It use a "customPart" struct made by you
  the "customPart" struct must contain :
  - bool isInside(int x, int y) where (0, 0) is the top-left corner of the window/container
     this func must tell if the x and y coords are inside the button
  - void show()
     this func will be used by the container to blit it.
     It must blit something on "dest" his x0 will be in x, and his y0 will be in y.
  - void clic(int x, int y) where (0, 0) is the top-left corner of the window/container
     
 **/
 
 /*template<class customPart> struct Button : customPart
 {
  bool over=false;
  int x, y;
  int h, w;
  int x0, y0;
  SDL_Surface *dest;

  //bool isInside(int screenX, int screenY);
  //void show();
  //void clic(int screenX, int screenY);
  
 };*/

 struct Scrollable : Area
 {
  BasicArea content;
  int deltaY=0;
  int defilementSpeed=5;
  
  bool isFocused(int _x, int _y);
  void initContent(int _h);
  void shiftDown();
  void shiftUp();
  void build();
  Scrollable();
 };
}

#endif // EASYSDL_OBJECTS_H
