#ifndef _GAME_H
#define _GAME_H

#include <stdint.h>

void game(void);
void introduction(void);

struct Trader
{
    char name[50];
    int32_t gold;
    int32_t reputation;
    int32_t energy;
};

extern struct Trader trader;

#endif