## EasySDL

# `SDL_Surface *surface = NULL;`
The window


# `map <string, SDL_Surface*> textureOf;`
To store the images without a specific destination pointer.

# `map <string, TTF_Font*> fontNamed;`
Same for fonts.

# `bool quit=false;`
True if the close button of the window was presed. (updated on window::events() call)

#`bool tooSlow=false;`
True if the last waitFromLastWait() did not wait (‘cause the time elapsed since last wait function is bigger than the time you specified) This mean that the application is slower than normal. (You could use that to know when you need to reduce the FPS or to tell the user that he’s not seeing the application at normal speed.)


This function pointers are used to handle events.
The function they point to is launched when the corresponding event occurs and that the window::events() function see it.

# `void (*keyDown[1000])();`
Usage : `keyDown[SDLK_?]=function;`
Launched when the key is pressed (and on auto repeat if enabled).
The key is described by a SDL constant of the form `SDLK_` plus a letter or a key name.

# `void (*keyUp[1000])();`
Usage : `keyUp[SDLK_?]=function;`
Launched when the key is released.
The key is described by a SDL constant of the form `SDLK_` plus a letter or a key name.

# `void (*mouseMotion)(int, int);`
Usage : `mouseMotion=function;`
The 2 parameters of the function are the x and and the y position of the mouse.
Launched when mouse moves.

# `void (*mouseButtonLeftDown)(int, int);`
Launched when the left mouse button is pressed.
See mouseMotion for other details.

# `void (*mouseButtonLeftUp)(int, int);`
Launched when the left mouse button is released.
See mouseMotion for other details.

# `void (*mouseButtonRightDown)(int, int);`
Launched when the right mouse button is pressed.
See mouseMotion for other details.

# `void (*mouseButtonRightUp)(int, int);`
Launched when the right mouse button is released.
See mouseMotion for other details.

# `void (*mouseButtonMiddleDown)(int, int);`
Launched when the middle mouse button is pressed.
See mouseMotion for other details.

# `void (*mouseButtonMiddleUp)(int, int);`
Launched when the middle mouse button is released.
See mouseMotion for other details.

# `void (*mouseButtonWheelDown)(int, int);`
Launched when the middle mouse button roll down.
See mouseMotion for other details.

# `void (*mouseButtonWheelUp)(int, int);`
Launched when the middle mouse button roll up.
See mouseMotion for other details.


# `void (*resizeWindow)(int, int);`
Usage : `resizeWindow=function;`
The 2 parameters of the function are the new width and height of the window.
Launched when the window is resized.

# `int lastKeyDown=0;`
id of the last pressed key.

# `int mouseX=0;`
X position of the mouse.

# `int mouseY=0;`
Y position of the mouse.

# `SMOOTHING_AUTO`
A smoothing mode (for resize and rotate functionalities) that smooth only if the scaling factor is smaller than 0.

# `int smoothingMode=SMOOTHING_AUTO;
To store smoothing modes (`SMOOTHING_ON`, `SMOOTHING_OFF` or `SMOOTHING_AUTO`)

# `Uint32 windowFlags;`
Flags that you gave to `initEasySDL()` (or default flags)
