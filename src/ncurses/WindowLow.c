#ifndef NCURSES__LOW__WINDOWLOW_H
#define NCURSES__LOW__WINDOWLOW_H

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

void ncurses__low__WindowLow__newwin_dash_internal(rowan_context_t context, object_t* win) {
    window_low_t* window = (window_low_t*)win;
    window->window = newwin();
}

void ncurses__low__WindowLow__delwin(rowan_context_t context, object_t* win) {
    window_low_t* window = (window_low_t*)win;
    delwin(window->window);
}

void custom_drop(object_t* self) {

}

#endif
