/*
** EPITECH PROJECT, 2018
** runner
** File description:
** functions that handle the animations and key space bar pressed
*/

#include "my_runner.h"

void get_space_bar(position_t *position, variable_t *variable)
{
	if (position->position_3.y >= 670
	    && position->position_3.x <= position->position_11.x
	    || position->position_3.x >= position->position_11.x + 170) {
		variable->clock = 2;
		variable->bool_1 = 0;
	} else if(position->position_3.y <= 550
		  && position->position_3.x >= position->position_11.x
		  && position->position_3.x <= position->position_11.x + 120) {
		variable->clock_2 = 2;
		variable->bool_2 = 0;
	}
}

void animation_first_condition(variable_t *variable, position_t *position)
{
	if (variable->bool_2 == 1) {
		position->position_3.y = position->position_3.y + 2;
		if (position->position_3.y == 670) {
			variable->bool_2 = 2;
			variable->clock_2 = 0;
		}
	} else if (variable->bool_2 == 0) {
		position->position_3.y = position->position_3.y - 2;
		if (position->position_3.y == 260) {
			variable->bool_2 = 1;
		}
	}
}

void animation_second_condition(variable_t *variable, position_t *position)
{
	if (variable->bool_1 == 1) {
		position->position_3.y = position->position_3.y + 2;
		if (position->position_3.y == 670) {
			variable->bool_1 = 2;
			variable->clock = 0;
		}
	} else if (variable->bool_1 == 0) {
		position->position_3.y = position->position_3.y - 2;
		if (position->position_3.y == 400) {
			variable->bool_1 = 1;
		}
	}
}

void animation(position_t *position, variable_t *variable,
	       sprite_t *sprite, shape_t *shape)
{
	if (variable->clock_2 == 2) {
		animation_first_condition(variable, position);
	}
	else if (variable->clock == 2) {
		animation_second_condition(variable, position);
	}
}
