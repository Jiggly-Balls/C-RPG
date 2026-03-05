#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>

#ifdef _WIN32
#include <windows.h>
#define sleep_ms(ms) Sleep(ms)

#else
#include <unistd.h>
#define sleep_ms(ms) usleep((ms) * 1000)
#endif


void printa(char *text, int delay, ...)
{
    bool placeholder = false;
    va_list args;
    va_start(args, delay);

    for (int index = 0; index < strlen(text); index++)
    {
        if ((text[index] == '%' && index != strlen(text) - 1) &&
            (text[index + 1] == 'c' || text[index + 1] == 'd' || text[index + 1] == 's'))
        {
            placeholder = true;
            continue;
        }
        
        if (placeholder)
        {
            if (text[index] == 'd')
            {
                printf("%d", va_arg(args, int));
                continue;
            }
            if (text[index] == 's')
            {
                printf("%s", va_arg(args, char*));
                continue;
            }
            if (text[index] == 'c')
            {
                printf("%c", va_arg(args, int));
                continue;
            }
            placeholder = false;
        }

        printf("%c", text[index]);
        fflush(stdout);
        sleep_ms(delay);
    }
    printf("\n");
    va_end(args);
}

void get_input(char *prompt_ptr, char *input_ptr, size_t buffer_size, int delay)
{
    printa(prompt_ptr, delay);
    fgets(input_ptr, buffer_size, stdin);
    input_ptr[strcspn(input_ptr, "\n")] = 0;
}
