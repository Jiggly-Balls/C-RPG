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

void typewrite(char *text, enum TextSpeed delay, ...);
void get_input(char *prompt, char *input, size_t buffer_size, enum TextSpeed delay, bool to_lower);
void clear_terminal(void);
void interact(char *prompt, enum TextSpeed delay);

#endif