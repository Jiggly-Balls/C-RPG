#include "utils/terminal.h"
#include <stdio.h>


int main(void)
{
    printa("Hi hello good morning!", 10);
    char name[20];
    get_input("Enter your name: ", name, 20, 30);
    printa("Your name is: %s and you are %d years old.", 10, name, 19);
    printa("This is a character: %c", 10, 'd');

    printf("Hi %c", 'g');

    return 0;
}