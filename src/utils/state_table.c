#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>


typedef void (*Func)(void);

struct StateTable_States
{
    size_t size;
    uint32_t *keys;
    Func *functions;
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
    
    table->functions = malloc(sizeof(Func) * size);
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