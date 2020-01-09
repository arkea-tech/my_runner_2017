/*
** EPITECH PROJECT, 2018
** runner
** File description:
** texture
*/

#include <stdbool.h>
#include "my_runner.h"

bool initialisation_texture_below_below(texture_t *texture)
{
	texture->texture_won =
		sfTexture_createFromFile("image/you_won.png", NULL);
	if (!texture->texture_won)
		return (1);	
	texture->texture_lost =
		sfTexture_createFromFile("image/you_lost.png", NULL);
	if (!texture->texture_lost)
		return (1);
	return (0);
}

bool initialisation_texture_below(texture_t *texture)
{
	texture->texture_7 =
		sfTexture_createFromFile("image/forestruun.png", NULL);
	if (!texture->texture_7)
		return (1);
	texture->texture_4 =
		sfTexture_createFromFile("image/heyy9.png", NULL);
	if (!texture->texture_4)
		return (1);
	texture->texture_8 =
	       sfTexture_createFromFile("image/damn.png", NULL);
	if (!texture->texture_8)
		return (1);
	texture->texture_9 = sfTexture_createFromFile("image/damn.png", NULL);
	if (!texture->texture_9)
		return (1);
	texture->texture_10 = sfTexture_createFromFile("image/spike2.png", NULL);
	if (!texture->texture_10)
		return (1);
	texture->texture_11 = sfTexture_createFromFile("image/block.png", NULL);
	if (!texture->texture_11)
		return (1);
	if (initialisation_texture_below_below(texture) == 1)
		return (1);
	return (0);
}

int initialisation_texture(texture_t *texture)
{
	texture->texture = sfTexture_createFromFile("image/yes.jpg", NULL);
	if (!texture->texture)
		return (84);
	texture->texture_6 = sfTexture_createFromFile("image/yes.jpg", NULL);
	if (!texture->texture_6)
		return (84);
	texture->texture_2 = sfTexture_createFromFile("image/loool.png", NULL);
	if (!texture->texture_2)
		return (84);
	texture->texture_5 = sfTexture_createFromFile("image/loool.png", NULL);
	if (!texture->texture_5)
		return (84);
	texture->texture_3 = sfTexture_createFromFile("image/forestruun.png", NULL);
	if (!texture->texture_3)
		return (84);
	if (initialisation_texture_below(texture) == 1)
		return (84);
	return (0);
}

void set_texture(texture_t *texture, sprite_t *sprite)
{
	sfSprite_setTexture(sprite->sprite_won, texture->texture_won, sfTrue);	
	sfSprite_setTexture(sprite->sprite_lost, texture->texture_lost, sfTrue);
	sfSprite_setTexture(sprite->sprite, texture->texture, sfTrue);
	sfSprite_setTexture(sprite->sprite_6, texture->texture_6, sfTrue);
	sfSprite_setTexture(sprite->sprite_2, texture->texture_2, sfTrue);
	sfSprite_setTexture(sprite->sprite_5, texture->texture_5, sfTrue);
	sfSprite_setTexture(sprite->sprite_3, texture->texture_3, sfTrue);
	sfSprite_setTexture(sprite->sprite_7, texture->texture_7, sfTrue);
	sfSprite_setTexture(sprite->sprite_4, texture->texture_4, sfTrue);
	sfSprite_setTexture(sprite->sprite_8, texture->texture_8, sfTrue);
	sfSprite_setTexture(sprite->sprite_9, texture->texture_9, sfTrue);
	sfSprite_setTexture(sprite->sprite_10, texture->texture_10, sfTrue);
	sfSprite_setTexture(sprite->sprite_11, texture->texture_11, sfTrue);
}
