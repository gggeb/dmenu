/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

/* 0 = left, 1 = centre, 2 = right */
static unsigned int horizontal_alignment = 0;
/* 0 = top, 1 = centre, 2 = bottom */
static unsigned int vertical_alignment = 0;

/* If 0, dmenu will be set to screen width */
static unsigned int menu_width = 0;
/* If less than font height + 2, will default to font height + 2 */
static unsigned int line_height = 0;

static unsigned int disable_cursor = 0;

/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"monospace:size=10"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#bbbbbb", "#222222" },
	[SchemeSel] = { "#eeeeee", "#005577" },
	[SchemeOut] = { "#000000", "#00ffff" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
