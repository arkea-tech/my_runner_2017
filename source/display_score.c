/*
** EPITECH PROJECT, 2018
** runner
** File description:
** score
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include "my_runner.h"

int initialisation_score(score_t *score)
{
	score->score_font = sfFont_createFromFile("image/scb.ttf");
	if (!score->score_font)
		return (84);
	score->score_position.x = 50;
	score->score_position.y = 50;
	return (0);
}

void set_score(score_t *score)
{
	score->score_text = sfText_create();
	sfText_setFont(score->score_text,
		       score->score_font);
	sfText_setCharacterSize(score->score_text, 100);
	sfText_setPosition(score->score_text,
			   score->score_position);
}

void varied_score(score_t *score, char *value)
{
	sfText_setString(score->score_text, value);
}

void to_draw_score(score_t *score, window_t *window)
{
	sfRenderWindow_drawText(window->window, score->score_text , NULL);
}
