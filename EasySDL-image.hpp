#ifndef EASYSDL_IMAGE_H
#define EASYSDL_IMAGE_H

#include "EasySDL.hpp"

namespace image
{
 int load(string image, SDL_Surface *(*dest)=NULL);
}

#endif //EASYSDL_IMAGE_H
