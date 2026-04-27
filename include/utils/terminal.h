#ifndef _TERMINAL_H
#define _TERMINAL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#define TEXT_DELAY 30

void typewrite(char *text, int delay, ...);
void get_input(char *prompt, char *input, size_t buffer_size, uint16_t delay, bool to_lower);
void clear_terminal(void);
void interact(char *prompt, uint16_t delay);

#endif