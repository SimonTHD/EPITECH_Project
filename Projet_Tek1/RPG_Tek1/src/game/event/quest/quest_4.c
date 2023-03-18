/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** quest_4
*/

#include "game.h"

int quest_4(game_obj_t *game)
{
    if (debug_mode)
        my_putstr("declencher quete 4\n");
    quest_t *new_quest = malloc(sizeof(quest_t));
    new_quest->quest_id = 54;
    new_quest->title = strdup(quest_4_title);
    new_quest->description = strdup(quest_4_describe);
    new_quest->is_completed = false;
    new_quest->action_id = 15;
    new_quest->next = NULL;
    new_quest->reward = &reward_4;
    game->quest_list = add_quest(game->quest_list, new_quest);
    add_msg_talk_box(game, new_quest->description);
    game->actual_map->event[5] = (evt)&reponse_quest_4;
    return (0);
}