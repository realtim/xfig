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

extern void	init_msg();
extern void	put_msg(char *format, ...);
extern void	file_msg(char *format, ...);
extern void	boxsize_msg();
extern void	length_msg();
extern void	altlength_msg();
extern void	length_msg2();
extern void	popup_file_msg();
extern void	make_dimension_string();

extern Boolean	popup_up;
extern Boolean	first_file_msg;
extern Boolean	file_msg_is_popped;
extern Widget	file_msg_popup;
extern Boolean	first_lenmsg;

