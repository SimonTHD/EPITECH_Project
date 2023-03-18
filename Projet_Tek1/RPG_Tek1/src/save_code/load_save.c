/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** load_save
*/

#include "save.h"
#include "game.h"
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

bool load_save(game_obj_t *game)
{
    /*
    int player_fd;
    int quest_fd;

    if ((player_fd = open(player_save_path, O_RDONLY)) == -1)
        return (false);
    if ((quest_fd = open(quest_save_path, O_RDONLY)) == -1)
        return (false);
    if (read(player_fd, game->player, sizeof(player_t)) == -1)
        return (false);
    if (read(quest_fd, game->quest_list, sizeof(quest_t)) == -1)
        return (false);
    close(player_fd);
    close(quest_fd);
    */
    return (true);
}