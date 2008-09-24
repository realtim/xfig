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

#ifndef U_UNDO_H
#define U_UNDO_H

/*******************  DECLARE EXPORTS  ********************/

extern F_compound	 saved_objects;
extern F_compound	 object_tails;
extern F_arrow		*saved_for_arrow;
extern F_arrow		*saved_back_arrow;
extern F_line		*latest_line;		/* for undo_join (line) */
extern F_spline		*latest_spline;		/* for undo_join (spline) */
extern void		 undo();

#endif /* U_UNDO_H */
