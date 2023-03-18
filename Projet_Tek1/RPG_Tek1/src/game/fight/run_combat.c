/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** main
*/

#include "fight.h"
#include "game.h"

int run_combat(game_obj_t *game, int enemy)
{
    sfRenderWindow_setView(game->window, \
    sfRenderWindow_getDefaultView(game->window));
    if (start_fight(game->window, game->player, game, enemy)) {
        event_addxp(game);
        return (1);
    }
    return (0);
}