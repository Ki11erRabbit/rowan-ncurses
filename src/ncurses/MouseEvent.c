#include <rowan_runtime.h>
#include <stdint.h>
#include <stddef.h>
#include <ncurses.h>
#include "MouseEvent.h"
#include "MouseMask.h"

size_t mouse_dash_ev__get_dash_size() {
    return sizeof(MEVENT);
}

int16_t ncurses__low__MouseEvent__get_dash_id(rowan_context_t context, object_t* mevent) {
    mouse_event_t* event = (mouse_event_t*)mevent;
    return event->event.id;
}

int32_t ncurses__low__MouseEvent__get_dash_x(rowan_context_t context, object_t* mevent) {
    mouse_event_t* event = (mouse_event_t*)mevent;
    return event->event.x;
}

int32_t ncurses__low__MouseEvent__get_dash_y(rowan_context_t context, object_t* mevent) {
    mouse_event_t* event = (mouse_event_t*)mevent;
    return event->event.y;
}

int32_t ncurses__low__MouseEvent__get_dash_z(rowan_context_t context, object_t* mevent) {
    mouse_event_t* event = (mouse_event_t*)mevent;
    return event->event.z;
}

object_t* ncurses__low__MouseEvent__get_dash_coords(rowan_context_t context, object_t* mevent) {
    mouse_event_t* event = (mouse_event_t*)mevent;
    object_t* array = rowan_create_array(context, "32", 3);
    if (array == NULL)
        return NULL;
    int32_t* buf = NULL;
    uint64_t length = 0;
    rowan_get_array_buffer(array, (void**)&buf, &length);
    buf[0] = event->event.x;
    buf[1] = event->event.y;
    buf[2] = event->event.z;
    return array;
}

object_t* ncurses__low__MouseEvent__get_dash_mouse_dash_mask(rowan_context_t context, object_t* mevent) {
    mouse_event_t* event = (mouse_event_t*)mevent;
    mouse_mask_t* mask = (mouse_mask_t*)rowan_create_object("ncurses::low::MouseMask");
    mask->mask = event->event.bstate;
    return (object_t*)mask;
}

void custom_drop(object_t* self) {

}
