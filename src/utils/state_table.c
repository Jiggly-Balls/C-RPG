#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>

#include "utils/state_table.h"


struct StateTable_States
{
    size_t size;
    uint32_t *keys;
    StateTable_Func *functions;
};


struct StateTable_States* StateTable_ctor(size_t size)
{
    struct StateTable_States *table = malloc(sizeof *table);

    if (!table)
    {
        exit(EXIT_FAILURE);
    }

    table->size = size;

    table->keys = malloc(sizeof(uint32_t) * size);
    if (!table->keys)
    {
        free(table);
        exit(EXIT_FAILURE);
    }
    
    table->functions = malloc(sizeof(StateTable_Func) * size);
    if (!table->functions)
    {
        free(table);
        exit(EXIT_FAILURE);
    }
    
    return table;
}


void StateTable_dtor(struct StateTable_States *self)
{
    if (!self)
    {
        return;
    }

    free(self->keys);
    free(self->functions);
    free(self);
}

void StateTable_set(
    struct StateTable_States *self,
    enum StateTable_StateEnums state_enum,
    StateTable_Func function
)
{
    self->functions[state_enum] = *function;
}


StateTable_Func* StateTable_get(
    const struct StateTable_States *self,
    enum StateTable_StateEnums state_enum
)
{
    return &self->functions[state_enum];
}