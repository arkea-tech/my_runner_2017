/*
** EPITECH PROJECT, 2018
** runner
** File description:
** sprite
*/

#include "my_runner.h"

void set_sprite(sprite_t *sprite)
{	
	sprite->sprite = sfSprite_create();
	sprite->sprite_6 = sfSprite_create();
	sprite->sprite_2 = sfSprite_create();
	sprite->sprite_5 = sfSprite_create();	
	sprite->sprite_3 = sfSprite_create();
	sprite->sprite_7 = sfSprite_create();	
	sprite->sprite_4 = sfSprite_create();	
	sprite->sprite_8 = sfSprite_create();
	sprite->sprite_9 = sfSprite_create();
	sprite->sprite_10 = sfSprite_create();
	sprite->sprite_11 = sfSprite_create();
	sprite->sprite_lost = sfSprite_create();	
	sprite->sprite_won = sfSprite_create();
}

void set_sprite_position(sprite_t *sprite, position_t *position)
{
	sfSprite_setPosition(sprite->sprite, position->position_4);	
	sfSprite_setPosition(sprite->sprite_6, position->position_6);
	sfSprite_setPosition(sprite->sprite_2, position->position);	
	sfSprite_setPosition(sprite->sprite_5, position->position_5);
	sfSprite_setPosition(sprite->sprite_3, position->position_2);	
	sfSprite_setPosition(sprite->sprite_7, position->position_7);	
	sfSprite_setPosition(sprite->sprite_4, position->position_3);	
	sfSprite_setPosition(sprite->sprite_8, position->position_8);	
	sfSprite_setPosition(sprite->sprite_9, position->position_9);	
	sfSprite_setPosition(sprite->sprite_10, position->position_10);	
	sfSprite_setPosition(sprite->sprite_11, position->position_11);
}

void varied_sprite_position(position_t *position, sprite_t *sprite)
{	
	position->position_8.x = position->position_8.x - 1;
	sfSprite_setPosition(sprite->sprite_8, position->position_8);
	position->position_9.x = position->position_9.x - 1;
	sfSprite_setPosition(sprite->sprite_9, position->position_9);
	sfSprite_setPosition(sprite->sprite_4, position->position_3);
	position->position_10.x = position->position_10.x - 2;
	sfSprite_setPosition(sprite->sprite_10, position->position_10);
	sfSprite_setPosition(sprite->sprite_11, position->position_11);
	position->position_6.x = position->position_6.x - 2;
	sfSprite_setPosition(sprite->sprite_6, position->position_6);
	position->position_4.x = position->position_4.x - 2;
	sfSprite_setPosition(sprite->sprite, position->position_4);
	position->position.x = position->position.x - 1;
	position->position_5.x = position->position_5.x - 1;
	sfSprite_setPosition(sprite->sprite_2, position->position);
	sfSprite_setPosition(sprite->sprite_5, position->position_5);		
	position->position_2.x = position->position_2.x - 5;
	sfSprite_setPosition(sprite->sprite_3, position->position_2);
	position->position_7.x = position->position_7.x - 5;
	sfSprite_setPosition(sprite->sprite_7, position->position_7);
}

void draw_sprite(window_t *window, sprite_t *sprite)
{       
	sfRenderWindow_drawSprite(window->window, sprite->sprite_6, NULL);
	sfRenderWindow_drawSprite(window->window, sprite->sprite, NULL);
	sfRenderWindow_drawSprite(window->window, sprite->sprite_2, NULL);
	sfRenderWindow_drawSprite(window->window, sprite->sprite_5, NULL);
	sfRenderWindow_drawSprite(window->window, sprite->sprite_7, NULL);
	sfRenderWindow_drawSprite(window->window, sprite->sprite_3, NULL);
	sfRenderWindow_drawSprite(window->window, sprite->sprite_11, NULL);
	sfRenderWindow_drawSprite(window->window, sprite->sprite_8, NULL);
	sfRenderWindow_drawSprite(window->window, sprite->sprite_9, NULL);
	sfRenderWindow_drawSprite(window->window, sprite->sprite_4, NULL);
	sfRenderWindow_drawSprite(window->window, sprite->sprite_10, NULL);

}
