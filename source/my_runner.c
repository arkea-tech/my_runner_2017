/*
** EPITECH PROJECT, 2018
** my_runner
** File description:
** finite runner game
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <math.h>
#include "my_runner.h"
#include "../include/my.h"
#include "../menu_pause/menu_pause.h"

int my_runner_second_loop_content(position_t *position, variable_t *variable,
				  sprite_t *sprite, shape_t *shape)
{
	window_t *window;

	check_position_primary(position);
	shape->rectangle_2.left = shape->rectangle_2.left;
	check_position_secondary(position, variable);
	variable->b = variable->b - 1;
	check_position_third(position, variable);
	animation(position, variable, sprite, shape);
	varied_sprite_position(position, sprite);
	return (0);
}

int my_runner_second_loop(
	window_t *window,
	sprite_t *sprite,
	position_t *position,
	shape_t *shape,
	variable_t *variable, score_t *score,
	sprite_menu_t *sprite_menu,
	texture_menu_t texture_menu)
{
	static long h = 0;
	char *buff = malloc(sizeof(char) * h);

	while (sfRenderWindow_pollEvent(window->window, &window->event))
	{
		if (window->event.type == sfEvtClosed)
			sfRenderWindow_close(window->window);
		if (window->event.type == sfEvtKeyPressed) {
			if (window->event.key.code == sfKeySpace) {
				get_space_bar(position, variable);
				sfMusic_play(window->sound);
			}
			if (window->event.key.code == sfKeyQ) {
				return (1);
			}
		}
	}
	sfRenderWindow_clear(window->window, sfBlack);
	if (sprite_menu->check_play == 0 ||
	    sprite_menu->check_infinite == 0) {
		my_runner_second_loop_content(position, variable,
					      sprite, shape);
		if (variable->clock == 0)
			animation_character(window, shape, sprite);
	}
	if (set_menu_pause(sprite_menu) == 2)
		return (1);
	if (sprite_menu->check_play == 0
	    && to_clock_check(window) == 1
	    || sprite_menu->check_infinite == 0
	    && to_clock_check(window) == 1)
		h++;
	sprintf(buff, "%d", h);
	if (h <= 80 && variable->can == 0
	    || sprite_menu->check_infinite == 0
	    && variable->can == 0)
		varied_score(score, buff);
	draw_sprite(window, sprite);
	if (position->check_lost == 1 && variable->can_2 == 0) {
		sfRenderWindow_drawSprite(window->window,
					  sprite->sprite_lost, NULL);
		variable->can = 1;
	}
	if (h >= 80 && variable->can == 0 && sprite_menu->check_infinite == 1) {
		sfRenderWindow_drawSprite(window->window,
					  sprite->sprite_won, NULL);
		variable->can_2 = 1;
	}
	to_draw_score(score, window);

	if (sprite_menu->check_play == 1 && sprite_menu->check_infinite == 1)
		to_draw_menu(sprite_menu, window);

	sfRenderWindow_display(window->window);
	return (0);
}

int my_runner(int ac, char **av)
{
	window_t window;
	sprite_t sprite;
	position_t position;
	shape_t shape;
	variable_t variable;
	texture_t texture;
	score_t score;
	sprite_menu_t sprite_menu;
	texture_menu_t texture_menu;

	init_window(&window);
	if (!window.window)
		return (84);
	variable = initialisation_structure(&position, &shape, variable);
	if (initialisation_texture(&texture) == 84)
		return (84);
	if (initialisation_score(&score) == 84)
		return (84);
	if (initialisation_menu_pause(&sprite_menu, &texture_menu) == 84)
		return (84);
	set_score(&score);
	set_visual(&sprite, &position, &texture);
	clock_to_create(&window);
	sprite_menu.test = 1;
	sprite_menu.check_play = 1;
	sprite_menu.check_infinite = 1;
	if (ac == 2) {
		if (av[1][0] == '-' && av[1][1] == 'i') {
			sprite_menu.check_infinite = 0;
		}
		else
			sprite_menu.check_infinite = 1;
	}
	window.music = sfMusic_createFromFile("helicopter.ogg");
	window.sound = sfMusic_createFromFile("jump.ogg");
	sfMusic_setLoop(window.music, sfTrue);
	sfMusic_play(window.music);
	sfRenderWindow_setKeyRepeatEnabled(window.window, sfFalse);
	while (sfRenderWindow_isOpen(window.window))
	{
		if (my_runner_second_loop(&window, &sprite,
					  &position,
					  &shape,
					  &variable, &score,
					  &sprite_menu, texture_menu) == 1)
			return (0);
	}
	return (0);
}

int main(int ac, char **av)
{	
	sprite_menu_t sprite_menu;
	
	if (ac == 2) {
		if (av[1][0] == '-' && av[1][1] == 'h') {
			my_putstr(" Usage: ./my_runner -[h]-[i].\n\n");
			my_putstr(" -h: Display the usage and quit.\n");
			my_putstr(" -i: Launch the game in infinity mode.\n\n");
			my_putstr(" ---GAME---\n\n");
			my_putstr(" Press SPACE_KEY to jump.\n");
			my_putstr(" Press Q_KEY to quit the game.\n\n");
			my_putstr(" ---GAME---\n");
		}
		else
			my_runner(ac, av);
	} else
		my_runner(ac, av);
	return (0);
}
