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

#ifndef U_SEARCH_H
#define U_SEARCH_H

Boolean		in_text_bound();

void		init_searchproc_left();
void		init_searchproc_middle();
void		init_searchproc_right();

void		point_search_left();
void		point_search_middle();
void		point_search_right();

void		object_search_left();
void		object_search_middle();
void		object_search_right();

int		erase_objecthighlight();

F_text	       *text_search();
F_compound     *compound_search();
F_compound     *compound_point_search();
F_spline       *get_spline_point();


#endif /* U_SEARCH_H */
