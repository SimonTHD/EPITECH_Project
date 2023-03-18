/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** game
*/


#ifndef GAME_H_
#define GAME_H_

#include "my.h"
#include "engine.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/Graphics/Color.h>
#include <SFML/Window/Cursor.h>

#define WALK_RIGHT 2
#define WALK_LEFT 3
#define WALK_UP 1
#define WALK_DOWN 0
#define STAY 0


typedef struct player_s player_t;
typedef struct anim_obj_s anim_obj_t;
typedef struct map_obj_s map_obj_t;
typedef struct game_obj_s game_obj_t;
typedef struct entity_s entity_t;
typedef int (*evt)(game_obj_t *game);
typedef struct talk_box_s talk_box_t;
typedef struct quest_s quest_t;
typedef struct hud_s hud_t;
typedef struct inv_s inv_t;
typedef struct item_s item_t;

sfRenderWindow *game_window_create(sfVector2i win_rez);
int game(sfVector2i win_rez);
int display_pause(game_obj_t *game, sfRenderWindow *window);
int game_loop(game_obj_t *game, sfRenderWindow *window);
void animation(anim_obj_t *anim, int direction);
void is_next_frame(game_obj_t *game);
void move_player(game_obj_t *game);
map_obj_t *load_start_map(void);
void print_and_display(sfRenderWindow *window, game_obj_t* game);
char **load_collision_map(char *map_link);
sfVector2i scan_playerpos(char **map);
anim_obj_t *init_anim_player(void);
int is_alphabetical(char c);
void update_player_pos(game_obj_t *game);
game_obj_t *init_game_obj(sfVector2i win_rez);
player_t *init_player(char ** map_colision);
void load_entity_start_map(map_obj_t *map);
void load_event_start_map(map_obj_t *map);
quest_t *add_quest(quest_t *list, quest_t *new);
void print_dialogue_box(game_obj_t *game);
void add_msg_talk_box(game_obj_t *game, char *text);
void print_hud(game_obj_t *game);
void update_hud(game_obj_t *game);
sfVector2f pos_to_vector(sfVector2i win_rez, float x, float y);
map_obj_t *load_gandalf_caravane(void);
void load_event_gandalf_caravane(map_obj_t *map);
void load_entity_gandalf_caravane(map_obj_t *map);
talk_box_t *init_talk_box(sfVector2i win_rez);
hud_t *init_hud(sfVector2i win_rez);
//event
int event_test(game_obj_t *game);
int event_addxp(game_obj_t *game);
int null_event(game_obj_t *game);
int load_camping_evt(game_obj_t *game);
int load_caravane_evt(game_obj_t *game);
//quest
int quest_1(game_obj_t *game);
int quest_1_2(game_obj_t *game);
int quest_2(game_obj_t *game);
int quest_2_2(game_obj_t *game);
int quest_3(game_obj_t *game);
int quest_3_2(game_obj_t *game);
int quest_4(game_obj_t *game);
int quest_4_2(game_obj_t *game);
//reward
int reward_1(game_obj_t *game);
int reward_1_2(game_obj_t *game);
int reward_2_2(game_obj_t *game);
int reward_2(game_obj_t *game);
int reward_3(game_obj_t *game);
int reward_3_2(game_obj_t *game);
int reward_4(game_obj_t *game);
int reward_4_2(game_obj_t *game);
int event_reward_test(game_obj_t *game);
//reponse quest
int reponse_quest_1(game_obj_t *);
int reponse_quest_1_2(game_obj_t *);
int reponse_quest_2(game_obj_t *);
int reponse_quest_2_2(game_obj_t *);
int reponse_quest_3(game_obj_t *);
int reponse_quest_3_2(game_obj_t *);
int reponse_quest_4(game_obj_t *);
int reponse_quest_4_2(game_obj_t *);
//inventory
int inv_loop(game_obj_t *game, sfRenderWindow *window);
int event_type(game_obj_t *game, sfRenderWindow *window);
void inventory(game_obj_t *game, sfWindow *window, sfEvent event);
void draw_inventory(game_obj_t *game, sfWindow *window, sfEvent event);
void init_tab_item(game_obj_t *game);
int item_sprite(sfVector2i position, item_t **inv);
void unequipment_fct(item_t *item, item_t **inv);
void equipment_fct(item_t *item, item_t **inv);
void inv_equipment(inv_t * inv, item_t **item, sfWindow *window);
void change_the_slot(item_t *item_it, item_t *item_to, int equipment);
void mouse_moove_item(sfWindow * window, inv_t *inv);
void init_item(inv_t *inv);
void init_inventory(game_obj_t *game);

