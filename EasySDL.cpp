#include "EasySDL.hpp"

#if SDL_BYTEORDER == SDL_BIG_ENDIAN
 int rmask=0xff000000;
 int gmask=0x00ff0000;
 int bmask=0x0000ff00;
 int amask=0x000000ff;
#else
 int rmask=0x000000ff;
 int gmask=0x0000ff00;
 int bmask=0x00ff0000;
 int amask=0xff000000;
#endif

SDL_Surface *surface=NULL;

map<string, SDL_Surface*> textureOf;
map<string, TTF_Font*> fontNamed;

unsigned int lastTick;
bool quit=false;
bool tooSlow=false;

void (*keyDown[1000])();
void (*keyUp[1000])();
void (*mouseMotion)(int, int);
void (*mouseButtonLeftDown)(int, int);
void (*mouseButtonLeftUp)(int, int);
void (*mouseButtonRightDown)(int, int);
void (*mouseButtonRightUp)(int, int);
void (*mouseButtonMiddleDown)(int, int);
void (*mouseButtonMiddleUp)(int, int);
void (*mouseButtonWheelDown)(int, int);
void (*mouseButtonWheelUp)(int, int);
void (*resizeWindow)(int, int);

string *keyboardCharDest=NULL;
int *keyboardIntDest=NULL;
int lastKeyDown=0;
int mouseX=0;
int mouseY=0;
bool mousePressed[6]={false, false, false, false, false, false};
int smoothingMode=SMOOTHING_AUTO;
Uint32 windowFlags;

/// Functions

void rien()
{
 return;
}

void rien(int x, int y)
{
 return;
}

void initEasySDL(unsigned int w, unsigned int h, string windowName, string logo, Uint32 flags)
{
 windowFlags=flags;
 SDL_Init(SDL_INIT_VIDEO);
 TTF_Init();
 surface = SDL_SetVideoMode(w, h, 32, windowFlags);
 SDL_Flip(surface);
 SDL_WM_SetCaption(windowName.c_str(), NULL);
 if (logo!="none")
 {
  SDL_WM_SetIcon(IMG_Load(logo.c_str()), NULL);
 }
 SDL_FillRect(surface, NULL, SDL_MapRGB(surface->format, 0, 0, 0));

 associations::reset();

 SDL_EnableKeyRepeat(200, 20);

 lastTick=SDL_GetTicks();
 return;
}

void wait(int time)
{
 SDL_Delay(time);
 lastTick=SDL_GetTicks();
 return;
}

void waitFromLastWait(int time)
{
 tooSlow=true;
 //if ((lastTick-((int64_t)(SDL_GetTicks())-time)-10)>0) SDL_Delay(lastTick-((int64_t)(SDL_GetTicks())-time)-10);
 while (lastTick>SDL_GetTicks()-time) tooSlow=false;
 lastTick=SDL_GetTicks();
 return;
}

SDL_Color Color(int r, int g, int b)
{
 SDL_Color c;
 c.r=r;
 c.g=g;
 c.b=b;
 return c;
}

void blit(SDL_Surface *dest, SDL_Surface *surf, bool autoDestroySurface, int x, int y, int x0, int y0, double angle, double scale)
{
 if (surf==NULL) return;
 
 if ((angle!=0) || (scale!=1))
 {
  SDL_Surface *thing2place=NULL;
  if (smoothingMode==SMOOTHING_AUTO)
  {
   if (scale<1) thing2place=rotozoomSurface(surf, angle, scale, SMOOTHING_ON);
   else thing2place=rotozoomSurface(surf, angle, scale, SMOOTHING_OFF);
  }
  else thing2place=rotozoomSurface(surf, angle, scale, smoothingMode);
  
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
   pos.x=x-thing2place->w+1;
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
   pos.y=y-thing2place->h+1;
   break;
  }

  SDL_BlitSurface(thing2place, NULL, dest, &pos);
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
   pos.x=x-surf->w+1;
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
   pos.y=y-surf->h+1;
   break;
  }

  SDL_BlitSurface(surf, NULL, dest, &pos);
 }
 
 if (autoDestroySurface) SDL_FreeSurface(surf);
}
