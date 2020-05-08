#include "EasySDL.hpp"
#include "EasySDL-text.hpp"

unsigned int text::tabSize=4;

int text::load(string name, int size, string name2use)
{
 fontNamed[name2use]=TTF_OpenFont(name.c_str(), size);
 if (fontNamed[name2use]==NULL) return 1;
 else return 0;
}

int text::load(string name, int size, TTF_Font *(*dest))
{
 *dest=TTF_OpenFont(name.c_str(), size);
 if (*dest==NULL) return 1;
 else return 0;
}

SDL_Surface* text::create(string txt, string fontName, int r, int g, int b)
{
 SDL_Surface *txtSurface=NULL;
 SDL_Color color={(Uint8)(r), (Uint8)(g), (Uint8)(b)};
 txtSurface=TTF_RenderText_Blended(fontNamed[fontName], txt.c_str(), color);
 return txtSurface;
}

SDL_Surface* text::create(string txt, TTF_Font* font, int r, int g, int b)
{
 SDL_Surface *txtSurface=NULL;
 SDL_Color color={(Uint8)(r), (Uint8)(g), (Uint8)(b)};
 txtSurface=TTF_RenderText_Blended(font, txt.c_str(), color);
 if (txtSurface==NULL) txtSurface=draw::createRect(0, 0, 0, 0, 0);
 return txtSurface;
}

SDL_Surface* text::writeALine(string* txt, TTF_Font* font, int r, int g, int b, int w, bool breakWords)
{
 string usedText="";
 string rest="";
 string text=*txt;
 vector<string> words;
 SDL_Surface* line=NULL;
 
 /// phase 1 : only take the part before the first '\n' and cut it into words
 words.push_back("");
 while (text.size()>0)
 {
  if (text[0]=='\n')
  {
   break;
  }
  else if (text[0]==' ')
  {
   words.push_back(" ");
  }
  else if (text[0]=='\t')
  {
   words.push_back("");
   for (unsigned int i=0; i<tabSize; i++)
   {
    words.back()+=" ";
   }
  }
  else
  {
   words.back()+=text[0];
  }
  text.erase(text.begin());
 }
 
 if (w==0)
 {
  if (!text.empty()) text.erase(text.begin());
  *txt=text;
  for (unsigned int i=0; i<words.size(); i++)
  {
   usedText+=words[i];
  }
  line=create(usedText, font, r, g, b);
  return line;
 }
 
 else
  {
  /// phase 2 : finding last word
  /**
   this part needs performances improvements.
   Suggestions :
   - monospace font specification (max nb of cars calculed)
   - dichotomy, to accelerate the search (or something more optimized, 'cause all cars ~ got the same widgh)
  **/
  
  unsigned int wordI=0;
  line=create(words[0], font, r, g, b);
  
  while (line->w<w)
  {
   usedText+=words[wordI];
   wordI++;
   if (wordI<words.size())
   {
    SDL_FreeSurface(line);
    line=create(usedText+words[wordI], font, r, g, b);
   }
   else break;
  }
  
  /// phase 3 adjusting last word
  if (wordI<words.size())
  {
   if ((breakWords) || ((wordI==0) && (line->w>w)))
   {
    // last word needs to be broke.
    unsigned int charI=0;
    line=create(usedText+words[wordI][0], font, r, g, b);
    
    while (line->w<w)
    {
     usedText+=words[wordI][charI];
     charI++;
     if (charI<words[wordI].size())
     {
      SDL_FreeSurface(line);
      if (words[wordI][charI]==' ') line=create(usedText+words[wordI][charI], font, r, g, b);
      else line=create(usedText+words[wordI][charI]+"-", font, r, g, b);
     }
    }
    if ((charI!=0) && (usedText.back()!=' ')) usedText+="-";
    
    for (unsigned int i=charI; i<words[wordI].size(); i++)
    {
     // !=' '  in case the space(s) at the begin of the word wasn't used.
     if (words[wordI][i]!=' ') rest+=words[wordI][i];
    }
    wordI++;
   }
   
   if (wordI<words.size())
   {
    // remove begining spaces of next word.
    if (!((breakWords) || ((wordI-1==0) && (line->w>w)))) while (words[wordI][0]==' ') words[wordI].erase(words[wordI].begin());
    
    for (unsigned int i=wordI; i<words.size(); i++)
    {
     rest+=words[i];
    }
   }
  }
  
  if ((rest=="") && (!text.empty()))
  {
   if (text.front()=='\n') text.erase(text.begin());
  }
  
  text=rest+text;
  *txt=text;
  SDL_FreeSurface(line);
  line=create(usedText, font, r, g, b);
  return line;
 }
}

SDL_Surface* text::formatedText(string txt, TTF_Font* font, int r, int g, int b, int w, int h, bool breakWords, int alignX, bool minimalSize)
{
 vector<SDL_Surface*> lines;
 int lineH;
 int currentH=0;
 int minW=0; // the minimal width of the surface
 int minH=0; // the minimal height of the surface
 
 while (txt!="")
 {
  lines.push_back(writeALine(&txt, font, r, g, b, w, breakWords));
  if (lines.back()->w>minW) minW=lines.back()->w;
 }
 
 lineH=lines[0]->h;
 minH=lineH*lines.size();
 
 if (minimalSize)
 {
  if ((w>minW) || (w==0)) w=minW;
  if ((h>minH) || (h==0)) h=minH;
 }
 
 SDL_Surface* surf=createTransparentSurface(w, h);
 emptyTransparentSurface(surf);
 
 for (unsigned int i=0; i<lines.size(); i++)
 {
  if (currentH>h) break;
  SDL_SetAlpha(lines[i], 0, SDL_ALPHA_OPAQUE);
  switch (alignX)
  {
  case x_left:
   blit(surf, lines[i], true, 0, currentH, x_left, y_top);
   break;
   
  case x_center:
   blit(surf, lines[i], true, w/2, currentH, x_center, y_top);
   break;
   
  case x_right:
   blit(surf, lines[i], true, w, currentH, x_right, y_top);
   break;
  }
  
  currentH+=lineH;
 }
 
 return surf;
}
