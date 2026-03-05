#ifndef _TERMINAL_H
#define _TERMINAL_H

#include <stddef.h>

void printa(char *text, int delay, ...);
void get_input(char *prompt_ptr, char *input_ptr, size_t buffer_size, int delay);

#endif