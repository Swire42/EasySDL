#include "EasySDL.hpp"
#include "EasySDL-window.hpp"

void window::place(SDL_Surface *surf, bool autoDestroySurface, int x, int y, int x0, int y0, double angle, double scale)
{
 /*if (surf==NULL) return;
 
 if ((angle!=0) || (scale!=1))
 {
  SDL_Surface *thing2place=NULL;
  thing2place=rotozoomSurface(surf, angle, scale, 0);

  SDL_Rect pos;
  switch (x0)
  {
  case x_left:
   pos.x=x;
   break;

  case x_center:
   pos.x=x-(thing2place->w/2);
   break;

  case x_right:
   pos.x=x-thing2place->w;
   break;
  }

  switch (y0)
  {
  case y_top:
   pos.y=y;
   break;

  case y_middle:
   pos.y=y-(thing2place->h/2);
   break;

  case y_bottom:
   pos.y=y-thing2place->h;
   break;
  }

  SDL_BlitSurface(thing2place, NULL, surface, &pos);
  SDL_FreeSurface(thing2place);
 }

 else
 {
  SDL_Rect pos;
  switch (x0)
  {
  case x_left:
   pos.x=x;
   break;

  case x_center:
   pos.x=x-(surf->w/2);
   break;

  case x_right:
   pos.x=x-surf->w;
   break;
  }

  switch (y0)
  {
  case y_top:
   pos.y=y;
   break;

  case y_middle:
   pos.y=y-(surf->h/2);
   break;

  case y_bottom:
   pos.y=y-surf->h;
   break;
  }

  SDL_BlitSurface(surf, NULL, surface, &pos);
 }
 
 if (autoDestroySurface) SDL_FreeSurface(surf);*/
 blit(surface, surf, autoDestroySurface, x, y, x0, y0, angle, scale);
}

void window::refresh(bool clearWindow)
{
 SDL_Flip(surface);
 if (clearWindow) SDL_FillRect(surface, NULL, SDL_MapRGB(surface->format, 0, 0, 0));
 return;
}

void window::events()
{
 SDL_Event event;
 while(SDL_PollEvent(&event))
 {
  switch (event.type)
  {
   case SDL_QUIT:
    quit=true;
    break;

   case SDL_ACTIVEEVENT:
    break;

   case SDL_VIDEORESIZE:
    resizeWindow(event.resize.w, event.resize.h);
    //SDL_FreeSurface(surface);
    //cout << "resize : " << event.resize.w << ", " << event.resize.h << endl;
    //surface=SDL_SetVideoMode(event.resize.w, event.resize.h, 32, windowFlags);
    break;

   case SDL_KEYDOWN:
    lastKeyDown=event.key.keysym.sym;
    keyDown[event.key.keysym.sym]();
    break;

   case SDL_KEYUP:
    keyUp[event.key.keysym.sym]();
    break;

   case SDL_MOUSEMOTION:
    mouseX=event.motion.x;
    mouseY=event.motion.y;
    mouseMotion(event.motion.x, event.motion.y);
    break;

   case SDL_MOUSEBUTTONDOWN:
    mousePressed[event.button.button]=true;
    switch (event.button.button)
    {
     case SDL_BUTTON_LEFT:
      mouseButtonLeftDown(event.button.x, event.button.y);
      break;

     case SDL_BUTTON_MIDDLE:
      mouseButtonMiddleDown(event.button.x, event.button.y);
      break;

     case SDL_BUTTON_RIGHT:
      mouseButtonRightDown(event.button.x, event.button.y);
      break;

     case SDL_BUTTON_WHEELDOWN:
      mouseButtonWheelDown(event.button.x, event.button.y);
      break;

     case SDL_BUTTON_WHEELUP:
      mouseButtonWheelUp(event.button.x, event.button.y);
      break;
    }
    break;

   case SDL_MOUSEBUTTONUP:
    mousePressed[event.button.button]=false;
    switch (event.button.button)
    {
     case SDL_BUTTON_LEFT:
      mouseButtonLeftUp(event.button.x, event.button.y);
      break;

     case SDL_BUTTON_MIDDLE:
      mouseButtonMiddleUp(event.button.x, event.button.y);
      break;

     case SDL_BUTTON_RIGHT:
      mouseButtonRightUp(event.button.x, event.button.y);
      break;

     case SDL_BUTTON_WHEELDOWN:
      //mouseButtonWheelDown(event.button.x, event.button.y);
      break;

     case SDL_BUTTON_WHEELUP:
      //mouseButtonWheelUp(event.button.x, event.button.y);
      break;
    }
    break;
  }
 }
 return;
}
