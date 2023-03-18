/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** enemy
*/

#include "fight.h"

sfTexture *get_enemy_texture(fight_t *fight)
{
    switch (fight->enemy_type) {
    case 0:
        return sfTexture_createFromFile(ENEMY_1, NULL);
    case 1:
        return sfTexture_createFromFile(ENEMY_2, NULL);
    case 2:
        return sfTexture_createFromFile(ENEMY_3, NULL);
    case 3:
        return sfTexture_createFromFile(ENEMY_4, NULL);
    case 4:
        return sfTexture_createFromFile(ENEMY_5, NULL);
    default:
        return sfTexture_createFromFile(ENEMY_1, NULL);
    }
}

char *get_enemy_string(void)
{
    switch (get_rand(0, 4)) {
    case 0:
        return "Kenji";
    case 1:
        return "David";
    case 2:
        return "Joe Lopez";
    case 3:
        return "Paco";
    case 4:
        return "Antonio";
    default:
        return "Diego";
    }
}

sfText *get_enemy_text(fight_t *fight, player_t *player)
{
    sfText *txt = NULL;
    char *name = my_strdup(get_enemy_string());
    int min_lvl = (player->lvl > 3) ? player->lvl - 3 : 1;
    int en_lvl = get_rand(min_lvl, player->lvl + 3);

    fight->enemy_level = en_lvl;
    name = my_strcat(name, " - Level ");
    name = my_strcat(name, my_itoa(en_lvl));
    txt = get_text(fight, name, 1.6, 2.5);
    return (txt);
}

sfSprite *init_enemy(fight_t *fight)
{
    sfSprite *enemy = sfSprite_create();
    sfTexture *texture = NULL;
    sfVector2f pos;
    sfVector2f scale;
    sfIntRect rect = {0, 0, 70, 186};

    if (fight->enemy_type == -1)
        fight->enemy_type = get_rand(0, 4);
    texture = get_enemy_texture(fight);
    scale.x = 0.85;
    scale.y = 0.85;
    pos.x = sfRenderWindow_getSize(fight->win).x / 1.4;
    pos.y = sfRenderWindow_getSize(fight->win).y / 1.9;
    sfSprite_setTexture(enemy, texture, sfFalse);
    sfSprite_setTextureRect(enemy, rect);
    sfSprite_scale(enemy, scale);
    sfSprite_setPosition(enemy, pos);
    return (enemy);
}