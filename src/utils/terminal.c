#include <errno.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>

#ifdef _WIN32
#include <windows.h>
#define sleep_ms(ms) Sleep(ms)

#else
#include <unistd.h>
#define sleep_ms(ms) usleep((ms) * 1000)

#endif


void print_animate(const char text[], int delay)
{
    for (int i = 0; i < strlen(text); i++)
    {
        printf("%c", text[i]);
        fflush(stdout);
        sleep_ms(delay);
    }
    printf("\n");
}

int get_input(char prompt[], float delay)
{
    print_animate(prompt, delay);
    char input[10];
}