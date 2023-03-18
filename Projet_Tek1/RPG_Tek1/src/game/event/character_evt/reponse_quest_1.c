/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** reponse_quest_1
*/

#include "game.h"
#include "fight.h"

int reponse_quest_1(game_obj_t *game)
{
    if (debug_mode)
        my_putstr("declencher reponse 1");
    int id = 3;
    add_msg_talk_box(game, strdup(quest_1_dialogue));
    if (run_combat(game, 2)) {
        game->actual_map->event[0] = &reponse_quest_1_2;
        game->actual_map->event[2] = (evt)&quest_2;
        game->player->last_action_id = id;
    }
    return (0);
}