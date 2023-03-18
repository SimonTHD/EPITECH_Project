/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** init_talk_box
*/

#include "game.h"

talk_box_t *init_bool_talk_box(talk_box_t *box)
{
    box->have_talk = false;
    box->in_print = false;
    box->in_reset = false;
    return (box);
}

talk_box_t *init_talk_box(sfVector2i win_rez)
{
    sfFont *font = sfFont_createFromFile("assets/game/wendy.ttf");
    talk_box_t *box = malloc(sizeof(talk_box_t));
    sfVector2f pos_cadre = {32 * win_rez.x / 100, 75 * win_rez.y / 100};
    sfVector2f scale_cadre = (sfVector2f){(float)((float)win_rez.x / 1360), \
(float)((float)win_rez.y / 720)};
    sfTexture *box_texture = sfTexture_createFromFile\
("assets/game/texture/cadre.png", NULL);
    box->cadre = sfSprite_create();
    sfSprite_setTexture(box->cadre, box_texture, sfFalse);
    sfSprite_setPosition(box->cadre, pos_cadre);
    sfSprite_setScale(box->cadre, scale_cadre);
    box->buffer_sound = sfSoundBuffer_createFromFile\
("assets/game/song/notif.ogg");
    box->text = sfText_create();
    sfText_setFont(box->text, font);
    sfText_setCharacterSize(box->text, win_rez.y * 30 / 1080);
    sfText_setPosition(box->text, (sfVector2f){pos_cadre.x + 10, \
pos_cadre.y + 10});
    return (init_bool_talk_box(box));
}