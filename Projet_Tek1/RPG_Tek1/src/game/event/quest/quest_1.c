/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** les_outils_de_joe
*/

#include "game.h"
#include "my.h"

int quest_1(game_obj_t *game)
{
    if (debug_mode)
        my_putstr("declencher quete 1\n");
    quest_t *new_quest = malloc(sizeof(quest_t));
    new_quest->quest_id = 51;
    new_quest->title = strdup(quest_1_title);
    new_quest->description = strdup(quest_1_describe);
    new_quest->is_completed = false;
    new_quest->action_id = 3;
    new_quest->next = NULL;
    new_quest->reward = &reward_1;
    game->player->last_action_id = new_quest->quest_id;
    game->quest_list = add_quest(game->quest_list, new_quest);
    add_msg_talk_box(game, new_quest->description);
    game->actual_map->event[1] = (evt)&reponse_quest_1;
    game->actual_map->event[0] = (evt)&null_event;
    game->actual_map->event[6] = (evt)&null_event;
    return (0);
}