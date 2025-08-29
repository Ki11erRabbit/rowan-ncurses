#include <rowan_runtime.h>
#include <stdint.h>
#include <stddef.h>
#include <ncurses.h>
#include <stdlib.h>
#include "MouseMask.h"

size_t mask__get_dash_size() {
    return sizeof(mmask_t);
}

void ncurses__low__MouseMask__create_dash_internal(rowan_context_t context, object_t* mask) {
    mouse_mask_t *mouse_mask = (mouse_mask_t*)mask;
    mouse_mask->mask = 0;
}

void ncurses__low__MouseMask__button1_dash_pressed(rowan_context_t context, object_t* mask) {
    mouse_mask_t *mouse_mask = (mouse_mask_t*)mask;
    mouse_mask->mask |= BUTTON1_PRESSED;
}

void ncurses__low__MouseMask__button1_dash_released(rowan_context_t context, object_t* mask) {
    mouse_mask_t *mouse_mask = (mouse_mask_t*)mask;
    mouse_mask->mask |= BUTTON1_RELEASED;
}

void ncurses__low__MouseMask__button1_dash_clicked(rowan_context_t context, object_t* mask) {
    mouse_mask_t *mouse_mask = (mouse_mask_t*)mask;
    mouse_mask->mask |= BUTTON1_CLICKED;
}

void ncurses__low__MouseMask__button1_dash_double_dash_clicked(rowan_context_t context, object_t* mask) {
    mouse_mask_t *mouse_mask = (mouse_mask_t*)mask;
    mouse_mask->mask |= BUTTON1_DOUBLE_CLICKED;
}

void ncurses__low__MouseMask__button1_dash_triple_dash_clicked(rowan_context_t context, object_t* mask) {
    mouse_mask_t *mouse_mask = (mouse_mask_t*)mask;
    mouse_mask->mask |= BUTTON1_TRIPLE_CLICKED;
}

void ncurses__low__MouseMask__button2_dash_pressed(rowan_context_t context, object_t* mask) {
    mouse_mask_t *mouse_mask = (mouse_mask_t*)mask;
    mouse_mask->mask |= BUTTON2_PRESSED;
}

void ncurses__low__MouseMask__button2_dash_released(rowan_context_t context, object_t* mask) {
    mouse_mask_t *mouse_mask = (mouse_mask_t*)mask;
    mouse_mask->mask |= BUTTON2_RELEASED;
}

void ncurses__low__MouseMask__button2_dash_clicked(rowan_context_t context, object_t* mask) {
    mouse_mask_t *mouse_mask = (mouse_mask_t*)mask;
    mouse_mask->mask |= BUTTON2_CLICKED;
}

void ncurses__low__MouseMask__button2_dash_double_dash_clicked(rowan_context_t context, object_t* mask) {
    mouse_mask_t *mouse_mask = (mouse_mask_t*)mask;
    mouse_mask->mask |= BUTTON2_DOUBLE_CLICKED;
}

void ncurses__low__MouseMask__button2_dash_triple_dash_clicked(rowan_context_t context, object_t* mask) {
    mouse_mask_t *mouse_mask = (mouse_mask_t*)mask;
    mouse_mask->mask |= BUTTON2_TRIPLE_CLICKED;
}

void ncurses__low__MouseMask__button3_dash_pressed(rowan_context_t context, object_t* mask) {
    mouse_mask_t *mouse_mask = (mouse_mask_t*)mask;
    mouse_mask->mask |= BUTTON3_PRESSED;
}

void ncurses__low__MouseMask__button3_dash_released(rowan_context_t context, object_t* mask) {
    mouse_mask_t *mouse_mask = (mouse_mask_t*)mask;
    mouse_mask->mask |= BUTTON3_RELEASED;
}

void ncurses__low__MouseMask__button3_dash_clicked(rowan_context_t context, object_t* mask) {
    mouse_mask_t *mouse_mask = (mouse_mask_t*)mask;
    mouse_mask->mask |= BUTTON3_CLICKED;
}

void ncurses__low__MouseMask__button3_dash_double_dash_clicked(rowan_context_t context, object_t* mask) {
    mouse_mask_t *mouse_mask = (mouse_mask_t*)mask;
    mouse_mask->mask |= BUTTON3_DOUBLE_CLICKED;
}

