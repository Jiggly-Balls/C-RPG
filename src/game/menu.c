#include "game/game.h"
#include "utils/terminal.h"


void menu(void) {
    char input[4];

    while (1) {
        get_input(
            "Enter the option: "
            "\n1) Play game"
            "\n2) Settings"
            "\n3) Exit",
            input,
            4,
            TEXT_DELAY
        );

        if (input[1] != '\0') {
            typewrite("Please enter a valid option.", TEXT_DELAY);
            continue;
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
            typewrite("Invalid option", TEXT_DELAY);
        }
    }
}