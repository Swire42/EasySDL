#include "EasySDL.hpp"
#include "EasySDL-maps.hpp"

/*template<class t> void maps::caseMap<t>::show(int w, int h, double x, double y, int x0, int y0, double angle, double scale)
{
 if (angle!=0)
 {
  cout << "error, turned map not supported for now !\n";
  return;
 }
 
 double xMin, yMin, xMax, yMax; // the maximal and minimal coords of the visible tiles
 switch (x0)
 {
 case x_left:
  xMin=x;
  xMax=x+(w/(double)(tileSide));
  break;
  
 case x_center:
  xMax=x-(w/(double)(tileSide)/2);
  xMax=x+(w/(double)(tileSide)/2);
  break;
  
 case x_right:
  xMin=x-(w/(double)(tileSide));
  xMax=x;
  break;
 }
 
 switch (x0)
 {
 case y_top:
  yMin=y;
  yMax=y+(h/(double)(tileSide));
  break;
  
 case y_middle:
  yMax=y-(h/(double)(tileSide)/2);
  yMax=y+(h/(double)(tileSide)/2);
  break;
  
 case y_bottom:
  yMin=y-(h/(double)(tileSide));
  yMax=y;
  break;
 }
 
 surf=SDL_CreateRGBSurface(SDL_HWSURFACE, w, h, 32, 0, 0, 0, 0);
 SDL_FillRect(surf, NULL, Color(128, 128, 128));
 
 for (int posX=floor(xMin); posX<ceil(xMax); posX++)
 {
  for (int posY=floor(yMin); posY<ceil(yMax); posY++)
  {
   
  }
 }
}*/
