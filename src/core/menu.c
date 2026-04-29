#include <stdbool.h>

#include "core/game.h"
#include "core/menu.h"
#include "utils/terminal.h"

void menu(void)
{
    char input;

    while (true) {
        Terminal_get_input(
            "\n1) Play game"
            "\n2) Settings"
            "\n3) Exit",
            &input,
            2,
            Terminal_text_speed,
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
            Terminal_interact("Invalid option", Terminal_text_speed);
            Terminal_clear_terminal();
        }
    }
}