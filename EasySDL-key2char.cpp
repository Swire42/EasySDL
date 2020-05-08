#include "EasySDL.hpp"
#include "EasySDL-key2char.hpp"

/// LETTERS --------------------------------------------------------------------------------------

void key2char::write_a()
{
	bool upper=false;
	if (SDL_GetModState() & KMOD_SHIFT) upper=true;
	if (SDL_GetModState() & KMOD_CAPS) upper=1-upper;
	if (!upper)
	{
		(*keyboardCharDest)+="a";
	}
	else
	{
		(*keyboardCharDest)+="A";
	}
}

void key2char::write_b()
{
	bool upper=false;
	if (SDL_GetModState() & KMOD_SHIFT) upper=true;
	if (SDL_GetModState() & KMOD_CAPS) upper=1-upper;
	if (!upper)
	{
		(*keyboardCharDest)+="b";
	}
	else
	{
		(*keyboardCharDest)+="B";
	}
}

void key2char::write_c()
{
	bool upper=false;
	if (SDL_GetModState() & KMOD_SHIFT) upper=true;
	if (SDL_GetModState() & KMOD_CAPS) upper=1-upper;
	if (!upper)
	{
		(*keyboardCharDest)+="c";
	}
	else
	{
		(*keyboardCharDest)+="C";
	}
}

void key2char::write_d()
{
	bool upper=false;
	if (SDL_GetModState() & KMOD_SHIFT) upper=true;
	if (SDL_GetModState() & KMOD_CAPS) upper=1-upper;
	if (!upper)
	{
		(*keyboardCharDest)+="d";
	}
	else
	{
		(*keyboardCharDest)+="D";
	}
}

void key2char::write_e()
{
	bool upper=false;
	if (SDL_GetModState() & KMOD_SHIFT) upper=true;
	if (SDL_GetModState() & KMOD_CAPS) upper=1-upper;
	if (!upper)
	{
		(*keyboardCharDest)+="e";
	}
	else
	{
		(*keyboardCharDest)+="E";
	}
}

void key2char::write_f()
{
	bool upper=false;
	if (SDL_GetModState() & KMOD_SHIFT) upper=true;
	if (SDL_GetModState() & KMOD_CAPS) upper=1-upper;
	if (!upper)
	{
		(*keyboardCharDest)+="f";
	}
	else
	{
		(*keyboardCharDest)+="F";
	}
}

void key2char::write_g()
{
	bool upper=false;
	if (SDL_GetModState() & KMOD_SHIFT) upper=true;
	if (SDL_GetModState() & KMOD_CAPS) upper=1-upper;
	if (!upper)
	{
		(*keyboardCharDest)+="g";
	}
	else
	{
		(*keyboardCharDest)+="G";
	}
}

void key2char::write_h()
{
	bool upper=false;
	if (SDL_GetModState() & KMOD_SHIFT) upper=true;
	if (SDL_GetModState() & KMOD_CAPS) upper=1-upper;
	if (!upper)
	{
		(*keyboardCharDest)+="h";
	}
	else
	{
		(*keyboardCharDest)+="H";
	}
}

void key2char::write_i()
{
	bool upper=false;
	if (SDL_GetModState() & KMOD_SHIFT) upper=true;
	if (SDL_GetModState() & KMOD_CAPS) upper=1-upper;
	if (!upper)
	{
		(*keyboardCharDest)+="i";
	}
	else
	{
		(*keyboardCharDest)+="I";
	}
}

void key2char::write_j()
{
	bool upper=false;
	if (SDL_GetModState() & KMOD_SHIFT) upper=true;
	if (SDL_GetModState() & KMOD_CAPS) upper=1-upper;
	if (!upper)
	{
		(*keyboardCharDest)+="j";
	}
	else
	{
		(*keyboardCharDest)+="J";
	}
}

void key2char::write_k()
{
	bool upper=false;
	if (SDL_GetModState() & KMOD_SHIFT) upper=true;
	if (SDL_GetModState() & KMOD_CAPS) upper=1-upper;
	if (!upper)
	{
		(*keyboardCharDest)+="k";
	}
	else
	{
		(*keyboardCharDest)+="K";
	}
}

