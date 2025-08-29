#include <rowan_runtime.h>
#include <stdint.h>
#include <stddef.h>
#include <ncurses.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "WindowLow.h"
#include "MouseMask.h"
#include "MouseEvent.h"

void ncurses__low__NCursesLow__initscr(rowan_context_t context) {
    initscr();
}

void ncurses__low__NCursesLow__endwin(rowan_context_t context) {
    endwin();
}

void ncurses__low__NCursesLow__raw(rowan_context_t context) {
    raw();
}

void ncurses__low__NCursesLow__cbreak(rowan_context_t context) {
    cbreak();
}

void ncurses__low__NCursesLow__echo(rowan_context_t context) {
    echo();
}

void ncurses__low__NCursesLow__noecho(rowan_context_t context) {
    noecho();
}

int32_t ncurses__low__NCursesLow__halfdelay(rowan_context_t context, int32_t value) {
    halfdelay(value);
}

void ncurses__low__NCursesLow__refresh(rowan_context_t context) {
    refresh();
}

void ncurses__low__NCursesLow__wrefresh(rowan_context_t context, object_t *win) {
    window_low_t *window = (window_low_t*)win;
    wrefresh(window->window);
}

int32_t ncurses__low__NCursesLow__getch(rowan_context_t context) {
    return getch();
}

object_t *ncurses__low__NCursesLow__getstr(rowan_context_t context) {
    char str[BUFSIZ];
    getstr(str);
    return rowan_create_string_buffer(str);
}

object_t *ncurses__low__NCursesLow__mvgetstr(rowan_context_t context, int32_t row, int32_t col) {
    char str[BUFSIZ];
    mvgetstr(row, col, str);
    return rowan_create_string_buffer(str);
}

object_t* ncurses__low__NCursesLow__mvwgetstr(rowan_context_t context, object_t *win, int32_t row, int32_t col) {
    window_low_t* window = (window_low_t*)win;
    char str[BUFSIZ];
    mvwgetstr(window->window, row, col, str);
    return rowan_create_string_buffer(str);
}

void ncurses__low__NCursesLow__attrset(rowan_context_t context, int32_t set) {
    attrset(set);
}

void ncurses__low__NCursesLow__attron(rowan_context_t context, int32_t set) {
    attron(set);
}

void ncurses__low__NCursesLow__attroff(rowan_context_t context, int32_t set) {
    attroff(set);
}

void ncurses__low__NCursesLow__keypad(rowan_context_t context, object_t * win, uint8_t enable) {
    window_low_t* window = (window_low_t*)win;
    keypad(window->window, enable);
}

void ncurses__low__NCursesLow__move(rowan_context_t context, int32_t row, int32_t col) {
    move(row, col);
}

void ncurses__low__NCursesLow__addch(rowan_context_t context, int32_t character) {
    addch(character);
}

void ncurses__low__NCursesLow__mvaddch(rowan_context_t context, int32_t row, int32_t col, int32_t character) {
    mvaddch(row, col, character);
}

void ncurses__low__NCursesLow__waddch(rowan_context_t context, object_t *win, int32_t character) {
    window_low_t* window = (window_low_t*)win;
    waddch(window->window, character);
}

void ncurses__low__NCursesLow__mvwaddch(rowan_context_t context, object_t *win, int32_t row, int32_t col, int32_t character) {
    window_low_t* window = (window_low_t*)win;
    mvwaddch(window->window, row, col, character);
}

void ncurses__low__NCursesLow__printw(rowan_context_t context, object_t* string) {
    uint8_t* buf = NULL;
    uint64_t length = 0;
    rowan_get_string_buffer(string, &buf, &length);
    char* str = malloc(length + 1);
    memcpy(str, buf, length);
    str[length] = '\0';
    printw("%s", str);
    free(str);
    str = NULL;
}

void ncurses__low__NCursesLow__mvprintw(rowan_context_t context, int32_t row, int32_t col, object_t* string) {
    uint8_t* buf = NULL;
    uint64_t length = 0;
    rowan_get_string_buffer(string, &buf, &length);
    char* str = malloc(length + 1);
    memcpy(str, buf, length);
    str[length] = '\0';
    mvprintw(row, col, "%s", str);
    free(str);
    str = NULL;
}

void ncurses__low__NCursesLow__wprintw(rowan_context_t context, object_t *win, object_t* string) {
    window_low_t* window = (window_low_t*)win;
    uint8_t* buf = NULL;
    uint64_t length = 0;
    rowan_get_string_buffer(string, &buf, &length);
    char* str = malloc(length + 1);
    memcpy(str, buf, length);
    str[length] = '\0';
    wprintw(window->window, "%s", str);
    free(str);
    str = NULL;
}

void ncurses__low__NCursesLow__mvwprintw(rowan_context_t context, object_t *win, int32_t row, int32_t col, object_t* string) {
    window_low_t* window = (window_low_t*)win;
    uint8_t* buf = NULL;
    uint64_t length = 0;
    rowan_get_string_buffer(string, &buf, &length);
    char* str = malloc(length + 1);
    memcpy(str, buf, length);
    str[length] = '\0';
    mvwprintw(window->window, row, col, "%s", str);
    free(str);
    str = NULL;
}

void ncurses__low__NCursesLow__addstr(rowan_context_t context, object_t* string) {
    uint8_t* buf = NULL;
    uint64_t length = 0;
    rowan_get_string_buffer(string, &buf, &length);
    char* str = malloc(length + 1);
    memcpy(str, buf, length);
    str[length] = '\0';
    addstr(str);
    free(str);
    str = NULL;
}

