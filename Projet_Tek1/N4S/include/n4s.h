/*
** EPITECH PROJECT, 2020
** AIA_n4s_2019
** File description:
** n4s
*/

#ifndef N4S_H_
#define N4S_H_

#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "../full_lib/include/lib.h"

#define start_sim "start_simulation\n"

#define stop_sim "stop_simulation\n"

#define info_lidar "get_info_lidar\n"

int check_direction(double *, char *);
char **split_word_file(char *, char);
int check_speed(double *, char *);
int getline_err(char *, size_t);
int check_if_map_finish(char *);
int launch_simulation(void);
int detect_finish(char *);
int end_simulation(void);
int get_route(char **);
int launch_n4s(void);

enum{SUCCESS = 0, ERROR = 84};

#endif /* !N4S_H_ */