void key2char::write_l()
{
	bool upper=false;
	if (SDL_GetModState() & KMOD_SHIFT) upper=true;
	if (SDL_GetModState() & KMOD_CAPS) upper=1-upper;
	if (!upper)
	{
		(*keyboardCharDest)+="l";
	}
	else
	{
		(*keyboardCharDest)+="L";
	}
}

void key2char::write_m()
{
	bool upper=false;
	if (SDL_GetModState() & KMOD_SHIFT) upper=true;
	if (SDL_GetModState() & KMOD_CAPS) upper=1-upper;
	if (!upper)
	{
		(*keyboardCharDest)+="m";
	}
	else
	{
		(*keyboardCharDest)+="M";
	}
}

void key2char::write_n()
{
	bool upper=false;
	if (SDL_GetModState() & KMOD_SHIFT) upper=true;
	if (SDL_GetModState() & KMOD_CAPS) upper=1-upper;
	if (!upper)
	{
		(*keyboardCharDest)+="n";
	}
	else
	{
		(*keyboardCharDest)+="N";
	}
}

void key2char::write_o()
{
	bool upper=false;
	if (SDL_GetModState() & KMOD_SHIFT) upper=true;
	if (SDL_GetModState() & KMOD_CAPS) upper=1-upper;
	if (!upper)
	{
		(*keyboardCharDest)+="o";
	}
	else
	{
		(*keyboardCharDest)+="O";
	}
}

void key2char::write_p()
{
	bool upper=false;
	if (SDL_GetModState() & KMOD_SHIFT) upper=true;
	if (SDL_GetModState() & KMOD_CAPS) upper=1-upper;
	if (!upper)
	{
		(*keyboardCharDest)+="p";
	}
	else
	{
		(*keyboardCharDest)+="P";
	}
}

void key2char::write_q()
{
	bool upper=false;
	if (SDL_GetModState() & KMOD_SHIFT) upper=true;
	if (SDL_GetModState() & KMOD_CAPS) upper=1-upper;
	if (!upper)
	{
		(*keyboardCharDest)+="q";
	}
	else
	{
		(*keyboardCharDest)+="Q";
	}
}

void key2char::write_r()
{
	bool upper=false;
	if (SDL_GetModState() & KMOD_SHIFT) upper=true;
	if (SDL_GetModState() & KMOD_CAPS) upper=1-upper;
	if (!upper)
	{
		(*keyboardCharDest)+="r";
	}
	else
	{
		(*keyboardCharDest)+="R";
	}
}

void key2char::write_s()
{
	bool upper=false;
	if (SDL_GetModState() & KMOD_SHIFT) upper=true;
	if (SDL_GetModState() & KMOD_CAPS) upper=1-upper;
	if (!upper)
	{
		(*keyboardCharDest)+="s";
	}
	else
	{
		(*keyboardCharDest)+="S";
	}
}

void key2char::write_t()
{
	bool upper=false;
	if (SDL_GetModState() & KMOD_SHIFT) upper=true;
	if (SDL_GetModState() & KMOD_CAPS) upper=1-upper;
	if (!upper)
	{
		(*keyboardCharDest)+="t";
	}
	else
	{
		(*keyboardCharDest)+="T";
	}
}

void key2char::write_u()
{
	bool upper=false;
	if (SDL_GetModState() & KMOD_SHIFT) upper=true;
	if (SDL_GetModState() & KMOD_CAPS) upper=1-upper;
	if (!upper)
	{
		(*keyboardCharDest)+="u";
	}
	else
	{
		(*keyboardCharDest)+="U";
	}
}

void key2char::write_v()
{
	bool upper=false;
	if (SDL_GetModState() & KMOD_SHIFT) upper=true;
	if (SDL_GetModState() & KMOD_CAPS) upper=1-upper;
	if (!upper)
	{
		(*keyboardCharDest)+="v";
	}
	else
	{
		(*keyboardCharDest)+="V";
	}
}

void key2char::write_w()
{
	bool upper=false;
	if (SDL_GetModState() & KMOD_SHIFT) upper=true;
	if (SDL_GetModState() & KMOD_CAPS) upper=1-upper;
	if (!upper)
	{
		(*keyboardCharDest)+="w";
	}
	else
	{
		(*keyboardCharDest)+="W";
	}
}

