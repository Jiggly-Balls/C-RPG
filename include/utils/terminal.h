#ifndef _TERMINAL_H
#define _TERMINAL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


enum TextSpeed {
    SLOW   = 50,
    MEDIUM = 40,
    FAST   = 30,
};

extern enum TextSpeed Terminal_text_speed;

void Terminal_typewrite(char *text, enum TextSpeed delay, ...);
void Terminal_get_input(char *prompt, char *input, size_t buffer_size, enum TextSpeed delay, bool to_lower);
void Terminal_clear_terminal(void);
void Terminal_interact(char *prompt, enum TextSpeed delay);

#endif