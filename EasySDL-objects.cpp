#include "EasySDL.hpp"
#include "EasySDL-objects.hpp"

void objects::Area::areaPlace(SDL_Surface *surf, bool autoDestroySurface, int x, int y, int x0, int y0, double angle, double scale)
{
 blit(area, surf, autoDestroySurface, x, y, x0, y0, angle, scale);
}

void objects::Area::place()
{
 window::place(area, false, x, y);
}

void objects::Area::place(int x0, int y0, double angle, double scale)
{
 window::place(area, false, x, y, x0, y0, angle, scale);
}

objects::Area::Area() {}

void objects::Area::init(int _w, int _h)
{
 SDL_FreeSurface(area);
 w=_w; h=_h;
 area=SDL_CreateRGBSurface(SDL_HWSURFACE|SDL_SRCALPHA, w, h, 32, 0, 0, 0, 0);
}

objects::Area::Area(int _w, int _h)
{
 init(_w, _h);
}

objects::Area::~Area()
{
 SDL_FreeSurface(area);
}

void objects::Area::ignoreColor(int r, int g, int b) {SDL_SetColorKey(area, SDL_SRCCOLORKEY, SDL_MapRGB(area->format, r, g, b));}



bool objects::BasicArea::isFocused(int _x, int _y)
{
 return (x<=_x) && ((x+w)>_x) && (y<=_y) && ((y+h)>_y);
}

objects::BasicArea::BasicArea(int _w, int _h) : Area(_w, _h) {}
objects::BasicArea::BasicArea() : Area() {}



bool objects::Button::isFocused(int _x, int _y)
{
 return (x<=_x) && ((x+w)>_x) && (y<=_y) && ((y+h)>_y);
}

void objects::Button::build()
{
 SDL_FillRect(area, NULL, SDL_MapRGB(area->format, 0, 0, 0));
 drawContent(this);
 /*
 drawRectangle(0, 0, w, h, 63, 63, 63);
 drawRectangle(2, 2, w-4, h-4, 127, 127, 127);
 writeText(txt, w/2, h/2, "default", 63, 63, 63, x_center, y_middle);
 */
}

void objects::Button::press(int screenX, int screenY)
{
 action(screenX-x, screenY-y);
}



bool objects::Scrollable::isFocused(int _x, int _y)
{
 return (x<=_x) && ((x+w)>_x) && (y<=_y) && ((y+h)>_y);
}

void objects::Scrollable::initContent(int _h)
{
 content.init(w-5, _h);
}

void objects::Scrollable::shiftDown()
{
 deltaY+=defilementSpeed;
 if (deltaY>(content.h-h))
 {
  deltaY=content.h-h;
 }
}

void objects::Scrollable::shiftUp()
{
 deltaY-=defilementSpeed;
 if (deltaY<0)
 {
  deltaY=0;
 }
}

void objects::Scrollable::build()
{
 SDL_FillRect(area, NULL, SDL_MapRGB(area->format, 0, 0, 0));
 areaPlace(content.area, false, 0, -deltaY);
 areaPlace(draw::createRect(5, h, 31, 31, 31), true, w-5, 0);
 areaPlace(draw::createRect(5, (h/(double)(content.h))*h, 127, 127, 127), true, w-5, (h/(double)(content.h))*deltaY);
}

objects::Scrollable::Scrollable() {}
