/*
 * FIG : Facility for Interactive Generation of figures
 * Copyright (c) 1985-1988 by Supoj Sutanthavibul
 * Parts Copyright (c) 1989-2002 by Brian V. Smith
 * Parts Copyright (c) 1991 by Paul King
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

#ifndef U_ELASTIC_H
#define U_ELASTIC_H

#define		MOVE_ARB	0
#define		MOVE_HORIZ_VERT 1
#define		BOX_SCALE	2
#define		BOX_HSTRETCH	3
#define		BOX_VSTRETCH	4

#define		MSG_RADIUS	0
#define		MSG_RADIUS2	1
#define		MSG_DIAM	2
#define		MSG_LENGTH	3
#define		MSG_DIST	4
#define		MSG_PNTS_LENGTH	5
#define		MSG_DIAM_ANGLE	6
#define		MSG_RADIUS_ANGLE 7

extern int	constrained;
extern float	cur_angle;
extern int	work_numsides;
extern int	x1off, x2off, y1off, y2off;
extern Cursor	cur_latexcursor;
extern int	from_x, from_y;
extern double	cosa, sina;
extern int	movedpoint_num;
extern F_point *left_point, *right_point;

extern void	elastic_box();
extern void	elastic_fixedbox();
extern void	elastic_movebox();
extern void	resizing_box();
extern void	elastic_box_constrained();
extern void	constrained_resizing_box();
extern void	constrained_resizing_scale_box();
extern void	moving_box();

extern void	elastic_poly();
extern void	resizing_poly();
extern void	scaling_compound();
extern void	elastic_scalecompound();
extern void	elastic_scale_curcompound();

extern void	resizing_cbr(), elastic_cbr(), resizing_cbd(), elastic_cbd();
extern void	resizing_ebr(), elastic_ebr(), resizing_ebd(), elastic_ebd();
extern void	constrained_resizing_ebr(), constrained_resizing_ebd();
extern void	constrained_resizing_cbd();
extern void	elastic_moveellipse();
extern void	moving_ellipse();
extern void	elastic_scaleellipse();
extern void	scaling_ellipse();
extern void	elastic_scale_curellipse();

extern void	unconstrained_line();
extern void	latex_line();
extern void	constrainedangle_line();
extern void	elastic_moveline();
extern void	elastic_movenewline();
extern void	elastic_line();
extern void	elastic_dimension_line();
extern void	moving_line();
extern void	reshaping_line();
extern void	reshaping_latexline();
extern void	elastic_linelink();
extern void	elastic_scalepts();
extern void	scaling_line();
extern void	elastic_scale_curline();

extern void	arc_point();
extern void	moving_arc();
extern void	elastic_movearc();
extern void	elastic_movenewarc();
extern void	reshaping_arc();
extern void	elastic_arclink();
extern void	scaling_arc();
extern void	elastic_scalearc();
extern void	elastic_scale_curarc();

extern void	moving_text();
extern void	draw_movingtext();
extern void	elastic_movetext();

extern void	moving_spline();
extern void	elastic_movenewspline();
extern void	scaling_spline();
extern void	elastic_scale_curspline();

extern void	adjust_box_pos();
extern void	adjust_pos();

#endif /* U_ELASTIC_H */
