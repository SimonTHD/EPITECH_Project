/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** capacities
*/

#include "fight.h"

void set_attack_text(fight_t *fight)
{
    switch (fight->sel_dir) {
    case POS1:
        sfText_setString(fight->fight_infos, "You use Stick-Hit!");
        break;
    case POS2:
        sfText_setString(fight->fight_infos, \
        "You use Burn-Hit and burn yourself!");
        break;
    case POS3:
        sfText_setString(fight->fight_infos, "You use Heal-Hit!");
        break;
    case POS4:
        sfText_setString(fight->fight_infos, "You Shall Not PASS!");
        break;
    }
}

void attack(fight_t *fight)
{
    int mul = 1;

    if (fight->sel_dir == POS2) {
        fight->player->pv -= fight->player->max_pv * 0.1;
        mul = 2;
    }
    if (fight->enemy_hp - (fight->player->atq *= 1.2 * mul) <= 0) {
        fight->enemy_hp = 0;
        fight->game_status = WON;
    } else
        fight->enemy_hp -= fight->player->atq *= 1.2;

}

void use_attack(fight_t *fight)
{
    if (fight->atq_cooldown || fight->turn)
        return;
    fight->atq_cooldown = 1;
    set_attack_text(fight);
    if (fight->sel_dir == POS1 || fight->sel_dir == POS2)
        attack(fight);
    if (fight->sel_dir == POS3) {
        if (fight->player->pv + 0.2 * fight->player->max_pv\
            > fight->player->max_pv)
            fight->player->pv = fight->player->max_pv;
        else
            fight->player->pv += 0.2 * fight->player->max_pv;
    }
    sfClock_restart(fight->clock_cooldown);
    sfClock_restart(fight->en_attack_clock);
}

void cooldown_check(fight_t *fight)
{
    if (!fight->atq_cooldown)
        return;
    if (!fight->turn && sfClock_getElapsedTime(fight->en_attack_clock)\
    .microseconds / 1000 > 1500) {
        if (fight->sel_dir != POS4)
            sfText_setString(fight->fight_infos, \
            "The enemy punches you in the face!");
        else
            sfText_setString(fight->fight_infos, \
            "You blocked the enemy's attack!");
        enemy_attack(fight);
        fight->turn = 1;
    }
    if (sfClock_getElapsedTime(fight->clock_cooldown)\
    .microseconds / 1000 > 3000) {
        fight->atq_cooldown = 0;
        fight->turn = 0;
    }
}