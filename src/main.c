// #include <stdio.h>

#include "utils/terminal.h"


int main(void)
{
    printa("Hi hello good morning!", 10);

    char name[10];
    get_input("Enter your name: ", name, 10);
    
    printa("Your name is: %s and you are %d years old", 10, name, 19);

    return 0;
}