void key2char::write_x()
{
	bool upper=false;
	if (SDL_GetModState() & KMOD_SHIFT) upper=true;
	if (SDL_GetModState() & KMOD_CAPS) upper=1-upper;
	if (!upper)
	{
		(*keyboardCharDest)+="x";
	}
	else
	{
		(*keyboardCharDest)+="X";
	}
}

void key2char::write_y()
{
	bool upper=false;
	if (SDL_GetModState() & KMOD_SHIFT) upper=true;
	if (SDL_GetModState() & KMOD_CAPS) upper=1-upper;
	if (!upper)
	{
		(*keyboardCharDest)+="y";
	}
	else
	{
		(*keyboardCharDest)+="Y";
	}
}

void key2char::write_z()
{
	bool upper=false;
	if (SDL_GetModState() & KMOD_SHIFT) upper=true;
	if (SDL_GetModState() & KMOD_CAPS) upper=1-upper;
	if (!upper)
	{
		(*keyboardCharDest)+="z";
	}
	else
	{
		(*keyboardCharDest)+="Z";
	}
}

/// 1st line -------------------------------------------------------------------------------------

void key2char::write_world_18()
{
	bool upper=false;
	if (SDL_GetModState() & KMOD_SHIFT) upper=true;
	if (SDL_GetModState() & KMOD_CAPS) upper=1-upper;

	if (!upper) (*keyboardCharDest)+="²";
}

void key2char::write_ampersand()
{
	bool upper=false;
	if (SDL_GetModState() & KMOD_SHIFT) upper=true;
	if (SDL_GetModState() & KMOD_CAPS) upper=1-upper;

	if (!upper) (*keyboardCharDest)+='&';
	else (*keyboardCharDest)+='1';
}

void key2char::write_world_73()
{
	bool upper=false;
	bool graphic=false;
	if (SDL_GetModState() & KMOD_SHIFT) upper=true;
	if (SDL_GetModState() & KMOD_CAPS) upper=1-upper;
	if (SDL_GetModState() & KMOD_MODE) graphic=true;

	if (graphic) (*keyboardCharDest)+='~';
	else if (!upper) (*keyboardCharDest)+=(char)(233);
	else (*keyboardCharDest)+='2';
}

void key2char::write_quotedbl()
{
	bool upper=false;
	bool graphic=false;
	if (SDL_GetModState() & KMOD_SHIFT) upper=true;
	if (SDL_GetModState() & KMOD_CAPS) upper=1-upper;
	if (SDL_GetModState() & KMOD_MODE) graphic=true;

	if (graphic) (*keyboardCharDest)+='#';
	else if (!upper) (*keyboardCharDest)+='\"';
	else (*keyboardCharDest)+='3';
}

void key2char::write_quote()
{
	bool upper=false;
	bool graphic=false;
	if (SDL_GetModState() & KMOD_SHIFT) upper=true;
	if (SDL_GetModState() & KMOD_CAPS) upper=1-upper;
	if (SDL_GetModState() & KMOD_MODE) graphic=true;

	if (graphic) (*keyboardCharDest)+='{';
	else if (!upper) (*keyboardCharDest)+='\'';
	else (*keyboardCharDest)+='4';
}

void key2char::write_leftparen()
{
	bool upper=false;
	bool graphic=false;
	if (SDL_GetModState() & KMOD_SHIFT) upper=true;
	if (SDL_GetModState() & KMOD_CAPS) upper=1-upper;
	if (SDL_GetModState() & KMOD_MODE) graphic=true;

	if (graphic) (*keyboardCharDest)+='[';
	else if (!upper) (*keyboardCharDest)+='(';
	else (*keyboardCharDest)+='5';
}

void key2char::write_minus()
{
	bool upper=false;
	bool graphic=false;
	if (SDL_GetModState() & KMOD_SHIFT) upper=true;
	if (SDL_GetModState() & KMOD_CAPS) upper=1-upper;
	if (SDL_GetModState() & KMOD_MODE) graphic=true;

	if (graphic) (*keyboardCharDest)+='|';
	else if (!upper) (*keyboardCharDest)+='-';
	else (*keyboardCharDest)+='6';
}

