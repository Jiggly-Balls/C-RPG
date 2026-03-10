#include "utils/terminal.h"


void introduction(char *name) {
    clear_terminal();
    typewrite("Hello there %s. ", TEXT_DELAY, name);
    typewrite("Your only goal in life is to be", TEXT_DELAY);
    for (int i = 0; i < 3; i++){
        typewrite(".", 1000);
    }
    interact("a TRILLIONAIRE!", TEXT_DELAY);

    clear_terminal();

    interact("Go from town to town and find out people's needs and exploit it!", TEXT_DELAY);

    clear_terminal();

    interact(
        "Watch out for different events that occur which "
        "can alter the prices and different needs of people.",
         TEXT_DELAY
    );

    clear_terminal();
}


void game(void) {
    char name[50];
    char play_intro[3];

    clear_terminal();
    get_input("Enter your name: ", name, 50, TEXT_DELAY);
    
    typewrite("Your name is: %s", TEXT_DELAY, name);
    interact("", TEXT_DELAY);

    clear_terminal();

    get_input(
        "Would you like to play the introduction? (y/n)",
        play_intro, 3,
        TEXT_DELAY
    );
    if (*play_intro == 'y') {
        introduction(name);
    }
}