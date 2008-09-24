/*
 * FIG : Facility for Interactive Generation of figures
 * Copyright (c) 1985-1988 by Supoj Sutanthavibul
 * Parts Copyright (c) 1989-2002 by Brian V. Smith
 * Parts Copyright (c) 1991 by Paul King
 * Parts Copyright (c) 1995 by C. Blanc and C. Schlick
 *
 * Any party obtaining a copy of these files is granted, free of charge, a
 * full and unrestricted irrevocable, world-wide, paid up, royalty-free,
 * nonexclusive right and license to deal in this software and documentation
 * files (the "Software"), including without limitation the rights to use,
 * copy, modify, merge, publish distribute, sublicense and/or sell copies of
 * the Software, and to permit persons who receive copies from any such
 * party to do so, with the only requirement being that the above copyright
 * and this permission notice remain intact.
 *
 */

#ifndef U_DRAW_H
#define U_DRAW_H

#define DRAW_POINTS		True
#define DONT_DRAW_POINTS	False
#define DRAW_CENTER		True
#define DONT_DRAW_CENTER	False

/*
 * declarations of routines for drawing objects
 */
/* compounds */

void	draw_compoundelements();

/* splines */

void	draw_spline();
void	quick_draw_spline();

/* curve routine needed by arc() and show_boxradius() */

void	curve(Window window, int depth, int xstart, int ystart, int xend, int yend, 
		Boolean draw_points, Boolean draw_center, int direction,
		int a, int b, int xoff, int yoff, int op, int thick,
		int style, float style_val, int fill_style, 
		Color pen_color, Color fill_color, int cap_style);
 
#endif /* U_DRAW_H */
