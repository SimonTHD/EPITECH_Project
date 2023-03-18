##
## EPITECH PROJECT, 2019
## my_rpg
## File description:
## Makefile
##

SRC =	./src/main.c		\
		src/menu/create_launcher_window.c \
		src/menu/launcher_loop.c \
		src/menu/display_htp.c	\
		src/menu/create_init_launcher_obj.c \
		src/menu/manage_button_evt.c \
		src/menu/draw_btn.c	\
		src/menu/load_btn_list.c \
		src/menu/create_btn/create_close_btn.c \
		src/engine/insidebox_detect.c \
		src/engine/vector_convert.c \
		src/menu/create_btn/create_rez_btn.c \
		src/game/game_window_create.c \
		src/game/init_game/game_init.c \
		src/game/init_game/init_game_obj.c	\
		src/game/init_game/init_player.c	\
		src/game/game_loop.c	\
		src/game/animation.c	\
		src/game/move_handling.c \
		src/game/display.c \
		src/game/map_manage/map_colision_load.c \
		src/game/map_manage/scan_playerpos.c	\
		src/game/map_manage/update_player_pos.c \
		src/game/load_map/start_map/load_entity_start_map.c	\
		src/game/load_map/start_map/load_event_start_map.c	\
		src/game/load_map/start_map/load_start_map.c	\
		src/game/fight/run_combat.c	\
		src/game/fight/enemy.c			\
		src/game/fight/fight.c 		\
		src/game/fight/structs.c 		\
		src/game/fight/events.c		\
		src/game/fight/rand.c			\
		src/game/fight/my_itoa.c		\
		src/game/fight/life.c			\
		src/game/fight/capacities.c	\
		src/game/fight/selector.c		\
		src/game/fight/enemy_capacities.c	\
		src/game/fight/clocks.c			\
		src/game/fight/positions.c		\
		src/game/add_quest.c			\
		src/game/print_dialogue_box.c\
		src/print_hud.c	\
		src/game/update_hud.c	\
		src/game/pause/create_pause_menu_btns.c	\
		src/game/pause/display_pause.c	\
		src/game/pause/load_pause_btns.c	\
		src/save_code/if_save.c	\
		src/save_code/delete_save.c	\
		src/save_code/save_game.c	\
		src/save_code/load_save.c	\
		src/game/load_map/gandalf_map/load_entity_gandalf_caravane.c	\
		src/game/load_map/gandalf_map/load_event_gandalf_caravane.c	\
		src/game/load_map/gandalf_map/load_gandalf_caravane.c	\
		src/inventory/display_inv.c	\
		src/inventory/init_inventory.c	\
		src/inventory/inventory.c	\
		src/inventory/items_fct.c	\
		src/game/event/load_camping_evt.c	\
		src/game/event/load_caravane_evt.c	\
		src/game/event/add_msg_talk_box.c	\
		src/game/event/event_test.c	\
		src/game/event/event_addxp.c	\
		src/game/event/character_evt/reponse_quest_1.c	\
		src/game/event/character_evt/reponse_quest_2.c	\
		src/game/event/character_evt/reponse_quest_1_2.c	\
		src/game/event/character_evt/reponse_quest_2_2.c	\
		src/game/event/character_evt/reponse_quest_3_2.c	\
		src/game/event/character_evt/reponse_quest_3.c	\
		src/game/event/character_evt/reponse_quest_4_2.c	\
		src/game/event/character_evt/reponse_quest_4.c	\
		src/game/event/quest/quest_1.c	\
		src/game/event/quest/quest_1_2.c	\
		src/game/event/quest/quest_2.c	\
		src/game/event/quest/quest_2_2.c	\
		src/game/event/quest/quest_3.c	\
		src/game/event/quest/quest_3_2.c	\
		src/game/event/quest/quest_4.c	\
		src/game/event/quest/quest_4_2.c	\
		src/game/event/reward/reward_1.c	\
		src/game/event/reward/reward_1_2.c	\
		src/game/event/reward/reward_2.c	\
		src/game/event/reward/reward_2_2.c	\
		src/game/event/reward/reward_3.c	\
		src/game/event/reward/reward_3_2.c	\
		src/game/event/reward/reward_4.c	\
		src/game/event/reward/reward_4_2.c	\
		src/game/event/null_event.c	\
		src/game/event/quest/resource_quest.c	\
		src/game/init_game/init_talk_box.c	\
		src/game/init_game/init_hud.c

OBJ =	$(SRC:.c=.o)

NAME =	my_rpg

CC = gcc

LIB = -lcsfml-graphics -lcsfml-system -lcsfml-audio -lcsfml-window -Llib/my -lmy -lm

CFLAGS = -W -Wall -Wextra -Wshadow -I include

all: $(NAME)

$(NAME): $(OBJ)
		 $(MAKE) -C lib/my
		 $(CC) -o $(NAME) $(OBJ) $(LIB)

clean:
	$(MAKE) clean -C lib/my
	$(RM) $(OBJ)

fclean: clean
	$(MAKE) fclean -C lib/my
	$(RM) $(NAME)

re: fclean all

debug: CFLAGS += -g
debug: fclean all

.PHONY: all clean fclean re