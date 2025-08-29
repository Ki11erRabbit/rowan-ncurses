#ifndef NCURSES__LOW__MOUSEEVENT_H
#define NCURSES__LOW__MOUSEEVENT_H

#include <rowan_runtime.h>
#include <stdint.h>
#include <stddef.h>

typedef struct mouse_event {
    object_t base;
    MEVENT event;
} mouse_event_t;

size_t mouse_dash_ev__get_dash_size();
int16_t ncurses__low__MouseEvent__get_dash_id(rowan_context_t context, object_t*);
int32_t ncurses__low__MouseEvent__get_dash_x(rowan_context_t context, object_t*);
int32_t ncurses__low__MouseEvent__get_dash_y(rowan_context_t context, object_t*);
int32_t ncurses__low__MouseEvent__get_dash_z(rowan_context_t context, object_t*);
object_t* ncurses__low__MouseEvent__get_dash_coords(rowan_context_t context, object_t*);
object_t* ncurses__low__MouseEvent__get_dash_mouse_dash_mask(rowan_context_t context, object_t*);
void custom_drop(object_t*);

#endif
