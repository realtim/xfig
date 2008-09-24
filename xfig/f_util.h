/*
 * FIG : Facility for Interactive Generation of figures
 * Copyright (c) 1985-1988 by Supoj Sutanthavibul
 * Parts Copyright (c) 1989-2002 by Brian V. Smith
 * Parts Copyright (c) 1991 by Paul King
 * Change function implemented by Frank Schmuck (schmuck@svax.cs.cornell.edu)
 * X version by Jon Tombs <jon@uk.ac.oxford.robots>
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

extern char	*xf_basename();
extern		 emptyfigure();
extern char	*safe_strcpy();
extern Boolean	 uncompress_file();
extern char	*build_command();
extern Boolean	 map_to_palette();
extern Boolean	 dimline_components();
extern int	 find_largest_depth();
extern int	 find_smallest_depth();
extern void	 get_grid_spec(char *grid, Widget minor_grid_panel, Widget major_grid_panel);
extern time_t	 file_timestamp(char *file);