void key2char::write_world_72()
{
	bool upper=false;
	bool graphic=false;
	if (SDL_GetModState() & KMOD_SHIFT) upper=true;
	if (SDL_GetModState() & KMOD_CAPS) upper=1-upper;
	if (SDL_GetModState() & KMOD_MODE) graphic=true;

	if (graphic) (*keyboardCharDest)+='`';
	else if (!upper) (*keyboardCharDest)+=(char)(232);
	else (*keyboardCharDest)+='7';
}

void key2char::write_underscore()
{
	bool upper=false;
	bool graphic=false;
	if (SDL_GetModState() & KMOD_SHIFT) upper=true;
	if (SDL_GetModState() & KMOD_CAPS) upper=1-upper;
	if (SDL_GetModState() & KMOD_MODE) graphic=true;

	if (graphic) (*keyboardCharDest)+='\\';
	else if (!upper) (*keyboardCharDest)+='_';
	else (*keyboardCharDest)+='8';
}

void key2char::write_world_71()
{
	bool upper=false;
	bool graphic=false;
	if (SDL_GetModState() & KMOD_SHIFT) upper=true;
	if (SDL_GetModState() & KMOD_CAPS) upper=1-upper;
	if (SDL_GetModState() & KMOD_MODE) graphic=true;

	if (graphic) (*keyboardCharDest)+='^';
	else if (!upper) (*keyboardCharDest)+=(char)(231);
	else (*keyboardCharDest)+='9';
}

void key2char::write_world_64()
{
	bool upper=false;
	bool graphic=false;
	if (SDL_GetModState() & KMOD_SHIFT) upper=true;
	if (SDL_GetModState() & KMOD_CAPS) upper=1-upper;
	if (SDL_GetModState() & KMOD_MODE) graphic=true;

	if (graphic) (*keyboardCharDest)+='@';
	else if (!upper) (*keyboardCharDest)+=(char)(224);
	else (*keyboardCharDest)+='0';
}

void key2char::write_rightparen()
{
	bool upper=false;
	bool graphic=false;
	if (SDL_GetModState() & KMOD_SHIFT) upper=true;
	if (SDL_GetModState() & KMOD_CAPS) upper=1-upper;
	if (SDL_GetModState() & KMOD_MODE) graphic=true;

	if (graphic) (*keyboardCharDest)+="]";
	else if (!upper) (*keyboardCharDest)+=')';
	else (*keyboardCharDest)+="°";
}

void key2char::write_equals()
{
	bool upper=false;
	bool graphic=false;
	if (SDL_GetModState() & KMOD_SHIFT) upper=true;
	if (SDL_GetModState() & KMOD_CAPS) upper=1-upper;
	if (SDL_GetModState() & KMOD_MODE) graphic=true;

	if (graphic) (*keyboardCharDest)+='}';
	else if (!upper) (*keyboardCharDest)+='=';
	else (*keyboardCharDest)+='+';
}

void key2char::write_backspace()
{
	if (!keyboardCharDest->empty()) keyboardCharDest->erase(keyboardCharDest->size()-1, 1);
}

/// 2nd line -------------------------------------------------------------------------------------

void key2char::write_tab()
{
	(*keyboardCharDest)+="   ";
}

void key2char::write_caret()
{
	bool upper=false;
	if (SDL_GetModState() & KMOD_SHIFT) upper=true;
	if (SDL_GetModState() & KMOD_CAPS) upper=1-upper;

	else if (!upper) (*keyboardCharDest)+='^';
	else (*keyboardCharDest)+="¨";
}

void key2char::write_dollar()
{
	bool upper=false;
	bool graphic=false;
	if (SDL_GetModState() & KMOD_SHIFT) upper=true;
	if (SDL_GetModState() & KMOD_CAPS) upper=1-upper;
	if (SDL_GetModState() & KMOD_MODE) graphic=true;

	if (graphic) (*keyboardCharDest)+="¤";
	else if (!upper) (*keyboardCharDest)+='$';
	else (*keyboardCharDest)+="£";
}

void key2char::write_asterisk()
{
	bool upper=false;
	if (SDL_GetModState() & KMOD_SHIFT) upper=true;
	if (SDL_GetModState() & KMOD_CAPS) upper=1-upper;

	else if (!upper) (*keyboardCharDest)+='*';
	else (*keyboardCharDest)+="µ";
}

/// 3rd line -------------------------------------------------------------------------------------

