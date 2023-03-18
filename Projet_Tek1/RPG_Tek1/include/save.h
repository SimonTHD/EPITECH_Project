/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** save
*/

#include "game.h"

#ifndef SAVE_H_
#define SAVE_H_

#include <stdbool.h>

//char player_save_path[17];
//char quest_save_path[16];

bool if_save(void);
void delete_save(void);
bool save_game(game_obj_t *game);
bool load_save(game_obj_t *game);

#endif /* !SAVE_H_ */
