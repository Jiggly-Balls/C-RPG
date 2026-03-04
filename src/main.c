#include <stdlib.h>

#include "utils/terminal.h"


int main(void)
{
    print_animate("Hi hello good morning!", 10);

    char *name = get_input("Enter your name: ", 10, 10);
    print_animate("Your name is: ", 10);
    print_animate(name, 10);

    free(name);

    return 0;
}