/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** quest_3
*/

#include "game.h"
#include "my.h"

int quest_3(game_obj_t *game)
{
    if (debug_mode)
        my_putstr("declencher quete 3\n");
    quest_t *new_quest = malloc(sizeof(quest_t));
    new_quest->quest_id = 53;
    new_quest->title = strdup(quest_3_title);
    new_quest->description = strdup(quest_3_describe);
    new_quest->is_completed = false;
    new_quest->action_id = 11;
    new_quest->next = NULL;
    new_quest->reward = &reward_3;
    game->quest_list = add_quest(game->quest_list, new_quest);
    add_msg_talk_box(game, new_quest->description);
    game->actual_map->event[4] = (evt)&reponse_quest_3;
    game->actual_map->event[0] = (evt)&null_event;
    return (0);
}