/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** events
*/

#include "fight.h"
#include "game.h"
#include <stdbool.h>

void handle_keys(fight_t *fight, sfKeyCode key_code)
{
    if (key_code == sfKeyEnter)
        use_attack(fight);
    else if (!fight->atq_cooldown)
        set_selector_pos(fight, key_code);
}

bool handle_events(fight_t *fight, game_obj_t *game)
{
    while (sfRenderWindow_pollEvent(fight->win, &fight->event)) {
        if (fight->event.type == sfEvtClosed) {
            sfRenderWindow_close(fight->win);
            game->is_play = false;
            return (true);
        }
        if (fight->event.type == sfEvtKeyPressed)
            handle_keys(fight, fight->event.key.code);
    }
    return (false);
}