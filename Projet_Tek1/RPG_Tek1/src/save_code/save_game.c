/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** save_game
*/

#include "save.h"
#include "game.h"
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

bool save_game(game_obj_t *game)
{
    /*
    int player_fd;
    int quest_fd;
    if ((player_fd = open(player_save_path, O_CREAT | O_WRONLY)) == -1)
        return (false);
    if ((quest_fd = open(quest_save_path, O_CREAT | O_WRONLY)) == -1)
        return (false);
    delete_save();
    if (write(player_fd, &game->player, sizeof(player_t)) != sizeof(player_t))
        return (false);
    if (write(quest_fd, &game->quest_list, sizeof(quest_t)) != sizeof(quest_t))
        return (false);
    close(player_fd);
    close(quest_fd);
    my_putstr("game save!\n");
    */
    return (true);
}