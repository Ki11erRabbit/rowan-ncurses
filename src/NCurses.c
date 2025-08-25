#include <rowan_runtime.h>
#include <stdint.h>
#include <stddef.h>
#include <ncurses.h>
#include <stdlib.h>
#include <string.h>

void ncurses__NCurses__initialize_dash_screen(rowan_context_t context) {
    initscr();
}

void ncurses__NCurses__raw(rowan_context_t context) {
    raw();
}

void ncurses__NCurses__no_dash_echo(rowan_context_t context) {
    noecho();
}

int32_t ncurses__NCurses__get_dash_ch(rowan_context_t context) {
    return getch();
}

void ncurses__NCurses__printw(rowan_context_t context, object_t* string) {
    uint8_t* str = NULL;
    uint64_t length = 0;
    rowan_get_string_buffer(string, &str, &length);
    uint8_t* whole_string = malloc(length + 1);
    strncpy(whole_string, str, length);
    whole_string[length] = '\0';
    printw(whole_string);
    free(whole_string);
}

void ncurses__NCurses__attribute_dash_on(rowan_context_t context, int32_t attr) {
    attron(attr);
}

void ncurses__NCurses__attribute_dash_off(rowan_context_t context, int32_t attr) {
    attroff(attr);
}

void ncurses__NCurses__refresh(rowan_context_t context) {
    refresh();
}

void ncurses__NCurses__end_dash_window(rowan_context_t context) {
    endwin();
}
