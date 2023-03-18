/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** life
*/

#include "fight.h"

sfSprite *init_life(fight_t *fight, int type)
{
    sfSprite *life = sfSprite_create();
    sfTexture *texture = sfTexture_createFromFile(HEART, NULL);
    sfVector2f pos;
    sfVector2f scale;

    if (type == 1) {
        pos.x = sfRenderWindow_getSize(fight->win).x / 1.5;
        pos.y = sfRenderWindow_getSize(fight->win).y / 2.2;
    } else {
        pos.x = sfRenderWindow_getSize(fight->win).x / 9;
        pos.y = sfRenderWindow_getSize(fight->win).y / 2.2;
    }
    scale.x = 0.10;
    scale.y = 0.05;
    sfSprite_setTexture(life, texture, sfFalse);
    sfSprite_scale(life, scale);
    sfSprite_setPosition(life, pos);
    return (life);
}

void set_life_text(fight_t *fight, player_t *player, int type)
{
    char *hp = malloc(fight->enemy_full_hp * sizeof(char));

    hp = (type == 0) ? my_strcpy(hp, my_itoa(player->pv)) :\
    my_strcpy(hp, my_itoa(fight->enemy_hp));
    hp = my_strcat(hp, " / ");
    hp = (type == 0) ? my_strcat(hp, my_itoa(player->max_pv)) : \
    my_strcat(hp, my_itoa(fight->enemy_full_hp));
    if (type == 0)
        sfText_setString(fight->pl_text, hp);
    else
        sfText_setString(fight->en_text, hp);
}