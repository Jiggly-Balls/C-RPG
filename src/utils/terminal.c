#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifdef _WIN32
#include <windows.h>
#define sleep_ms(ms) Sleep(ms)

#else
#include <unistd.h>
#define sleep_ms(ms) usleep((ms) * 1000)
#endif


void printa(char *text, int delay)
{
    for (int i = 0; i < strlen(text); i++)
    {
        printf("%c", text[i]);
        fflush(stdout);
        sleep_ms(delay);
    }
    printf("\n");
}

void get_input(char *prompt_ptr, char *input_ptr, int delay, int size)
{
    printa(prompt_ptr, delay);
    fgets(input_ptr, size, stdin);
    input_ptr[strcspn(input_ptr, "\n")] = 0;
}
