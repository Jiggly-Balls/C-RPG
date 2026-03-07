#include "game/game.h"
#include "utils/terminal.h"


void menu(void) {
    char input[3];

    while (1) {
        get_input(
            "\nEnter the option: "
            "\n1) Play game"
            "\n2) Settings"
            "\n3) Exit",
            input,
            3,
            TEXT_DELAY
        );

        if (input[1] != '\0') {
            interact("Please enter a valid option.", TEXT_DELAY);
            clear_terminal();
        }

        else if (*input == '1') {
            game();
        }

        else if (*input == '2') {

        }

        else if (*input == '3') {
            break;
        }

        else {
            interact("Invalid option", TEXT_DELAY);
            clear_terminal();
        }
    }
}