void key2char::write_world_89()
{
	bool upper=false;
	if (SDL_GetModState() & KMOD_SHIFT) upper=true;
	if (SDL_GetModState() & KMOD_CAPS) upper=1-upper;

	else if (!upper) (*keyboardCharDest)+="ù";
	else (*keyboardCharDest)+='%';
}

void key2char::write_return()
{
	(*keyboardCharDest)+='\n';
}

/// KP -------------------------------------------------------------------------------------------

void key2char::write_kp0()
{
	bool num=false;
	if (SDL_GetModState() & KMOD_NUM) num=true;
	if (num)
	{
		(*keyboardCharDest)+="0";
	}
	else
	{
		keyDown[SDLK_INSERT]();
	}
}

void key2char::write_kp1()
{
	bool num=false;
	if (SDL_GetModState() & KMOD_NUM) num=true;
	if (num)
	{
		(*keyboardCharDest)+="1";
	}
	else
	{
		keyDown[SDLK_END]();
	}
}

void key2char::write_kp2()
{
	bool num=false;
	if (SDL_GetModState() & KMOD_NUM) num=true;
	if (num)
	{
		(*keyboardCharDest)+="2";
	}
	else
	{
		keyDown[SDLK_DOWN]();
	}
}

void key2char::write_kp3()
{
	bool num=false;
	if (SDL_GetModState() & KMOD_NUM) num=true;
	if (num)
	{
		(*keyboardCharDest)+="3";
	}
	else
	{
		keyDown[SDLK_PAGEDOWN]();
	}
}

void key2char::write_kp4()
{
	bool num=false;
	if (SDL_GetModState() & KMOD_NUM) num=true;
	if (num)
	{
		(*keyboardCharDest)+="4";
	}
	else
	{
		keyDown[SDLK_LEFT]();
	}
}

void key2char::write_kp5()
{
	bool num=false;
	if (SDL_GetModState() & KMOD_NUM) num=true;
	if (num)
	{
		(*keyboardCharDest)+="5";
	}
}

void key2char::write_kp6()
{
	bool num=false;
	if (SDL_GetModState() & KMOD_NUM) num=true;
	if (num)
	{
		(*keyboardCharDest)+="6";
	}
	else
	{
		keyDown[SDLK_RIGHT]();
	}
}

void key2char::write_kp7()
{
	bool num=false;
	if (SDL_GetModState() & KMOD_NUM) num=true;
	if (num)
	{
		(*keyboardCharDest)+="7";
	}
	else
	{
		keyDown[SDLK_HOME]();
	}
}

void key2char::write_kp8()
{
	bool num=false;
	if (SDL_GetModState() & KMOD_NUM) num=true;
	if (num)
	{
		(*keyboardCharDest)+="8";
	}
	else
	{
		keyDown[SDLK_UP]();
	}
}

void key2char::write_kp9()
{
	bool num=false;
	if (SDL_GetModState() & KMOD_NUM) num=true;
	if (num)
	{
		(*keyboardCharDest)+="9";
	}
	else
	{
		keyDown[SDLK_PAGEUP]();
	}
}

void key2char::write_kp_divide()
{
	bool upper=false;
	bool graphic=false;
	if (SDL_GetModState() & KMOD_SHIFT) upper=true;
	if (SDL_GetModState() & KMOD_CAPS) upper=1-upper;
	if (SDL_GetModState() & KMOD_MODE) graphic=true;

	if (graphic) (*keyboardCharDest)+=':';
	else if (!upper) (*keyboardCharDest)+=(char)(247);
	else (*keyboardCharDest)+='/';
}

void key2char::write_kp_multiply()
{
	bool upper=false;
	bool graphic=false;
	if (SDL_GetModState() & KMOD_SHIFT) upper=true;
	if (SDL_GetModState() & KMOD_CAPS) upper=1-upper;
	if (SDL_GetModState() & KMOD_MODE) graphic=true;

	if (graphic) (*keyboardCharDest)+="·";
	else if (!upper) (*keyboardCharDest)+="*";
}

void key2char::write_kp_minus()
{
	(*keyboardCharDest)+='-';
}

void key2char::write_kp_plus()
{
	(*keyboardCharDest)+='+';
}

void key2char::write_kp_equals()
{
	(*keyboardCharDest)+='=';
}

void key2char::write_kp_enter()
{
	(*keyboardCharDest)+='\n';
}
