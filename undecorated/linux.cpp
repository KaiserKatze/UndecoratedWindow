#if ! defined WIN32
// OpenGL installation:
// sudo apt install build-essential libgl1-mesa-dev
// Xlib installation:
// sudo apt install libx11-dev libx11-doc
// Reference:
// https://www.x.org/releases/X11R7.7/doc/libX11/libX11/libX11.pdf
// http://math.msu.su/~vvb/2course/Borisenko/CppProjects/GWindow/xintro.html

#include <X11/Xlib.h>
#include <X11/X.h>
#include <X11/Xcms.h>
#include <X11/Xutil.h>
#include <X11/Xresource.h>
#include <X11/Xatom.h>
#include <X11/cursorfont.h>
#include <X11/keysym.h>
#include <X11/Xlibinit.h>
#include <X11/Xproto.h>
#include <X11/Xprotostr.h>
#include <X11/X10.h>

#include <GL/gl.h>
#include <GL/glx.h>

#define DISPLAY_NAME	NULL

int main(void)
{
	Display *				display;
	int						screen;
	Visual *				visual;
	int						depth;
	unsigned long			xPixel_black;
	unsigned long			xPixel_white;
	int						widthInPixels;
	int						heightInPixels;
	int						winX;
	int						winY;
	int						winW;
	int						winH;
	int						border_size;
	XSetWindowAttributes	attr;
	Window					window;
	GC						gc;
	XEvent					evt;

	// open display
	display = XOpenDisplay(DISPLAY_NAME);
	if (display == NULL)
	{
		return 1;
	}
	screen = DefaultScreen(display);
	visual = DefaultVisual(display, screen);
	depth = DefaultDepth(display, screen);
	xPixel_black = XBlackPixel(display, screen);
	xPixel_white = XWhitePixel(display, screen);
	widthInPixels = XDisplayWidth(display, screen);
	heightInPixels = XDisplayHeight(display, screen);

	// create window
	winX = 0; // position X
	winY = 0; // position Y
	winW = 100; // width
	winH = 100; // height
	border_size = 0; // border width
	bzero(attr, sizeof(attr));
	attr.background_pixel = xPixel_white; // other attributes
	window = XCreateWindow(display, XRootWindow(display, screen),
		winX, winY,
		winW, winH,
		border_size, depth,
		InputOutput, visual,
		CWBackPixel,
		&attr);
	// initialize builtin event listeners
	XSelectInput(display, window, ExposureMask | ButtonPressMask | KeyPressMask);
	// create graphics context
	gc = XCreateGC(display, window, 0, 0);
	// show the window
	XClearWindow(display, window);
	XMapRaised(display, window);

	// setup message handler
	char str[25] = { 0 };
	KeySym keysym = 0;
	int len = 0;
	volatile bool running = TRUE;

	while (running)
	{
		XNextEvent(display, &evt);
		switch (evt.type)
		{
		case KeymapNotify:
			XRefreshKeyboardMapping(&evt.xmapping);
			break;
		case KeyPress:
			break;
		case KeyRelease:
			break;
		}
	}

	// free resources
	XFreeGC(display, gc);
	XDestroyWindow(display, window);
	// close display
	XCloseDisplay(display);
	display = (Display *)NULL;
	return 0;
}
#endif