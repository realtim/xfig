/*
 * FIG : Facility for Interactive Generation of figures
 * Copyright (c) 1989-2002 by Brian V. Smith
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

extern Boolean	colors_are_swapped;
extern void	load_request();
extern void	do_save();
extern void	popup_open_panel();
extern void	popup_merge_panel();
extern void	popup_saveas_panel();
extern Boolean	query_save();

extern Widget	preview_size, preview_widget, preview_name;
extern Pixmap	preview_land_pixmap, preview_port_pixmap;

extern Widget	file_panel;
extern Boolean	file_up;
extern Widget	cfile_text;
extern Widget	file_selfile;
extern Widget	file_mask;
extern Widget	file_dir;
extern Widget	file_flist;
extern Widget	file_dlist;
extern Widget	file_popup;

extern Boolean	check_cancel();
extern Boolean	cancel_preview;
extern Boolean	preview_in_progress;
