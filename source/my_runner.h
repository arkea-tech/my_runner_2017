#ifndef RUNNER_H_
#define RUNNER_H_

#include <stdbool.h>
#include <SFML/Audio.h>
#include <SFML/Graphics.h>

#define NUMBER 0

typedef struct texture_t texture_t;
struct texture_t {
	sfTexture *texture;
	sfTexture *texture_2;
	sfTexture *texture_3;
	sfTexture *texture_4;
	sfTexture *texture_5;
	sfTexture *texture_6;
	sfTexture *texture_7;
	sfTexture *texture_8;
	sfTexture *texture_9;
	sfTexture *texture_10;
	sfTexture *texture_11;
	sfTexture *texture_won;	
	sfTexture *texture_lost;
};

typedef struct sprite_t sprite_t;
struct sprite_t {
	sfSprite *sprite;
	sfSprite *sprite_2;
	sfSprite *sprite_3;
	sfSprite *sprite_4;
	sfSprite *sprite_5;
	sfSprite *sprite_6;
	sfSprite *sprite_7;
	sfSprite *sprite_8;
	sfSprite *sprite_9;
	sfSprite *sprite_10;
	sfSprite *sprite_11;	
	sfSprite *sprite_won;
	sfSprite *sprite_lost;
};

typedef struct position_t position_t;
struct position_t {
	sfVector2f position;
	sfVector2f position_2;
	sfVector2f position_3;
	sfVector2f position_4;
	sfVector2f position_5;
	sfVector2f position_6;
	sfVector2f position_7;
	sfVector2f position_8;
	sfVector2f position_9;
	sfVector2f position_10;
	sfVector2f position_11;
        bool check_lost;
};

typedef struct window_t window_t;
struct window_t {
	sfRenderWindow *window;
	sfEvent event;
	sfVideoMode mode;	
	sfClock *score_clock;		
	sfClock *character_clock;
	sfMusic *music;
	sfMusic *sound;
};

typedef struct shape_t shape_t;
struct shape_t {
	sfVector2f offset;
	sfVector2f scale;
	sfIntRect rectangle;
	sfIntRect rectangle_2;
};

typedef struct variable_t variable_t;
struct variable_t {
	int x;
	int slot;
	int bool_1;
	int bool_2;
	int r;
	int b;
	char buffer[100];
	char buffer_opt[100];
	int floor;
	int sky_tree;
	int i;
	int block;
	int spike;
	int wall;
	int clock;
	int clock_2;
	int can;
	int can_2;
};

typedef struct score_t score_t;
struct score_t {
	sfFont *score_font;
	sfText *score_text;
	sfVector2f score_position;
};

int my_runner(int ac, char **av);
int open_file(char *name_file, int *val);
void put_in(char *buffer,char *buffer_opt, int val);
void driver(char **av, char *buffer, char *buffer_opt);
bool position_initialisation_lower(position_t *position);
bool position_initialisation(position_t *position);
shape_t *shape_initialisation(shape_t *shape);
variable_t variable_initialisation(variable_t variable);
int initialisation_texture(texture_t *texture);
void set_texture(texture_t *texture, sprite_t *sprite);
void set_sprite(sprite_t *sprite);
void set_sprite_position(sprite_t *sprite, position_t *position);
bool initialisation_texture_below(texture_t *texture);
bool check_position_primary(position_t *position);
void check_position_primary_below(position_t *position);
void check_position_primary_deep(position_t *position);
bool check_position_secondary(position_t *position, variable_t *variable);
void check_position_third(position_t *position, variable_t* variable);
void get_space_bar(position_t *position, variable_t *variable);
void animation(position_t *position, variable_t *variable,
	       sprite_t *sprite, shape_t *shape);
void animation_first_condition(variable_t *variable, position_t *position);
void animation_second_condition(variable_t *variable, position_t *position);
void animation_third_condition(variable_t *variable,
			       position_t *position, shape_t *shape);
void varied_sprite_position(position_t *position, sprite_t *sprite);
void draw_sprite(window_t *window, sprite_t *sprite);
void window_mode_init(window_t *window);
int init_window(window_t *window);
variable_t initialisation_structure(position_t *position,
				    shape_t *shape, variable_t variable);
void set_visual(sprite_t *sprite,
		position_t *position, texture_t *texture);
int my_runner_second_loop_content(position_t *position, variable_t *variable,
				  sprite_t *sprite,
				  shape_t *shape);
void to_draw_score(score_t *score, window_t *window);
int initialisation_score(score_t *score);
void varied_score(score_t *score, char *value);
void set_score(score_t *score);
void clock_to_create(window_t *window);
int to_clock_check(window_t *window);
bool initialisation_texture_below_below(texture_t *texture);
void to_clock_check_character(window_t *window, shape_t *shape);
void animation_character(window_t *window, shape_t *shape, sprite_t *sprite);

#endif /* RUNNER_H */
