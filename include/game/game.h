#ifndef _GAME_H
#define _GAME_H

void game(void);
void introduction(char *name);

typedef struct {
    char name[50];
    int gold;
    int reputation;
} Player;

extern Player player;

#endif