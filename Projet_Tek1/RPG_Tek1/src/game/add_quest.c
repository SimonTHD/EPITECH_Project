/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** add_quest
*/

#include "game.h"

bool have_quest(quest_t *list, quest_t *new)
{
    quest_t *tmp = list;
    while (tmp) {
        if (tmp->action_id == new->action_id)
            return (true);
        tmp = tmp->next;
    }
    return (false);
}

quest_t *add_quest(quest_t *list, quest_t *new)
{
    if (have_quest(list, new))
        return (list);
    quest_t *new_list = new;
    new_list->next = list;
    return (new_list);
}