/*
 * FIG : Facility for Interactive Generation of figures
 * Copyright (c) 1991 by Paul King
 * Parts Copyright (c) 1989-2002 by Brian V. Smith
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

#ifndef W_MOUSEFUN_H
#define W_MOUSEFUN_H

void		init_mousefun();
void		setup_mousefun();
void		set_mousefun();
void		draw_mousefun_mode();
void		draw_mousefun_ind();
void		draw_mousefun_unitbox();
void		shift_top_mousfun();
void		draw_mousefun_topruler();
void		shift_side_mousfun();
void		draw_mousefun_sideruler();
void		draw_mousefun_canvas();
void		draw_mousefun();
void		draw_mousefn2();
void		clear_mousefun();
void		notused_middle();
void		clear_middle();
void		notused_right();
void		clear_right();
void		draw_mousefun_kbd();
void		clear_mousefun_kbd();
void		init_mousefun_actions();
extern String	kbd_translations;
#endif /* W_MOUSEFUN_H */
