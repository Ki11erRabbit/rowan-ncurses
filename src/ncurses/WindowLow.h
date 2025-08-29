#ifndef NCURSES__LOW__WINDOWLOW_H
#define NCURSES__LOW__WINDOWLOW_H

#include <rowan_runtime.h>
#include <stdint.h>
#include <stddef.h>

typedef struct window_low {
    object_t base;
    WINDOW *window;
} window_low_t;

size_t window__get_dash_size();
void ncurses__low__WindowLow__init_dash_std_dash_internal(rowan_context_t context, object_t*);
void ncurses__low__WindowLow__newwin_dash_internal(rowan_context_t context, object_t*);
void ncurses__low__WindowLow__delwin(rowan_context_t context, object_t*);
void custom_drop(object_t*);

#endif