void ncurses__low__MouseMask__button3_dash_triple_dash_clicked(rowan_context_t context, object_t* mask) {
    mouse_mask_t *mouse_mask = (mouse_mask_t*)mask;
    mouse_mask->mask |= BUTTON3_TRIPLE_CLICKED;
}

void ncurses__low__MouseMask__button4_dash_pressed(rowan_context_t context, object_t* mask) {
    mouse_mask_t *mouse_mask = (mouse_mask_t*)mask;
    mouse_mask->mask |= BUTTON4_PRESSED;
}

void ncurses__low__MouseMask__button4_dash_released(rowan_context_t context, object_t* mask) {
    mouse_mask_t *mouse_mask = (mouse_mask_t*)mask;
    mouse_mask->mask |= BUTTON4_RELEASED;
}

void ncurses__low__MouseMask__button4_dash_clicked(rowan_context_t context, object_t* mask) {
    mouse_mask_t *mouse_mask = (mouse_mask_t*)mask;
    mouse_mask->mask |= BUTTON4_CLICKED;
}

void ncurses__low__MouseMask__button4_dash_double_dash_clicked(rowan_context_t context, object_t* mask) {
    mouse_mask_t *mouse_mask = (mouse_mask_t*)mask;
    mouse_mask->mask |= BUTTON4_DOUBLE_CLICKED;
}

void ncurses__low__MouseMask__button4_dash_triple_dash_clicked(rowan_context_t context, object_t* mask) {
    mouse_mask_t *mouse_mask = (mouse_mask_t*)mask;
    mouse_mask->mask |= BUTTON4_TRIPLE_CLICKED;
}

void ncurses__low__MouseMask__button_dash_shift(rowan_context_t context, object_t* mask) {
    mouse_mask_t *mouse_mask = (mouse_mask_t*)mask;
    mouse_mask->mask |= BUTTON_SHIFT;
}

void ncurses__low__MouseMask__button_dash_ctrl(rowan_context_t context, object_t* mask) {
    mouse_mask_t *mouse_mask = (mouse_mask_t*)mask;
    mouse_mask->mask |= BUTTON_CTRL;
}

void ncurses__low__MouseMask__button_dash_alt(rowan_context_t context, object_t* mask) {
    mouse_mask_t *mouse_mask = (mouse_mask_t*)mask;
    mouse_mask->mask |= BUTTON_ALT;
}

void ncurses__low__MouseMask__report_dash_mouse_dash_position(rowan_context_t context, object_t* mask) {
    mouse_mask_t *mouse_mask = (mouse_mask_t*)mask;
    mouse_mask->mask |= REPORT_MOUSE_POSITION;
}

void ncurses__low__MouseMask__unset_dash_button1_dash_pressed(rowan_context_t context, object_t* mask) {
    mouse_mask_t *mouse_mask = (mouse_mask_t*)mask;
    mouse_mask->mask ^= BUTTON1_RELEASED;
}

void ncurses__low__MouseMask__unset_dash_button1_dash_released(rowan_context_t context, object_t* mask) {
    mouse_mask_t *mouse_mask = (mouse_mask_t*)mask;
    mouse_mask->mask ^= BUTTON1_RELEASED;
}

void ncurses__low__MouseMask__unset_dash_button1_dash_clicked(rowan_context_t context, object_t* mask) {
    mouse_mask_t *mouse_mask = (mouse_mask_t*)mask;
    mouse_mask->mask ^= BUTTON1_CLICKED;
}

void ncurses__low__MouseMask__unset_dash_button1_dash_double_dash_clicked(rowan_context_t context, object_t* mask) {
    mouse_mask_t *mouse_mask = (mouse_mask_t*)mask;
    mouse_mask->mask ^= BUTTON1_DOUBLE_CLICKED;
}

void ncurses__low__MouseMask__unset_dash_button1_dash_triple_dash_clicked(rowan_context_t context, object_t* mask) {
    mouse_mask_t *mouse_mask = (mouse_mask_t*)mask;
    mouse_mask->mask ^= BUTTON1_TRIPLE_CLICKED;
}

