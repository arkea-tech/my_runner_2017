/*
** EPITECH PROJECT, 2018
** runner
** File description:
** clock
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "my_runner.h"

void clock_to_create(window_t *window)
{
	window->score_clock = sfClock_create();
	window->character_clock = sfClock_create();
}


int to_clock_check(window_t *window)
{
	sfTime time_elapsed = sfClock_getElapsedTime(window->score_clock);

	if (time_elapsed.microseconds >= 200000) {
		sfClock_restart(window->score_clock);
		return (1);
	}
}

void to_clock_check_character(window_t *window, shape_t *shape)
{
	sfTime time_elapsed = sfClock_getElapsedTime(window->character_clock);
	
	if (time_elapsed.microseconds >= 90000) {		
		shape->rectangle.left = shape->rectangle.left + 83.7;
		sfClock_restart(window->character_clock);
	}
}

void animation_character(window_t *window, shape_t *shape, sprite_t *sprite)
{
	sfSprite_setTextureRect(sprite->sprite_4, shape->rectangle);
	to_clock_check_character(window, shape);
	if (shape->rectangle.left >= 968)
		shape->rectangle.left = 0;

}
