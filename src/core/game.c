#include "utils/terminal.h"
#include "core/game.h"


void game(void)
{
    char name[50];
    char play_intro;
    char name_confirm = 'n';

    while (name_confirm != 'y')
    {
        Terminal_clear_terminal();
        Terminal_get_input(
            "Enter your name: ",
            name,
            50,
            Terminal_text_speed,
            false
        );
        
        Terminal_typewrite("Your name is %s.", Terminal_text_speed, name);
        Terminal_get_input(
            " Are you sure of it? (y/n)",
            &name_confirm,
            2,
            Terminal_text_speed,
            true
        );
    }
    Terminal_typewrite("Your name is %s.", Terminal_text_speed, name);
    
    Terminal_interact("", Terminal_text_speed);

    Terminal_clear_terminal();

    Terminal_get_input(
        "Would you like to play the introduction? (y/n)",
        &play_intro,
        3,
        Terminal_text_speed,
        true
    );

    if (play_intro == 'y')
    {
        introduction();
    }
}

void introduction(void)
{
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
    "You wake up in a small, forgettable town on the edge of nowhere."
    "\n\nIn your pocket: 50 gold coins."
    "\nOn your back: a worn leather satchel."
    "\nIn your gut: a burning need to reclaim what was yours.";

    char scene_5[] = \
    "You swore that day that no one would ever have power over you again."
    "\nYou will rebuild."
    "\nYou will grow."
    "\nYou will become the wealthiest person this world has ever seen."
    "\n\nA TRILLIONAIRE.";

    Terminal_clear_terminal();

    Terminal_interact(scene_1, Terminal_text_speed);
    Terminal_clear_terminal();

    Terminal_interact(scene_2, Terminal_text_speed);
    Terminal_clear_terminal();

    Terminal_interact(scene_3, Terminal_text_speed);
    Terminal_clear_terminal();
    
    Terminal_interact(scene_4, Terminal_text_speed);
    Terminal_clear_terminal();

    Terminal_interact(scene_5, Terminal_text_speed);
    Terminal_clear_terminal();

    Terminal_interact(
        "Watch out for different events that occur which "
        "can alter the prices and different needs of people.",
         Terminal_text_speed
    );
    Terminal_clear_terminal();
}