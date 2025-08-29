#include <rowan_runtime.h>
#include <stdint.h>
#include <stddef.h>
#include <ncurses.h>
#include "WindowLow.h"

size_t window__get_dash_size() {
    return sizeof(WINDOW*);
}

void ncurses__low__WindowLow__init_dash_std_dash_internal(rowan_context_t context, object_t* win) {
    window_low_t* window = (window_low_t*)win;
    window->window = stdscr;
}

void ncurses__low__WindowLow__newwin_dash_internal(rowan_context_t context, object_t* win, int32_t num_lines, int32_t num_columns, int32_t begy, int32_t begx) {
    window_low_t* window = (window_low_t*)win;
    window->window = newwin(num_lines, num_columns, begy, begx);
}

void ncurses__low__WindowLow__delwin(rowan_context_t context, object_t* win) {
    window_low_t* window = (window_low_t*)win;
    delwin(window->window);
}

void custom_drop(object_t* self) {

}