void ncurses__low__NCursesLow__addnstr(rowan_context_t context, object_t* string, int32_t n) {
    uint8_t* buf = NULL;
    uint64_t length = 0;
    rowan_get_string_buffer(string, &buf, &length);
    char* str = malloc(length + 1);
    memcpy(str, buf, length);
    str[length] = '\0';
    addnstr(str, n);
    free(str);
    str = NULL;
}

void ncurses__low__NCursesLow__mvaddstr(rowan_context_t context, int32_t row, int32_t col, object_t* string) {
    uint8_t* buf = NULL;
    uint64_t length = 0;
    rowan_get_string_buffer(string, &buf, &length);
    char* str = malloc(length + 1);
    memcpy(str, buf, length);
    str[length] = '\0';
    mvaddstr(row, col, str);
    free(str);
    str = NULL;
}

void ncurses__low__NCursesLow__waddstr(rowan_context_t context, object_t *win, object_t* string) {
    window_low_t* window = (window_low_t*)win;
    uint8_t* buf = NULL;
    uint64_t length = 0;
    rowan_get_string_buffer(string, &buf, &length);
    char* str = malloc(length + 1);
    memcpy(str, buf, length);
    str[length] = '\0';
    waddstr(window->window, str);
    free(str);
    str = NULL;
}

void ncurses__low__NCursesLow__mvwaddstr(rowan_context_t context, object_t *win, int32_t row, int32_t col, object_t* string) {
    window_low_t* window = (window_low_t*)win;
    uint8_t* buf = NULL;
    uint64_t length = 0;
    rowan_get_string_buffer(string, &buf, &length);
    char* str = malloc(length + 1);
    memcpy(str, buf, length);
    str[length] = '\0';
    mvwaddstr(window->window, row, col, str);
    free(str);
    str = NULL;
}

void ncurses__low__NCursesLow__wborder(rowan_context_t context, object_t *win, int32_t ls, int32_t rs, int32_t ts, int32_t bs, int32_t tl, int32_t tr, int32_t bl, int32_t br) {
    window_low_t* window = (window_low_t*)win;
    wborder(window->window, ls, rs, ts, bs, tl, tr, bl, br);
}

void ncurses__low__NCursesLow__start_color(rowan_context_t context) {
    start_color();
}

uint8_t ncurses__low__NCursesLow__has_colors(rowan_context_t context) {
    return has_colors();
}

void ncurses__low__NCursesLow__init_pair(rowan_context_t context, int32_t index, int32_t attr1, int32_t attr2) {
    init_pair(index, attr1, attr2);
}

object_t* ncurses__low__NCursesLow__mousemask(rowan_context_t context, mouse_mask_t* mouse_mask) {
    mouse_mask_t* old_mask = (mouse_mask_t*) rowan_create_object("ncurses::low::MouseMask");
    mousemask(mouse_mask->mask, &old_mask->mask);
    return (object_t*)old_mask;
}

object_t* ncurses__low__NCursesLow__getmouse(rowan_context_t context) {
    mouse_event_t* mouse_event = (mouse_event_t*)rowan_create_object("ncurses::low::MouseEvent");
    getmouse(&mouse_event->event);
    return (object_t*)mouse_event;
}

object_t* ncurses__low__NCursesLow__getyx(rowan_context_t context, object_t *win) {
    window_low_t* window = (window_low_t*)win;
    object_t* array = rowan_create_array(context, "32", 2);
    if (array == NULL)
        return NULL;
    int32_t* buf = NULL;
    uint64_t length = 0;
    rowan_get_array_buffer(array, (void**)&buf, &length);
    getyx(window->window, buf[0], buf[1]);
    return array;
}

object_t* ncurses__low__NCursesLow__getparyx(rowan_context_t context, object_t *win) {
    window_low_t* window = (window_low_t*)win;
    object_t* array = rowan_create_array(context, "32", 2);
    if (array == NULL)
        return NULL;
    int32_t* buf = NULL;
    uint64_t length = 0;
    rowan_get_array_buffer(array, (void**)&buf, &length);
    getparyx(window->window, buf[0], buf[1]);
    return array;
}

object_t* ncurses__low__NCursesLow__getbegyx(rowan_context_t context, object_t* win) {
    window_low_t *window = (window_low_t*)win;
    object_t* array = rowan_create_array(context, "32", 2);
    if (array == NULL)
        return NULL;
    int32_t* buf = NULL;
    uint64_t length = 0;
    rowan_get_array_buffer(array, (void**)&buf, &length);
    getbegyx(window->window, buf[0], buf[1]);
    return array;
}

object_t* ncurses__low__NCursesLow__getmaxyx(rowan_context_t context, object_t* win) {
    window_low_t *window = (window_low_t*)win;
    object_t* array = rowan_create_array(context, "32", 2);
    if (array == NULL)
        return NULL;
    int32_t* buf = NULL;
    uint64_t length = 0;
    rowan_get_array_buffer(array, (void**)&buf, &length);
    getmaxyx(window->window, buf[0], buf[1]);
    return array;
}

object_t* ncurses__low__NCursesLow__scr_dump(rowan_context_t context) {
    char str[BUFSIZ];
    scr_dump(str);
    return rowan_create_string_buffer(str);
}

void ncurses__low__NCursesLow__scr_restore(rowan_context_t context, object_t* string) {
    uint8_t* buf = NULL;
    uint64_t length = 0;
    rowan_get_string_buffer(string, &buf, &length);
    char* str = malloc(length + 1);
    memcpy(str, buf, length);
    str[length] = '\0';
    scr_restore(str);
    free(str);
}

void ncurses__low__NCursesLow__curs_set(rowan_context_t context, int32_t value) {
    curs_set(value);
}

void ncurses__low__NCursesLow__def_prog_mode(rowan_context_t context) {
    def_prog_mode();
}

void ncurses__low__NCursesLow__reset_prog_mode(rowan_context_t context) {
    reset_prog_mode();
}
