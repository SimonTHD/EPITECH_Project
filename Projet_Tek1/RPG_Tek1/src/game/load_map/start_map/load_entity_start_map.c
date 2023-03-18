/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** load_entity_start_map
*/

#include "game.h"


entity_t *load_lopez(sfVector2f pos)
{
    char *sprite_sheet_path = "assets/game/sprite_sheet/joe.png";
    entity_t *lopez = malloc(sizeof(entity_t));
    anim_obj_t *anim_lopez = malloc(sizeof(anim_obj_t));
    lopez->direction = 0;
    lopez->pos = pos;
    anim_lopez->frame = 0;
    anim_lopez->nb_of_frame = 1;
    anim_lopez->sprite_sheet = sfTexture_createFromFile\
    (sprite_sheet_path, NULL);
    anim_lopez->width_height_frame = (sfVector2i){25, 25};
    anim_lopez->sprite_one_frame = sfSprite_create();
    sfSprite_setTexture\
    (anim_lopez->sprite_one_frame, anim_lopez->sprite_sheet, sfFalse);
    sfSprite_setTextureRect(anim_lopez->sprite_one_frame, \
    (sfIntRect){0, 0, anim_lopez->width_height_frame.x, \
anim_lopez->width_height_frame.x});
    sfSprite_setPosition(anim_lopez->sprite_one_frame, pos);
    lopez->anim = anim_lopez;
    return (lopez);
}

void load_entity_start_map(map_obj_t *map)
{
    int nb_entity = 6;
    map->entity = malloc(sizeof(entity_t) * (nb_entity + 1));

    map->entity[0] = (entity_t *)load_lopez(joe);
    map->entity[1] = (entity_t *)load_lopez(kenji);
    map->entity[2] = (entity_t *)load_lopez(michael);
    map->entity[3] = (entity_t *)load_lopez(consin_mich);
    map->entity[4] = (entity_t *)load_lopez(bernard);
    map->entity[5] = (entity_t *)load_lopez(chuck);
    map->entity[6] = (entity_t *)NULL;
}