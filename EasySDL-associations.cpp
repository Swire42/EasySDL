#include "EasySDL.hpp"
#include "EasySDL-associations.hpp"

void associations::associateDown(int key, void (*fonction)())
{
	keyDown[key]=fonction;
	return;
}

void associations::associateUp(int key, void (*fonction)())
{
	keyUp[key]=fonction;
	return;
}

void associations::reset()
{
 for (int i=0; i<1000; i++)
 {
  keyDown[i]=rien;
  keyUp[i]=rien;
 }

 mouseMotion=rien;
 mouseButtonLeftDown=rien;
 mouseButtonLeftUp=rien;
 mouseButtonRightDown=rien;
 mouseButtonRightUp=rien;
 mouseButtonMiddleDown=rien;
 mouseButtonMiddleUp=rien;
 mouseButtonWheelDown=rien;
 mouseButtonWheelUp=rien;
 resizeWindow=rien;
}

void associations::sendInputTo(string *dest)
{
	keyboardCharDest=dest;
	keyDown[SDLK_a]=key2char::write_a;
	keyDown[SDLK_b]=key2char::write_b;
	keyDown[SDLK_c]=key2char::write_c;
	keyDown[SDLK_d]=key2char::write_d;
	keyDown[SDLK_e]=key2char::write_e;
	keyDown[SDLK_f]=key2char::write_f;
	keyDown[SDLK_g]=key2char::write_g;
	keyDown[SDLK_h]=key2char::write_h;
	keyDown[SDLK_i]=key2char::write_i;
	keyDown[SDLK_j]=key2char::write_j;
	keyDown[SDLK_k]=key2char::write_k;
	keyDown[SDLK_l]=key2char::write_l;
	keyDown[SDLK_m]=key2char::write_m;
	keyDown[SDLK_n]=key2char::write_n;
	keyDown[SDLK_o]=key2char::write_o;
	keyDown[SDLK_p]=key2char::write_p;
	keyDown[SDLK_q]=key2char::write_q;
	keyDown[SDLK_r]=key2char::write_r;
	keyDown[SDLK_s]=key2char::write_s;
	keyDown[SDLK_t]=key2char::write_t;
	keyDown[SDLK_u]=key2char::write_u;
	keyDown[SDLK_v]=key2char::write_v;
	keyDown[SDLK_w]=key2char::write_w;
	keyDown[SDLK_x]=key2char::write_x;
	keyDown[SDLK_y]=key2char::write_y;
	keyDown[SDLK_z]=key2char::write_z;

	keyDown[SDLK_WORLD_18]=key2char::write_world_18;
	keyDown[SDLK_AMPERSAND]=key2char::write_ampersand;
	keyDown[SDLK_WORLD_73]=key2char::write_world_73;
	keyDown[SDLK_QUOTEDBL]=key2char::write_quotedbl;
	keyDown[SDLK_QUOTE]=key2char::write_quote;
	keyDown[SDLK_LEFTPAREN]=key2char::write_leftparen;
	keyDown[SDLK_MINUS]=key2char::write_minus;
	keyDown[SDLK_WORLD_72]=key2char::write_world_72;
	keyDown[SDLK_UNDERSCORE]=key2char::write_underscore;
	keyDown[SDLK_WORLD_71]=key2char::write_world_71;
	keyDown[SDLK_WORLD_64]=key2char::write_world_64;
	keyDown[SDLK_RIGHTPAREN]=key2char::write_rightparen;
	keyDown[SDLK_EQUALS]=key2char::write_equals;
	keyDown[SDLK_BACKSPACE]=key2char::write_backspace;

	keyDown[SDLK_TAB]=key2char::write_tab;
	keyDown[SDLK_CARET]=key2char::write_caret;
	keyDown[SDLK_DOLLAR]=key2char::write_dollar;
	keyDown[SDLK_ASTERISK]=key2char::write_asterisk;

	keyDown[SDLK_WORLD_89]=key2char::write_world_89;
	keyDown[SDLK_RETURN]=key2char::write_return;

	keyDown[SDLK_KP0]=key2char::write_kp0;
	keyDown[SDLK_KP1]=key2char::write_kp1;
	keyDown[SDLK_KP2]=key2char::write_kp2;
	keyDown[SDLK_KP3]=key2char::write_kp3;
	keyDown[SDLK_KP4]=key2char::write_kp4;
	keyDown[SDLK_KP5]=key2char::write_kp5;
	keyDown[SDLK_KP6]=key2char::write_kp6;
	keyDown[SDLK_KP7]=key2char::write_kp7;
	keyDown[SDLK_KP8]=key2char::write_kp8;
	keyDown[SDLK_KP9]=key2char::write_kp9;
	keyDown[SDLK_KP_DIVIDE]=key2char::write_kp_divide;
	keyDown[SDLK_KP_MULTIPLY]=key2char::write_kp_multiply;
	keyDown[SDLK_KP_MINUS]=key2char::write_kp_minus;
	keyDown[SDLK_KP_PLUS]=key2char::write_kp_plus;
	keyDown[SDLK_KP_EQUALS]=key2char::write_kp_equals;
	keyDown[SDLK_KP_ENTER]=key2char::write_kp_enter;
}

void associations::sendInputTo(int *dest)
{
	keyboardIntDest=dest;
	keyDown[SDLK_KP0]=key2int::write_kp0;
	keyDown[SDLK_KP1]=key2int::write_kp1;
	keyDown[SDLK_KP2]=key2int::write_kp2;
	keyDown[SDLK_KP3]=key2int::write_kp3;
	keyDown[SDLK_KP4]=key2int::write_kp4;
	keyDown[SDLK_KP5]=key2int::write_kp5;
	keyDown[SDLK_KP6]=key2int::write_kp6;
	keyDown[SDLK_KP7]=key2int::write_kp7;
	keyDown[SDLK_KP8]=key2int::write_kp8;
	keyDown[SDLK_KP9]=key2int::write_kp9;
	keyDown[SDLK_BACKSPACE]=key2int::write_backspace;
}
