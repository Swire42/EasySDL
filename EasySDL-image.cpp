#include "EasySDL.hpp"
#include "EasySDL-image.hpp"

int image::load(string image, SDL_Surface *(*dest))
{
 if (dest==NULL) dest=&textureOf[image];
 *dest=IMG_Load(image.c_str());
 if (*dest==NULL) return 1;
 else return 0;
}