//quest resource
extern const char quest_1_title[];
extern const char quest_1_describe[];
extern const char quest_1_dialogue[];
extern const char quest_1_2_title[];
extern const char quest_1_2_describe[];
extern const char quest_1_2_dialogue[];
extern const char quest_2_title[];
extern const char quest_2_describe[];
extern const char quest_2_dialogue[];
extern const char quest_2_2_title[];
extern const char quest_2_2_describe[];
extern const char quest_2_2_dialogue[];
extern const char quest_3_title[];
extern const char quest_3_describe[];
extern const char quest_3_dialogue[];
extern const char quest_3_2_title[];
extern const char quest_3_2_describe[];
extern const char quest_3_2_dialogue[];
extern const char quest_4_title[];
extern const char quest_4_describe[];
extern const char quest_4_dialogue[];
extern const char quest_4_2_title[];
extern const char quest_4_2_describe[];
extern const char quest_4_2_dialogue[];
extern const sfVector2f joe;
extern const sfVector2f kenji;
extern const sfVector2f michael;
extern const sfVector2f consin_mich;
extern const sfVector2f bernard;
extern const sfVector2f chuck;
extern const bool debug_mode;

struct item_s {
    sfSprite *item_sprite;
    sfTexture *item_text;
    sfVector2f item_pos;
    sfIntRect item_rect;
    int in_body;
    int can_e;
    int status;
    int attack;
    int def;
    int life;
    int r_life;
    int conso;
    int stack;
};

struct inv_s {
    bool is_display;
    int quit;
    int fill;
    sfVector2i pos_g;
    sfClock *clock_inv;
    sfTime time_inv;
    float seconds;
    item_t *slot[22];
};

struct quest_s
{
    bool is_completed;
    int action_id;
    int quest_id;
    char *title;
    char *description;
    evt reward;
    quest_t *next;
};

struct player_s
{
    int pv;
    int max_pv;
    int lvl;
    int atq;
    int def;
    int xp;
    int next_lvl_100;
    sfVector2i pos;
    anim_obj_t *anim_obj;
    int direction;
    int last_action_id;
};

struct anim_obj_s
{
    sfTexture* sprite_sheet;
    sfSprite* sprite_one_frame;
    sfVector2i width_height_frame;
    int nb_of_frame;
    int frame;
};

struct entity_s
{
    sfVector2f pos;
    anim_obj_t *anim;
    int direction;
};

struct map_obj_s
{
    sfSprite* sprite_map;
    sfVector2u size;
    char **buffer_map;
    char *location_map;
    int nb_event;
    evt *event;
    entity_t **entity;
};

struct talk_box_s
{
    bool have_talk;
    bool in_print;
    bool in_reset;
    sfSoundBuffer *buffer_sound;
    sfSound *sound;
    sfText *text;
    sfClock *clock;
    sfSprite *cadre;
};

struct hud_s
{
    sfSprite *hud_sprite;
    sfSprite *pv_bar_sprite;
    sfSprite *xp_bar_sprite;
    sfIntRect *pv_bar_rect;
    sfIntRect *xp_bar_rect;
    sfText *pv_text;
    sfText *xp_text;
    sfText *level_text;
    sfIntRect max_pv_rect;
    sfIntRect max_xp_rect;
};

struct game_obj_s
{
    map_obj_t *actual_map;
    player_t *player;
    sfEvent *event;
    sfClock *clock;
    sfClock *move_clock;
    talk_box_t *talk_box;
    sfRenderWindow *window;
    quest_t *quest_list;
    hud_t *hud;
    inv_t *inv;
    bool is_play;
};

#endif /* !GAME_H_ */
