#include "utils/terminal.h"


void introduction(char *name) {
    char scene_1[] = \
    "The year is 1347."
    "\n\nThe world runs on gold, and those without it are forgotten by history.";

    char scene_2[] = \
    "You were once a respected merchant."
    "\nCaravans, contracts, a name people trusted."
    "\n\nThen one night on the road to Valdris... everything was taken from you.";

    char scene_3[] = \
    "Bandits. A dozen of them."
    "\nThey took your cart. Your goods. Your horse."
    "\nThey left you with nothing but the clothes on your back and the dirt beneath your feet.";

    char scene_4[] = \
    "You wake up in Millhaven."
    "\nA small, forgettable town on the edge of nowhere."
    "\n\nIn your pocket: 50 gold coins."
    "\nOn your back: a worn leather satchel."
    "\nIn your gut: a burning need to reclaim what was yours.";

    char scene_5[] = \
    "You swore that day that no one would ever have power over you again."
    "\nYou will rebuild."
    "\nYou will grow."
    "\nYou will become the wealthiest person this world has ever seen."
    "\n\nA TRILLIONAIRE.";

    clear_terminal();

    interact(scene_1, TEXT_DELAY);
    clear_terminal();

    interact(scene_2, TEXT_DELAY);
    clear_terminal();

    interact(scene_3, TEXT_DELAY);
    clear_terminal();
    
    interact(scene_4, TEXT_DELAY);
    clear_terminal();

    interact(scene_5, TEXT_DELAY);
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
        play_intro,
        3,
        TEXT_DELAY
    );
    if (*play_intro == 'y') {
        introduction(name);
    }
}