void ncurses__low__MouseMask__unset_dash_button2_dash_pressed(rowan_context_t context, object_t* mask) {
    mouse_mask_t *mouse_mask = (mouse_mask_t*)mask;
    mouse_mask->mask ^= BUTTON2_RELEASED;
}

void ncurses__low__MouseMask__unset_dash_button2_dash_released(rowan_context_t context, object_t* mask) {
    mouse_mask_t *mouse_mask = (mouse_mask_t*)mask;
    mouse_mask->mask ^= BUTTON2_RELEASED;
}

void ncurses__low__MouseMask__unset_dash_button2_dash_clicked(rowan_context_t context, object_t* mask) {
    mouse_mask_t *mouse_mask = (mouse_mask_t*)mask;
    mouse_mask->mask ^= BUTTON2_CLICKED;
}

void ncurses__low__MouseMask__unset_dash_button2_dash_double_dash_clicked(rowan_context_t context, object_t* mask) {
    mouse_mask_t *mouse_mask = (mouse_mask_t*)mask;
    mouse_mask->mask ^= BUTTON2_DOUBLE_CLICKED;
}

void ncurses__low__MouseMask__unset_dash_button2_dash_triple_dash_clicked(rowan_context_t context, object_t* mask) {
    mouse_mask_t *mouse_mask = (mouse_mask_t*)mask;
    mouse_mask->mask ^= BUTTON2_TRIPLE_CLICKED;
}

void ncurses__low__MouseMask__unset_dash_button3_dash_pressed(rowan_context_t context, object_t* mask) {
    mouse_mask_t *mouse_mask = (mouse_mask_t*)mask;
    mouse_mask->mask ^= BUTTON3_RELEASED;
}

void ncurses__low__MouseMask__unset_dash_button3_dash_released(rowan_context_t context, object_t* mask) {
    mouse_mask_t *mouse_mask = (mouse_mask_t*)mask;
    mouse_mask->mask ^= BUTTON3_RELEASED;
}

void ncurses__low__MouseMask__unset_dash_button3_dash_clicked(rowan_context_t context, object_t* mask) {
    mouse_mask_t *mouse_mask = (mouse_mask_t*)mask;
    mouse_mask->mask ^= BUTTON3_CLICKED;
}

void ncurses__low__MouseMask__unset_dash_button3_dash_double_dash_clicked(rowan_context_t context, object_t* mask) {
    mouse_mask_t *mouse_mask = (mouse_mask_t*)mask;
    mouse_mask->mask ^= BUTTON3_DOUBLE_CLICKED;
}

void ncurses__low__MouseMask__unset_dash_button3_dash_triple_dash_clicked(rowan_context_t context, object_t* mask) {
    mouse_mask_t *mouse_mask = (mouse_mask_t*)mask;
    mouse_mask->mask ^= BUTTON3_TRIPLE_CLICKED;
}

void ncurses__low__MouseMask__unset_dash_button4_dash_pressed(rowan_context_t context, object_t* mask) {
    mouse_mask_t *mouse_mask = (mouse_mask_t*)mask;
    mouse_mask->mask ^= BUTTON4_RELEASED;
}

void ncurses__low__MouseMask__unset_dash_button4_dash_released(rowan_context_t context, object_t* mask) {
    mouse_mask_t *mouse_mask = (mouse_mask_t*)mask;
    mouse_mask->mask ^= BUTTON4_RELEASED;
}

void ncurses__low__MouseMask__unset_dash_button4_dash_clicked(rowan_context_t context, object_t* mask) {
    mouse_mask_t *mouse_mask = (mouse_mask_t*)mask;
    mouse_mask->mask ^= BUTTON4_CLICKED;
}

void ncurses__low__MouseMask__unset_dash_button4_dash_double_dash_clicked(rowan_context_t context, object_t* mask) {
    mouse_mask_t *mouse_mask = (mouse_mask_t*)mask;
    mouse_mask->mask ^= BUTTON4_DOUBLE_CLICKED;
}

void ncurses__low__MouseMask__unset_dash_button4_dash_triple_dash_clicked(rowan_context_t context, object_t* mask) {
    mouse_mask_t *mouse_mask = (mouse_mask_t*)mask;
    mouse_mask->mask ^= BUTTON4_TRIPLE_CLICKED;
}

