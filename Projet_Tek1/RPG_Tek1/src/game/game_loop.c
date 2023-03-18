/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** game_loop
*/

#include "game.h"
#include "fight.h"

void get_reward(quest_t *quest, game_obj_t *game)
{
    if (quest->reward)
        quest->reward(game);
}

void check_quest(game_obj_t *game)
{
    int last_action = game->player->last_action_id;
    quest_t *tmp = game->quest_list;
    for (int i = 0; tmp; i++) {
        if (last_action == tmp->action_id && tmp->is_completed == false) {
            tmp->is_completed = true;
            get_reward(tmp, game);
        }
        tmp = tmp->next;
    }
}

bool manage_event(game_obj_t *game, sfRenderWindow *window)
{
    move_player(game);
    while (sfRenderWindow_pollEvent(window, game->event)) {
        if (game->event->type == sfEvtClosed)
            return (true);
        if (sfKeyboard_isKeyPressed(sfKeyEscape))
            if (display_pause(game, window) == 2)
                return (true);
        if (sfKeyboard_isKeyPressed(sfKeyT))
            inventory(game, (sfWindow *)window, *game->event);
        if (game->player->pv < 1)
            return (1);
    }
    return (false);
}

int game_loop(game_obj_t *game, sfRenderWindow *window)
{
    while (game->is_play) {
        update_player_pos(game);
        check_quest(game);
        is_next_frame(game);
        print_and_display(window, game);
        if (manage_event(game, window))
            game->is_play = false;
    }
    return (0);
}