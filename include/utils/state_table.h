#ifndef STATE_TABLE_H
#define STATE_TABLE_H

#include <stddef.h>


struct StateTable_States;

struct StateTable_States* StateTable_ctor(size_t size);
void StateTable_dtor(struct StateTable_States *self);

#endif