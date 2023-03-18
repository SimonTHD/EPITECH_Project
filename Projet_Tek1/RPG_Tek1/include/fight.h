/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** fight
*/

#ifndef FIGHT_H_
#define FIGHT_H_

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "my.h"
#include "game.h"

#define BACKGROUND ("assets/fight/background.jpg")
#define FONT ("assets/fight/font.ttf")
#define MUSIC ("assets/fight/music.ogg")
#define GANDALF ("assets/fight/gandalf.png")
#define HEART ("assets/fight/heart.png")
#define ENEMY_1 ("assets/fight/enemy1.png")
#define ENEMY_2 ("assets/fight/enemy2.png")
#define ENEMY_3 ("assets/fight/enemy3.png")
#define ENEMY_4 ("assets/fight/enemy4.png")
#define ENEMY_5 ("assets/fight/enemy5.png")
#define GANDALF_SPR (143)
#define ENEMY_SPR (70)

#define ATQ1 ("Stick-Hit")
#define ATQ2 ("Burn It")
#define ATQ3 ("Heal It")
#define ATQ4 ("You Shall Not Pass")
#define ENEMY_COUNT (3)

typedef enum selector_pos_u {
    POS1,
    POS2,
    POS3,
    POS4
} selector_pos_t;

typedef enum enemy_type_u {
    GT1,
    GT2,
    GT3
} enemy_type_t;

typedef enum game_status_u {
    LOST,
    WON,
    RUNNING
} game_status_t;

typedef struct fight_s {
    player_t *player;
    int enemy_type;
    sfText *enemy_text;
    int damage;
    int defense;
    sfEvent event;
    sfRenderWindow *win;
    sfSprite *b_sprite;
    sfSprite *g_sprite;
    sfIntRect g_rect;
    sfClock *g_clock;
    sfSprite *enemy;
    sfSprite *p_life;
    sfSprite *e_life;
    sfText *atq1;
    sfText *atq2;
    sfText *atq3;
    sfText *atq4;
    sfText *you;
    sfText *pl_text;
    sfText *en_text;
    sfText *selector;
    sfText *fight_infos;
    selector_pos_t sel_dir;
    int enemy_full_hp;
    int enemy_hp;
    int enemy_level;
    game_status_t game_status;
    int atq_cooldown;
    sfClock *clock_cooldown;
    int turn;
    sfClock *en_attack_clock;
} fight_t;

void change_selector_pos(fight_t *fight);

void enemy_attack(fight_t *fight);

void cooldown_check(fight_t *fight);

void use_attack(fight_t *fight);

void set_selector_pos(fight_t *fight, sfKeyCode key);

sfSprite *init_enemy(fight_t *fight);

bool handle_events(fight_t *fight, game_obj_t *game);

sfSprite *init_life(fight_t *fight, int type);

void init_clocks(fight_t *fight);

void set_life_text(fight_t *fight, player_t *player, int type);

fight_t *init_fight(sfRenderWindow *win, player_t *player, int enemy);

int get_rand(int min, int max);

sfText *get_enemy_text(fight_t *fight, player_t *player);

char *my_itoa(int nb);

sfText *get_text(fight_t *fight, char *name, float pos_x, float pos_y);

int start_fight(sfRenderWindow *win, player_t *player, game_obj_t *game, \
int enemy);

int run_combat(game_obj_t *game, int enemy);

#endif /* !FIGHT_H_ */
