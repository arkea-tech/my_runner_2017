/*
** EPITECH PROJECT, 2018
** runner
** File description:
** functions that check the positions of the sprites
*/

#include <stdbool.h>
#include "my_runner.h"

void check_position_primary_deep(position_t *position)
{
	if (position->position_9.x == -1920) {
		position->position_9.x = 1920;
		position->position_9.y = 200;
	}
	if (position->position_10.x == -1000) {
		position->position_10.x = 1920;
		position->position_10.y = 765;
	}
	if (position->position_11.x == -1000) {
		position->position_11.x = 1920;
		position->position_11.y = 735;
	}
}

void check_position_primary_below(position_t *position)
{
	if (position->position_6.x == -1920) {
		position->position_6.x = 1920;
	}
	if (position->position_2.x == -1920) {
		position->position_2.x = 1920;
		position->position_2.y = -10;
	}
	if (position->position_7.x == -1920) {
		position->position_7.x = 1920;
		position->position_7.y = -10;
	}
	if (position->position_8.x == -1920) {
		position->position_8.x = 1920;
		position->position_8.y = 200;
	}
	check_position_primary_deep(position);
}

bool check_position_primary(position_t *position)
{
	if (position->position_3.y == 670
	    && position->position_10.x <= position->position_3.x + 60
	    && position->position_10.x + 80 >= position->position_3.x) {
		position->check_lost = 1;
	}
	if (position->position.x == -1920) {
		position->position.x = 1920;
	}
	if (position->position_5.x == -1920) {
		position->position_5.x = 1920;
	}

	if (position->position_4.x == -1920) {
		position->position_4.x = 1920;
	}
	check_position_primary_below(position);
	return (0);
}

bool check_position_secondary(position_t *position, variable_t *variable)
{
	if (position->position_11.x == position->position_3.x + 60
	    && position->position_11.y == position->position_3.y + 65) {
		position->position_3.x = position->position_3.x - 2;
		position->position_11.x = position->position_11.x - 2;
		if (position->position_3.x == -70) {
			position->check_lost = 1;
		}
	} else {
		position->position_11.x = position->position_11.x - 2;
	}
	if (variable->b == -100) {
		variable->b = 100;
	}
	return (0);
}

void check_position_third(position_t *position, variable_t *variable)
{	
	if (position->position_3.y == 550
	    && position->position_3.x + 60 >= position->position_11.x
	    && position->position_3.x + 60 <= position->position_11.x + 120) {
		variable->bool_1 = 2;
		variable->bool_2  = 2;
	}
	if(position->position_3.y >= 550 && position->position_3.y <= 670
	   && position->position_3.x == position->position_11.x + 120) {
		variable->bool_1 = 1;
		variable->bool_2 = 2;
	}
}
