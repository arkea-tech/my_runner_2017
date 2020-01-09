/*
** EPITECH PROJECT, 2018
** runner
** File description:
** window
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "my_runner.h"

void window_mode_init(window_t *window)
{
	window->mode.width = 1920;
	window->mode.height = 1080;
	window->mode.bitsPerPixel = 32;
}

int init_window(window_t *window)
{
	sfFloatRect rect = {0, 0, 1920, 1080};
	sfView *view = sfView_createFromRect(rect);

	window_mode_init(window);
	window->window = sfRenderWindow_create(window->mode, "my_runner",
					       sfFullscreen, NULL);
	//sfRenderWindow_setFramerateLimit(window->window, 60);
	//window->window.setKeyRepeatEnabled(false);
	sfRenderWindow_setView(window->window, view);
	return (0);
}

variable_t initialisation_structure(position_t *position,
			      shape_t *shape, variable_t variable)
{	
	position_initialisation(position);
	shape_initialisation(shape);
	variable = variable_initialisation(variable);

	return (variable);
}

void set_visual(sprite_t *sprite,
		position_t *position, texture_t *texture)
{	
	set_sprite(sprite);
	set_sprite_position(sprite, position);
	set_texture(texture, sprite);
}
