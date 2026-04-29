#include <ctype.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

#include "utils/terminal.h"

#ifdef _WIN32
    #include <windows.h>
    #define sleep_ms(ms) Sleep(ms)
#else
    #include <unistd.h>
    #define sleep_ms(ms) usleep((ms) * 1000)
#endif


enum TextSpeed Terminal_text_speed = FAST;


void typewrite(char *text, enum TextSpeed delay, ...)
{
    char buffer[1024];
    va_list args;
    va_start(args, delay);
    
    vsnprintf(buffer, sizeof(buffer), text, args);

    va_end(args);
    
    for (char *p = buffer; *p; p++)
    {
        putchar(*p);
        fflush(stdout);
        sleep_ms(delay);
    }
}

void get_input(
    char *prompt,
    char *input,
    size_t buffer_size,
    enum TextSpeed delay,
    bool to_lower
)
{
    if (prompt != NULL)
    {
        typewrite(prompt, delay);
    }
    typewrite("\n>>> ", delay);
    fgets(input, buffer_size, stdin);
    input[strcspn(input, "\n")] = 0;

    if (buffer_size - 1 == strlen(input))
    {
        int c;
        while ((c = getchar()) != '\n' && c != EOF)
            ;
    }

    if (to_lower)
    {
        for (; *input; input++)
        {
            *input = tolower((int)*input);
        }
    }
}

void clear_terminal(void)
{
    printf("\033[2J\033[H");
    fflush(stdout);
}

void interact(char *prompt, enum TextSpeed delay)
{
    char buffer[2];

    typewrite(prompt, delay);
    typewrite("\n[Press Enter to continue...]\n", 0);
    fgets(buffer, 2, stdin);
}