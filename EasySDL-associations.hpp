#ifndef EASYSDL_ASSOCIATIONS_H
#define EASYSDL_ASSOCIATIONS_H

#include "EasySDL.hpp"

namespace associations
{
 void associateDown(int key, void (*fonction)());

 void associateUp(int key, void (*fonction)());

 void reset();

 void sendInputTo(string *dest);
 void sendInputTo(int *dest);
}

#endif //EASYSDL_ASSOCIATIONS_H
