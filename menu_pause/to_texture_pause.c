/*
** EPITECH PROJECT, 2018
** runner
** File description:
** runner
*/

#include "menu_pause.h"

int initialisation_texture_text_menu(texture_menu_t *texture_menu)
{
	texture_menu->texture_menu_background =
		sfTexture_createFromFile("image/game-menu-background.jpg", NULL);
	if (!texture_menu->texture_menu_background)
		return (84);	
	texture_menu->chinese_text_play =
		sfFont_createFromFile("image/Karate.ttf");
	if (!texture_menu->chinese_text_play)
		return (84);	
	texture_menu->chinese_text_quit =
		sfFont_createFromFile("image/Karate.ttf");
	if (!texture_menu->chinese_text_quit)
		return (84);
	return (0);
}

void set_texture_menu(texture_menu_t *texture_menu, sprite_menu_t *sprite_menu)
{
	sfSprite_setTexture(sprite_menu->sprite_menu_background,
			    texture_menu->texture_menu_background, sfTrue);
}

void put_text_menu(texture_menu_t *texture_menu, sprite_menu_t *sprite_menu)
{	
	sfText_setFont(sprite_menu->play,
		       texture_menu->chinese_text_play);
	sfText_setString(sprite_menu->play, "Play");
	sfText_setCharacterSize(sprite_menu->play, 100);
	sfText_setPosition(sprite_menu->play,
			   sprite_menu->position_play);
	sfText_setFont(sprite_menu->quit,
		       texture_menu->chinese_text_quit);
	sfText_setString(sprite_menu->quit, "Quit");
	sfText_setCharacterSize(sprite_menu->quit, 100);
	sfText_setPosition(sprite_menu->quit,
			   sprite_menu->position_quit);	
	sfText_setFont(sprite_menu->infinite,
		       texture_menu->chinese_text_quit);
	sfText_setString(sprite_menu->infinite, "Infinity");
	sfText_setCharacterSize(sprite_menu->infinite, 100);
	sfText_setPosition(sprite_menu->infinite,
			   sprite_menu->position_infinite);
}

void set_sprite_menu(sprite_menu_t *sprite_menu)
{
	sprite_menu->sprite_menu_background = sfSprite_create();
}

void set_text_menu(sprite_menu_t *sprite_menu)
{	
	sprite_menu->play = sfText_create();
	sprite_menu->quit = sfText_create();	
	sprite_menu->infinite = sfText_create();
}
