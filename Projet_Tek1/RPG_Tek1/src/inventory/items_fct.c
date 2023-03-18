/*
** EPITECH PROJECT, 2020
** items_fct
** File description:
** equipment, etc...
*/

#include "game.h"

void init_item(inv_t *inv)
{
    int i = 0;

    inv->slot[i]->attack = 0;
    inv->slot[i]->status = 0;
    inv->slot[i]->stack = 0;
    inv->slot[i]->r_life = 0;
    inv->slot[i]->life = 0;
    inv->slot[i]->in_body = 0;
    inv->slot[i]->def = 0;
    inv->slot[i]->conso = 0;
    inv->slot[i]->can_e = 0;
}

///////////////////////////////////////////////////////////////////////////////

void change_the_slot(item_t *item_it, item_t *item_to, int equipment)
{
    item_it->item_sprite = item_to->item_sprite;
    item_it->status = item_to->status;
    item_it->attack = item_to->attack;
    item_it->life = item_to->life;
    item_it->def = item_to->def;
    item_it->conso = item_to->conso;
    item_it->stack = item_to->stack;
    item_it->r_life = item_to->r_life;
    if (equipment == 0) {
        item_it->in_body = item_to->in_body;
        item_it->can_e = item_to->can_e;
    }
}

///////////////////////////////////////////////////////////////////////////////

void equipment_fct(item_t *item, item_t **inv)
{
    for (int i = 2; inv[i] != NULL; i++) {
        if (inv[i]->in_body == item->can_e && inv[i]->status == 0) {
            change_the_slot(inv[0], item, 1);
            change_the_slot(item, inv[i], 1);
            change_the_slot(inv[i], inv[0], 1);
            inv[i]->can_e = 5;
            break;
        }
    }
}

///////////////////////////////////////////////////////////////////////////////

void unequipment_fct(item_t *item, item_t **inv)
{
    for (int i = 2; inv[i] != NULL; i++) {
        if (inv[i]->status == 0 && inv[i]->in_body == 0 && \
inv[i]->conso == 0) {
            change_the_slot(inv[0], inv[i], 1);
            change_the_slot(inv[i], item, 1);
            change_the_slot(item, inv[0], 1);
            inv[i]->can_e = item->in_body;
            break;
        }
    }
}

///////////////////////////////////////////////////////////////////////////////

int item_sprite(sfVector2i position, item_t **inv)
{
    for (int i = 0; i < 20; i++) {
        if (position.x > inv[i]->item_pos.x && \
            position.x < inv[i]->item_pos.x + 50 && \
            position.y > inv[i]->item_pos.y && \
            position.y < inv[i]->item_pos.y + 50)
            return (i);
    }
    return (0);
}

///////////////////////////////////////////////////////////////////////////////