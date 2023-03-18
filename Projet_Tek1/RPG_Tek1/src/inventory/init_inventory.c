/*
** EPITECH PROJECT, 2020
** inventory
** File description:
** invenetory
*/

#include "game.h"

///////////////////////////////////////////////////////////////////////////////

void init_item_info(item_t *item, int info[10])
{
    item->in_body = info[0];
    item->can_e = info[1];
    item->status = info[2];
    item->attack = info[3];
    item->def = info[4];
    item->life = info[5];
    item->r_life = info[6];
    item->conso = info[8];
    item->stack = info[9];
}

///////////////////////////////////////////////////////////////////////////////

item_t *create_slot(sfIntRect rect, const char *sprite, int info[10])
{
    item_t *item = malloc(sizeof(item_t) * 2);
    sfVector2f high_pos = (sfVector2f){rect.left, rect.top};
    sfVector2f high_size = (sfVector2f){rect.width, rect.height};

    if (item == NULL)
        return (NULL);
    init_item_info(item, info);
    item->item_sprite = sfSprite_create();
    item->item_text = sfTexture_createFromFile(sprite, NULL);
    sfSprite_setTexture(item->item_sprite, item->item_text, sfTrue);
    item->item_pos = high_pos;
    item->item_rect.left = 0;
    item->item_rect.top = 0;
    item->item_rect.width = high_size.x;
    item->item_rect.height = high_size.y;
    sfSprite_setTextureRect(item->item_sprite, item->item_rect);
    sfSprite_setPosition(item->item_sprite, high_pos);
    return (item);
}

///////////////////////////////////////////////////////////////////////////////

item_t *init_tab(sfIntRect rect)
{
    item_t *item;

    item = create_slot(rect, "assets/inventory/empty.png", \
(int[10]){0, 0, 0, 0, 0, 0, 0, 0, 0, 0});
    return (item);
}

///////////////////////////////////////////////////////////////////////////////

void fill_mid_tab(game_obj_t *game)
{
    game->inv->slot[2] = init_tab((sfIntRect){672, 355, 69, 69});
    game->inv->slot[3] = init_tab((sfIntRect){995, 355, 69, 69});
    game->inv->slot[4] = init_tab((sfIntRect){1160, 355, 69, 69});
    game->inv->slot[5] = init_tab((sfIntRect){1074, 355, 69, 69});
    game->inv->slot[6] = init_tab((sfIntRect){672, 445, 69, 69});
    game->inv->slot[7] = init_tab((sfIntRect){995, 445, 69, 69});
    game->inv->slot[8] = init_tab((sfIntRect){1160, 445, 69, 69});
    game->inv->slot[9] = init_tab((sfIntRect){1074, 445, 69, 69});
    game->inv->slot[10] = init_tab((sfIntRect){995, 535, 69, 69});
    game->inv->slot[11] = init_tab((sfIntRect){1160, 535, 69, 69});
    game->inv->slot[12] = init_tab((sfIntRect){1074, 535, 69, 69});
    game->inv->slot[13] = init_tab((sfIntRect){995, 625, 69, 69});
    game->inv->slot[14] = init_tab((sfIntRect){1160, 625, 69, 69});
    game->inv->slot[15] = init_tab((sfIntRect){1074, 625, 69, 69});
    game->inv->slot[16] = init_tab((sfIntRect){672, 535, 69, 69});
    game->inv->slot[17] = init_tab((sfIntRect){672, 625, 69, 69});
}

///////////////////////////////////////////////////////////////////////////////

void init_tab_item(game_obj_t *game)
{
    game->inv->slot[0] = create_slot((sfIntRect){0, 0, 0, 0}, \
    "assets/inventory/empty.png", (int[10]){0, 0, 0, 0, 0, 0, 0, 0, 0, 0});
    game->inv->slot[1] = create_slot((sfIntRect){600, 250, 700, 550}, \
    "assets/inventory/inventory.png", (int[10]){0, 0, 0, 0, 0, 0, 0, 0, 0, 0});
    fill_mid_tab(game);
    game->inv->slot[18] = create_slot((sfIntRect){799, 630, 65, 65}, \
    "assets/inventory/empty.png", (int[10]){1, 0, 0, 0, 0, 0, 0, 0, 0, 0});
    game->inv->slot[19] = create_slot((sfIntRect){880, 630, 65, 65}, \
    "assets/inventory/empty.png", (int[10]){2, 0, 0, 0, 0, 0, 0, 0, 0, 0});
}

///////////////////////////////////////////////////////////////////////////////