void ncurses__low__MouseMask__unset_dash_button_dash_shift(rowan_context_t context, object_t* mask) {
    mouse_mask_t *mouse_mask = (mouse_mask_t*)mask;
    mouse_mask->mask ^= BUTTON_SHIFT;
}

void ncurses__low__MouseMask__unset_dash_button_dash_ctrl(rowan_context_t context, object_t* mask) {
    mouse_mask_t *mouse_mask = (mouse_mask_t*)mask;
    mouse_mask->mask ^= BUTTON_CTRL;
}

void ncurses__low__MouseMask__unset_dash_button_dash_alt(rowan_context_t context, object_t* mask) {
    mouse_mask_t *mouse_mask = (mouse_mask_t*)mask;
    mouse_mask->mask ^= BUTTON_ALT;
}

void ncurses__low__MouseMask__unset_dash_report_dash_mouse_dash_position(rowan_context_t context, object_t* mask) {
    mouse_mask_t *mouse_mask = (mouse_mask_t*)mask;
    mouse_mask->mask ^= REPORT_MOUSE_POSITION;
}

uint8_t ncurses__low__MouseMask__is_dash_button1_dash_pressed_dash_set(rowan_context_t context, object_t* mask) {
    mouse_mask_t *mouse_mask = (mouse_mask_t*)mask;
    return mouse_mask->mask & BUTTON1_PRESSED;
}

uint8_t ncurses__low__MouseMask__is_dash_button1_dash_released_dash_set(rowan_context_t context, object_t* mask) {
    mouse_mask_t *mouse_mask = (mouse_mask_t*)mask;
    return mouse_mask->mask & BUTTON1_RELEASED;
}

uint8_t ncurses__low__MouseMask__is_dash_button1_dash_clicked_dash_set(rowan_context_t context, object_t* mask) {
    mouse_mask_t *mouse_mask = (mouse_mask_t*)mask;
    return mouse_mask->mask & BUTTON1_CLICKED;
}

uint8_t ncurses__low__MouseMask__is_dash_button1_dash_double_dash_clicked_dash_set(rowan_context_t context, object_t* mask) {
    mouse_mask_t *mouse_mask = (mouse_mask_t*)mask;
    return mouse_mask->mask & BUTTON1_DOUBLE_CLICKED;
}

uint8_t ncurses__low__MouseMask__is_dash_button1_dash_triple_dash_clicked_dash_set(rowan_context_t context, object_t* mask) {
    mouse_mask_t *mouse_mask = (mouse_mask_t*)mask;
    return mouse_mask->mask & BUTTON1_TRIPLE_CLICKED;
}

uint8_t ncurses__low__MouseMask__is_dash_button2_dash_pressed_dash_set(rowan_context_t context, object_t* mask) {
    mouse_mask_t *mouse_mask = (mouse_mask_t*)mask;
    return mouse_mask->mask & BUTTON2_PRESSED;
}

uint8_t ncurses__low__MouseMask__is_dash_button2_dash_released_dash_set(rowan_context_t context, object_t* mask) {
    mouse_mask_t *mouse_mask = (mouse_mask_t*)mask;
    return mouse_mask->mask & BUTTON2_RELEASED;
}

uint8_t ncurses__low__MouseMask__is_dash_button2_dash_clicked_dash_set(rowan_context_t context, object_t* mask) {
    mouse_mask_t *mouse_mask = (mouse_mask_t*)mask;
    return mouse_mask->mask & BUTTON2_CLICKED;
}

uint8_t ncurses__low__MouseMask__is_dash_button2_dash_double_dash_clicked_dash_set(rowan_context_t context, object_t* mask) {
    mouse_mask_t *mouse_mask = (mouse_mask_t*)mask;
    return mouse_mask->mask & BUTTON2_DOUBLE_CLICKED;
}

uint8_t ncurses__low__MouseMask__is_dash_button2_dash_triple_dash_clicked_dash_set(rowan_context_t context, object_t* mask) {
    mouse_mask_t *mouse_mask = (mouse_mask_t*)mask;
    return mouse_mask->mask & BUTTON2_TRIPLE_CLICKED;
}

