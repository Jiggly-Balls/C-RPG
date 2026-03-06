#include "utils/terminal.h"


void game(void) {
    char name[50];
    int text_delay = 30;

    get_input("Enter your name: ", name, 50, text_delay);
    typewrite("Your name is: %s", text_delay, name);

}