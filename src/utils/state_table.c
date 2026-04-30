#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>

#include "utils/state_table.h"


struct StateTable_States {
    size_t size;
    uint32_t *keys;
    StateTable_Func *functions;
};

static struct StateTable_States *states;

struct StateTable_States* StateTable_ctor(size_t size) {
    states = malloc(sizeof *states);

    if (!states) {
        exit(EXIT_FAILURE);
    }

    states->size = size;

    states->keys = malloc(sizeof(uint32_t) * size);
    if (!states->keys) {
        free(states);
        exit(EXIT_FAILURE);
    }
    
    states->functions = malloc(sizeof(StateTable_Func) * size);
    if (!states->functions) {
        free(states);
        exit(EXIT_FAILURE);
    }
    
    return states;
}


void StateTable_dtor(void) {
    if (!states) {
        return;
    }

    free(states->keys);
    free(states->functions);
    free(states);
}

void StateTable_set(
    enum StateTable_StateEnums state_enum,
    StateTable_Func function
) {
    states->functions[state_enum] = *function;
}

StateTable_Func* StateTable_get(
    enum StateTable_StateEnums state_enum
) {
    return &states->functions[state_enum];
}