/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** display_htp
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/Graphics/Color.h>
#include <SFML/Window/Cursor.h>
#include <stdbool.h>
#include <stdio.h>
#include "interface.h"

void display_htp(launcher_t *launcher)
{
    sfSprite *htp = sfSprite_create();
    sfTexture *htp_texture = sfTexture_createFromFile\
("assets/launcher/htp.png", NULL);
    bool htp_is_on = true;

    sfSprite_setTexture(htp, htp_texture, sfFalse);
    while (htp_is_on) {
        sfRenderWindow_drawSprite(launcher->window, htp, NULL);
        if (sfKeyboard_isKeyPressed(sfKeyEscape))
            htp_is_on = false;
        sfRenderWindow_display(launcher->window);
    }
}