uint8_t ncurses__low__MouseMask__is_dash_button3_dash_pressed_dash_set(rowan_context_t context, object_t* mask) {
    mouse_mask_t *mouse_mask = (mouse_mask_t*)mask;
    return mouse_mask->mask & BUTTON3_PRESSED;
}

uint8_t ncurses__low__MouseMask__is_dash_button3_dash_released_dash_set(rowan_context_t context, object_t* mask) {
    mouse_mask_t *mouse_mask = (mouse_mask_t*)mask;
    return mouse_mask->mask & BUTTON3_RELEASED;
}

uint8_t ncurses__low__MouseMask__is_dash_button3_dash_clicked_dash_set(rowan_context_t context, object_t* mask) {
    mouse_mask_t *mouse_mask = (mouse_mask_t*)mask;
    return mouse_mask->mask & BUTTON3_CLICKED;
}

uint8_t ncurses__low__MouseMask__is_dash_button3_dash_double_dash_clicked_dash_set(rowan_context_t context, object_t* mask) {
    mouse_mask_t *mouse_mask = (mouse_mask_t*)mask;
    return mouse_mask->mask & BUTTON3_DOUBLE_CLICKED;
}

uint8_t ncurses__low__MouseMask__is_dash_button3_dash_triple_dash_clicked_dash_set(rowan_context_t context, object_t* mask) {
    mouse_mask_t *mouse_mask = (mouse_mask_t*)mask;
    return mouse_mask->mask & BUTTON3_TRIPLE_CLICKED;
}

uint8_t ncurses__low__MouseMask__is_dash_button4_dash_pressed_dash_set(rowan_context_t context, object_t* mask) {
    mouse_mask_t *mouse_mask = (mouse_mask_t*)mask;
    return mouse_mask->mask & BUTTON4_PRESSED;
}

uint8_t ncurses__low__MouseMask__is_dash_button4_dash_released_dash_set(rowan_context_t context, object_t* mask) {
    mouse_mask_t *mouse_mask = (mouse_mask_t*)mask;
    return mouse_mask->mask & BUTTON4_RELEASED;
}

uint8_t ncurses__low__MouseMask__is_dash_button4_dash_clicked_dash_set(rowan_context_t context, object_t* mask) {
    mouse_mask_t *mouse_mask = (mouse_mask_t*)mask;
    return mouse_mask->mask & BUTTON4_CLICKED;
}

uint8_t ncurses__low__MouseMask__is_dash_button4_dash_double_dash_clicked_dash_set(rowan_context_t context, object_t* mask) {
    mouse_mask_t *mouse_mask = (mouse_mask_t*)mask;
    return mouse_mask->mask & BUTTON4_DOUBLE_CLICKED;
}

uint8_t ncurses__low__MouseMask__is_dash_button4_dash_triple_dash_clicked_dash_set(rowan_context_t context, object_t* mask) {
    mouse_mask_t *mouse_mask = (mouse_mask_t*)mask;
    return mouse_mask->mask & BUTTON4_TRIPLE_CLICKED;
}

uint8_t ncurses__low__MouseMask__is_dash_button_dash_shift_dash_set(rowan_context_t context, object_t* mask) {
    mouse_mask_t *mouse_mask = (mouse_mask_t*)mask;
    return mouse_mask->mask & BUTTON_SHIFT;
}

uint8_t ncurses__low__MouseMask__is_dash_button_dash_ctrl_dash_set(rowan_context_t context, object_t* mask) {
    mouse_mask_t *mouse_mask = (mouse_mask_t*)mask;
    return mouse_mask->mask & BUTTON_CTRL;
}

uint8_t ncurses__low__MouseMask__is_dash_button_dash_alt_dash_set(rowan_context_t context, object_t* mask) {
    mouse_mask_t *mouse_mask = (mouse_mask_t*)mask;
    return mouse_mask->mask & BUTTON_ALT;
}

uint8_t ncurses__low__MouseMask__is_dash_report_dash_mouse_dash_position_dash_set(rowan_context_t context, object_t* mask) {
    mouse_mask_t *mouse_mask = (mouse_mask_t*)mask;
    return mouse_mask->mask & REPORT_MOUSE_POSITION;
}

void custom_drop(object_t* self) {

}
