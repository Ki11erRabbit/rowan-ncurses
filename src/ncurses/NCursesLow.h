#ifndef NCURSES__LOW__NCURSESLOW_H
#define NCURSES__LOW__NCURSESLOW_H

#include <rowan.h>
#include <stdint.h>
#include <stddef.h>

void ncurses__low__NCursesLow__initscr(rowan_context_t context);
void ncurses__low__NCursesLow__endwin(rowan_context_t context);
void ncurses__low__NCursesLow__raw(rowan_context_t context);
void ncurses__low__NCursesLow__cbreak(rowan_context_t context);
void ncurses__low__NCursesLow__echo(rowan_context_t context);
void ncurses__low__NCursesLow__noecho(rowan_context_t context);
int32_t ncurses__low__NCursesLow__halfdelay(rowan_context_t context);
void ncurses__low__NCursesLow__refresh(rowan_context_t context);
void ncurses__low__NCursesLow__wrefresh(rowan_context_t context, object_t*);
int32_t ncurses__low__NCursesLow__getch(rowan_context_t context);
object_t* ncurses__low__NCursesLow__scanw(rowan_context_t context);
object_t* ncurses__low__NCursesLow__wscanw(rowan_context_t context, object_t*);
object_t* ncurses__low__NCursesLow__mvwscanw(rowan_context_t context, object_t*, int32_t, int32_t);
object_t* ncurses__low__NCursesLow__getstr(rowan_context_t context);
object_t* ncurses__low__NCursesLow__mvgetstr(rowan_context_t context, int32_t, int32_t);
object_t* ncurses__low__NCursesLow__mvwgetstr(rowan_context_t context, object_t*, int32_t, int32_t);
void ncurses__low__NCursesLow__attrset(rowan_context_t context, int32_t);
void ncurses__low__NCursesLow__attron(rowan_context_t context, int32_t);
void ncurses__low__NCursesLow__attroff(rowan_context_t context, int32_t);
void ncurses__low__NCursesLow__keypad(rowan_context_t context, object_t*, uint8_t);
void ncurses__low__NCursesLow__move(rowan_context_t context, int32_t, int32_t);
void ncurses__low__NCursesLow__addch(rowan_context_t context, int32_t);
void ncurses__low__NCursesLow__mvaddch(rowan_context_t context, int32_t, int32_t, int32_t);
void ncurses__low__NCursesLow__waddch(rowan_context_t context, object_t*, int32_t);
void ncurses__low__NCursesLow__mvwaddch(rowan_context_t context, object_t*, int32_t, int32_t, int32_t);
void ncurses__low__NCursesLow__printw(rowan_context_t context, object_t*);
void ncurses__low__NCursesLow__mvprintw(rowan_context_t context, int32_t, int32_t, object_t*);
void ncurses__low__NCursesLow__wprintw(rowan_context_t context, object_t*, object_t*);
void ncurses__low__NCursesLow__mvwprintw(rowan_context_t context, object_t*, int32_t, int32_t, object_t*);
void ncurses__low__NCursesLow__addstr(rowan_context_t context, object_t*);
void ncurses__low__NCursesLow__addnstr(rowan_context_t context, object_t*, int32_t);
void ncurses__low__NCursesLow__mvaddstr(rowan_context_t context, int32_t, int32_t, object_t*);
void ncurses__low__NCursesLow__waddstr(rowan_context_t context, object_t*, object_t*);
void ncurses__low__NCursesLow__mvwaddstr(rowan_context_t context, object_t*, int32_t, int32_t, object_t*);
object_t* ncurses__low__NCursesLow__getmaxyx(rowan_context_t context, object_t*);
void ncurses__low__NCursesLow__wborder(rowan_context_t context, object_t*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t);
void ncurses__low__NCursesLow__start_color(rowan_context_t context);
uint8_t ncurses__low__NCursesLow__has_colors(rowan_context_t context);
void ncurses__low__NCursesLow__init_pair(rowan_context_t context, int32_t, int32_t, int32_t);
object_t* ncurses__low__NCursesLow__mousemask(rowan_context_t context, object_t*);
object_t* ncurses__low__NCursesLow__getmouse(rowan_context_t context);
object_t* ncurses__low__NCursesLow__getyx(rowan_context_t context, object_t*);
object_t* ncurses__low__NCursesLow__getparyx(rowan_context_t context, object_t*);
object_t* ncurses__low__NCursesLow__getbegyx(rowan_context_t context, object_t*);
object_t* ncurses__low__NCursesLow__getmaxyx(rowan_context_t context, object_t*);
object_t* ncurses__low__NCursesLow__scr_dump(rowan_context_t context);
void ncurses__low__NCursesLow__scr_restore(rowan_context_t context, object_t*);
void ncurses__low__NCursesLow__curs_set(rowan_context_t context, int32_t);
void ncurses__low__NCursesLow__def_prog_mode(rowan_context_t context);
void ncurses__low__NCursesLow__reset_prog_mode(rowan_context_t context);

#endif
