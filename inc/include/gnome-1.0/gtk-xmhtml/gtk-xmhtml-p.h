#ifndef GTK_XMHTML_P_H
#define GTK_XMHTML_P_H 1
#define _XFUNCPROTOEND 
#define XFUNCPROTOEND
#include "XmHTMLP.h"

enum {
	GTK_XMHTML_ACTIVATE,
	GTK_XMHTML_ARM,
	GTK_XMHTML_ANCHOR_TRACK,
	GTK_XMHTML_FRAME,
	GTK_XMHTML_FORM,
	GTK_XMHTML_INPUT,
	GTK_XMHTML_LINK,
	GTK_XMHTML_MOTION,
	GTK_XMHTML_IMAGEMAP,
	GTK_XMHTML_DOCUMENT,
	GTK_XMHTML_FOCUS,
	GTK_XMHTML_LOSING_FOCUS,
	GTK_XMHTML_MOTION_TRACK,
	GTK_XMHTML_HTML_EVENT,
	GTK_XMHTML_ANCHOR_VISITED,
	GTK_XMHTML_LAST_SIGNAL
};
extern gint gtk_xmhtml_signals [];

enum {
	XmCR_ACTIVATE,
	XmCR_FOCUS,
	XmCR_LOSING_FOCUS,
	XmCR_ARM
};
#define  GTK_XMHTML_LIBRARY
#include "gtk-xmhtml.h"
/*
void gtk_xmhtml_set_foreground_internal (GtkXmHTML *html);
void gtk_xmhtml_set_background_internal (GtkXmHTML *html);
*/
#endif