#ifndef STATE_TABLE_H
#define STATE_TABLE_H

#include <stddef.h>

enum StateTable_StateEnums {
    StateEnums_GAME,
    StateEnums_SETTINGS,
    StateEnums_MENU,
    StateEnums_TOTAL_STATES,
};

typedef void (*StateTable_Func)(void);
struct StateTable_States;

struct StateTable_States* StateTable_ctor(size_t size);
void StateTable_dtor(struct StateTable_States *self);
void StateTable_set(
    struct StateTable_States *self,
    enum StateTable_StateEnums state_enum,
    StateTable_Func function
);
StateTable_Func* StateTable_get(
    const struct StateTable_States *self,
    enum StateTable_StateEnums state_enum
);

#endif