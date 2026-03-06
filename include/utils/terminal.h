#ifndef _TERMINAL_H
#define _TERMINAL_H

#include <stddef.h>

#define TEXT_DELAY 30

void typewrite(char *text, int delay, ...);
void get_input(char *prompt, char *input, size_t buffer_size, int delay);

#endif