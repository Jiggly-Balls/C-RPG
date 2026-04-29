#include "core/game.h"
#include "core/menu.h"
#include "core/settings.h"
#include "utils/state_table.h"

int main(void)
{
    struct StateFuncMap {
        enum StateTable_StateEnums state;
        StateTable_Func function;
    };
    struct StateFuncMap function_table[] = {
        {StateEnums_MENU, Menu_loop},
        {StateEnums_GAME, Game_loop},
        {StateEnums_SETTINGS, Settings_loop},
        {-1, NULL},
    };

    StateTable_ctor(StateEnums_TOTAL_STATES);

    for (struct StateFuncMap *entry = function_table; entry->function != NULL; entry++)
    {
        StateTable_set(entry->state, entry->function);
    }

    enum StateTable_StateEnums StateTable_current_state = StateEnums_MENU;
    while (1)
    {
        StateTable_Func *current_state_func = StateTable_get(StateTable_current_state);
        (*current_state_func)();
    }

    StateTable_dtor();

    return 0;
}
