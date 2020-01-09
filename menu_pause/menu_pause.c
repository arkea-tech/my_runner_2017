/*
** EPITECH PROJECT, 2018
** my_hunter
** File description:
** SCFML project in C
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <stdlib.h>
#include "menu_pause.h"

void check_mouse_infinite(sprite_menu_t *sprite_menu)
{
	sprite_menu->position_mouse = sfMouse_getPosition(NULL);
	if (sfIntRect_contains(&sprite_menu->rectangle_infinite,
			       sprite_menu->position_mouse.x,
			       sprite_menu->position_mouse.y) == 1) {
		sfText_setColor(sprite_menu->infinite, sfRed);
		if (sfMouse_isButtonPressed(sfMouseLeft) == 1) {
			sprite_menu->check_infinite = 0;
			sfText_setCharacterSize(sprite_menu->infinite, 120);
		} else {
			sfText_setCharacterSize(sprite_menu->infinite, 100);
		}
	} else {
		sfText_setColor(sprite_menu->infinite, sfWhite);
	}
}

void check_mouse_upper(sprite_menu_t *sprite_menu)
{
	sprite_menu->position_mouse = sfMouse_getPosition(NULL);
	if (sfIntRect_contains(&sprite_menu->rectangle_play,
			       sprite_menu->position_mouse.x,
			       sprite_menu->position_mouse.y) == 1) {
		sfText_setColor(sprite_menu->play, sfYellow);
		if (sfMouse_isButtonPressed(sfMouseLeft) == 1) {
			sprite_menu->check_play = 0;
			sfText_setCharacterSize(sprite_menu->play, 120);
		} else {
			sfText_setCharacterSize(sprite_menu->play, 100);
		}
	} else {
		sfText_setColor(sprite_menu->play, sfWhite);
	}
}

void check_mouse_lower(sprite_menu_t *sprite_menu)
{
	if (sfIntRect_contains(&sprite_menu->rectangle_quit,
			       sprite_menu->position_mouse.x ,
			       sprite_menu->position_mouse.y) == 1) {
		sfText_setColor(sprite_menu->quit, sfYellow);
		if (sfMouse_isButtonPressed(sfMouseLeft) == 1) {
			sprite_menu->test = 0;
			sfText_setCharacterSize(sprite_menu->quit, 120);
		} else {
			sfText_setCharacterSize(sprite_menu->quit, 100);
		}
	} else {
		sfText_setColor(sprite_menu->quit, sfWhite);
	}
}

int set_menu_pause(sprite_menu_t *sprite_menu)
{
	check_mouse_upper(sprite_menu);
	check_mouse_lower(sprite_menu);
	check_mouse_infinite(sprite_menu);
	if (sprite_menu->test == 0)
		return (2);
}

int initialisation_menu_pause(sprite_menu_t *sprite_menu,
			       texture_menu_t *texture_menu)
{
	initialisation_position_menu_pause(sprite_menu);
	if (initialisation_texture_text_menu(texture_menu) == 84)
		return (84);
	set_text_menu(sprite_menu);
	put_text_menu(texture_menu, sprite_menu);
	set_sprite_menu(sprite_menu);
	set_texture_menu(texture_menu, sprite_menu);

	return (0);
}
