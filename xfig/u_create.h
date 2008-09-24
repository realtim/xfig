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

#ifndef U_CREATE_H
#define U_CREATE_H

extern F_arc      *create_arc();
extern F_ellipse  *create_ellipse();
extern F_line     *create_line();
extern F_spline   *create_spline();
extern F_text     *create_text();
extern F_compound *create_compound();
extern F_pic      *create_pic();
extern F_point    *create_point();
extern F_sfactor  *create_sfactor();
extern F_compound  *create_dimension_line();
extern void	  create_dimline_ticks();
extern struct _pics * create_picture_entry();

extern F_arc      *copy_arc();
extern F_ellipse  *copy_ellipse();
extern F_line     *copy_line();
extern F_spline   *copy_spline();
extern F_text     *copy_text();
extern F_compound *copy_compound();

extern void	  copy_comments();
extern F_point   *copy_points();
extern F_sfactor *copy_sfactors();
extern void       reverse_points();
extern void       reverse_sfactors();

extern F_arrow	  *forward_arrow();
extern F_arrow	  *backward_arrow();
extern F_arrow	  *create_arrow();
extern F_arrow	  *forward_dim_arrow();
extern F_arrow	  *backward_dim_arrow();

extern F_arrow	  *new_arrow();
extern char   	  *new_string();
extern F_linkinfo *new_link();

#endif /* U_CREATE_H */
