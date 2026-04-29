#ifndef STATE_TABLE_H
#define STATE_TABLE_H

#include <stddef.h>


enum StateTable_StateEnums {
    StateEnums_MENU,
    StateEnums_GAME,
    StateEnums_SETTINGS,
    StateEnums_TOTAL_STATES,
};
extern enum StateTable_StateEnums StateTable_current_state;

typedef void (*StateTable_Func)(void);
struct StateTable_States;

struct StateTable_States* StateTable_ctor(size_t size);
void StateTable_dtor(void);
void StateTable_set(
    enum StateTable_StateEnums state_enum,
    StateTable_Func function
);
StateTable_Func* StateTable_get(
    enum StateTable_StateEnums state_enum
);

#endif