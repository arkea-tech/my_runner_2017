/*
** EPITECH PROJECT, 2018
** runner
** File description:
** structure initialisation
*/

#include <stdbool.h>
#include "my_runner.h"

bool position_initialisation_lower(position_t *position)
{
	position->position_7.x = 1920;
	position->position_7.y = -10;
	position->position_8.x = -100;
	position->position_8.y = 200;
	position->position_9.x = 1920;
	position->position_9.y = 200;
	position->position_10.x = 1000;
	position->position_10.y = 765;
	position->position_11.x = 2000;
	position->position_11.y = 735;
	position->check_lost = 0;

	return (1);
}

bool position_initialisation(position_t *position)
{
	position->position.x = 0;
	position->position.y = 0;
	position->position_2.x = 0;
	position->position_2.y = -10;
	position->position_3.x = 500;
	position->position_3.y = 670;
	position->position_4.x = 0;
	position->position_4.y = 0;
	position->position_5.x = 1920;
	position->position_5.y = 0;
	position->position_6.x = 1920;
	position->position_6.y = 0;
	position_initialisation_lower(position);

	return (0);
}

shape_t *shape_initialisation(shape_t *shape)
{
	shape->offset.x = 1;
	shape->offset.y = 0;
	shape->scale.x = 2;
	shape->scale.y = 2;
	shape->rectangle.top = 0;
	shape->rectangle.left = 0;
	shape->rectangle.width = 83.7;
	shape->rectangle.height = 968;
	shape->rectangle_2.top = 1500;
	shape->rectangle_2.left = 735;
	shape->rectangle_2.width = 120;
	shape->rectangle_2.height = 120;

	return (shape);
}

variable_t variable_initialisation(variable_t variable)
{
	variable.x = 0;
	variable.slot = 0;
	variable.bool_1 = 0;
	variable.bool_2 = 0;
	variable.r = 0;
	variable.b = 100;
	variable.floor = 0;
	variable.sky_tree = 0;
	variable.i = 0;
	variable.block = 0;
	variable.spike = 0;
	variable.wall = 0;
	variable.i = 0;
	variable.clock = 0;
	variable.clock_2 = 0;
	variable.can = 0;
	variable.can_2 = 0;

	return (variable);
}
