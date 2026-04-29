#ifndef _TERMINAL_H
#define _TERMINAL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


enum TextSpeed {
    TEXT_SPEED_SLOW   = 50,
    TEXT_SPEED_MEDIUM = 40,
    TEXT_SPEED_FAST   = 30,
    TEXT_SPEED_PAUSE  = 300,
};

extern enum TextSpeed Terminal_text_speed;

void Terminal_typewrite(const char *text, enum TextSpeed delay, ...);
void Terminal_get_input(const char *prompt, char *input, size_t buffer_size, enum TextSpeed delay, bool to_lower);
void Terminal_clear_terminal(void);
void Terminal_interact(const char *prompt, enum TextSpeed delay);

#endif