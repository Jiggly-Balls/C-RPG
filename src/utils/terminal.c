#include <stdio.h>
#include <unistd.h>
#include <string.h>


void print_animate(char text[], int delay)
{
    for (int i = 0; i < strlen(text); i++)
    {
        printf("%c", text[i]);
        usleep(delay);
    }
    printf("\n");
}


int get_input(char prompt[], int delay)
{
    print_animate(prompt, delay);
    char input[10];
}