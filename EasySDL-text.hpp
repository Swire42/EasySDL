#ifndef EASYSDL_TEXT_H
#define EASYSDL_TEXT_H

#include "EasySDL.hpp"

namespace text
{
 extern unsigned int tabSize; /// the number of spaces to show when finding a '\t' character

 int load(string name, int size, string name2use);

 int load(string name, int size, TTF_Font *(*dest));

 //void write(string txt, int x, int y, string name, int r, int g, int b, int x0=x_left, int y0=y_top, double angle=0, double scale=1);
 SDL_Surface* create(string txt, string font, int r, int g, int b);
 SDL_Surface* create(string txt, TTF_Font* font, int r, int g, int b);
 
 /**
  writeALine()
  A function used by formatedText() to get a line of text.
  at return a part (or all) of text will be deleted from text and blited on the surface that is returned by the function.
  for args, see formatedText().
  The slowness of formatedText() is mainly due to this function.
 **/
 SDL_Surface* writeALine(string* txt, TTF_Font* font, int r, int g, int b, int w, bool breakWords=false);
 
 /**
  formatedText()
  A function to create a text, with some format options (=only positionement)
  It can handle all basic ASCII printable caracters + '\n' and '\t'.
  This function might be slow. if your text isn't alway changing, store the output of this function in a SDL_Surface.
  
  w => maximal width (0=don't care), text will continue on next line if > to that
  h => maximal height (0=don't care) text will be stoped when it will be > to that
  breakWords => when breaking a line :
   true :
    <-----w----->
    this is a wo-
    rd
   false :
    <-----w----->
    this is a
    word
   note : if there can only be a word on a line, act like if breakWords=true
  alignX : text horizontal alignement  (x_left, x_center, x_right)
  minimalSize : if the text is smaller than (w, h), return a surface with smaller size ? (doesn't have effect on height if h==0)
 **/
 SDL_Surface* formatedText(string txt, TTF_Font* font, int r, int g, int b, int w, int h=0, bool breakWords=false, int alignX=x_left, bool minimalSize=true);
}

#endif //EASYSDL_TEXT_H
