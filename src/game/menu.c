#include <stdbool.h>

#include "game/game.h"
#include "game/menu.h"
#include "utils/terminal.h"

void menu(void)
{
    char input;

    while (true) {
        get_input(
            "\n1) Play game"
            "\n2) Settings"
            "\n3) Exit",
            &input,
            2,
            TEXT_DELAY,
            false
        );
        
        if (input == '1')
        {
            game();
        }

        else if (input == '2')
        {

        }

        else if (input == '3')
        {
            break;
        }

        else
        {
            interact("Invalid option", TEXT_DELAY);
            clear_terminal();
        }
    }
}