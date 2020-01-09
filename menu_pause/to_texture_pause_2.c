/*
** EPITECH PROJECT, 2018
** runner
** File description:
** runner
*/

#include "menu_pause.h"

void initialisation_position_menu_pause(sprite_menu_t *sprite_menu)
{
	sprite_menu->position_play.x = 750;
	sprite_menu->position_play.y = 300;
	sprite_menu->position_quit.x = 750;
	sprite_menu->position_quit.y = 800;
	sprite_menu->position_infinite.x = 750;
	sprite_menu->position_infinite.y = 550;
	sprite_menu->rectangle_play.left = 780;
	sprite_menu->rectangle_play.top = 300;
	sprite_menu->rectangle_play.width = 300;
	sprite_menu->rectangle_play.height = 120;
	sprite_menu->rectangle_quit.left = 750;
	sprite_menu->rectangle_quit.top = 830;
	sprite_menu->rectangle_quit.width = 300;
	sprite_menu->rectangle_quit.height = 165;	
	sprite_menu->rectangle_infinite.left = 720;
	sprite_menu->rectangle_infinite.top = 580;
	sprite_menu->rectangle_infinite.width = 500;
	sprite_menu->rectangle_infinite.height = 165;
}

void to_draw_menu(sprite_menu_t *sprite_menu,
		  window_t *window)
{	
	sfRenderWindow_drawSprite(window->window,
				  sprite_menu->sprite_menu_background, NULL);
	sfRenderWindow_drawText(window->window, sprite_menu->play , NULL);
	sfRenderWindow_drawText(window->window, sprite_menu->quit , NULL);	
	sfRenderWindow_drawText(window->window, sprite_menu->infinite , NULL);
}
