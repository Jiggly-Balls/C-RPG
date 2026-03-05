#include <stdlib.h>

#include "utils/terminal.h"


int main(void)
{
    printa("Hi hello good morning!", 10);

    char *name = get_input("Enter your name: ", 10, 10);
    printa("Your name is: ", 10);
    printa(name, 10);

    free(name);

    return 0;
}