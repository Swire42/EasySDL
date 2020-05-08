#include "EasySDL.hpp"
#include "EasySDL-draw.hpp"

/*void draw::polygon(const short int* x, const short int* y, int nbPoints, int r, int g, int b, int a)
{
	filledPolygonRGBA (surface, x, y, nbPoints, r, g, b, a);
}

void draw::circle(short int center_x, short int center_y, short int radius, int r, int g, int b, int a)
{
	filledCircleRGBA(surface, center_x, center_y, radius, r, g, b, a);
}

void draw::rectangle(int x, int y, int w, int h, int r, int g, int b, int a, int x0, int y0, double angle, double scale)
{
	SDL_Surface *rect=NULL;
	rect=SDL_CreateRGBSurface(SDL_HWSURFACE, w, h, 32, 0, 0, 0, 0);
	SDL_FillRect(rect, NULL, SDL_MapRGB(surface->format, r, g, b));
	SDL_SetAlpha(rect, SDL_SRCALPHA, a);
	
	window::place(rect, x, y, x0, y0, angle, scale);

	SDL_FreeSurface(rect);
	return;
}*/

SDL_Surface* draw::createRect(int w, int h, int r, int g, int b, int a)
{
	SDL_Surface *rect=NULL;
	rect=SDL_CreateRGBSurface(SDL_HWSURFACE, w, h, 32, 0, 0, 0, 0);
	SDL_FillRect(rect, NULL, SDL_MapRGB(surface->format, r, g, b));
	SDL_SetAlpha(rect, SDL_SRCALPHA, a);
	return rect;
}
